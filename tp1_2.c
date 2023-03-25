#include <stdio.h>

int cuad1 (int num);
void cuad2 (int num);
void dircont (int *var);
void invertir (int a, int b);
void orden (int a, int b);

int main()
{
    int num,a,b;
    // 4a)
    printf("\nIngrese un número: ");
    scanf("%i", &num);
    printf("%d al cuadrado es %d\n", num, cuad1(num));
    
    // 4b)
    printf("\nIngrese un número: ");
    scanf("%i", &num);
    cuad2(num);

    // 4c)
    dircont(&num); // por ejemplo con la variable num

    // 4d)
    printf("\nIngrese el número a: ");
    scanf("%d", &a);
    printf("Ingrese el número b: ");
    scanf("%d", &b);

    invertir(a,b);

    // 4e)
    printf("\nIngrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    orden(a,b);

    return 0;
}

int cuad1 (int num)
{
    return num*num;
}

void cuad2 (int num)
{
    printf("%d al cuadrado es %d\n", num, num*num);
}

void dircont (int *var)
{
    printf("\nLa variable se encuentra en la dirección %p de memoria.\nSu contenido actual es: %d\n", var, *var);
}

void invertir (int a, int b)
{
    int c = b;
    b = a;
    a = c;

    printf("Ahora la variable a = %d y la b = %d\n", a,b);
}

void orden (int a, int b)
{
    int c = b;
    if (b < a) {
        b = a;
        a = c;
        printf("%d (a actual) es menor que %d (b actual)\n", a,b);
    } else if (a == b) { printf("%d (a) y %d (b) son iguales\n", a,b); } else {
        printf("%d (a) es menor que %d (b)\n", a,b);
    }
}