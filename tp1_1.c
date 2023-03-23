#include <stdio.h>
    int main()
    {
        int var = 5;
        int *p = &var;

    //3a)
        printf("Hola mundo");

    //3e)
        printf("\nContenido del puntero: %d", *p);
        printf("\nDirección de memoria almaceneda por el puntero: %p", p);
        printf("\nDirección de memoria de la variable: %p", &var);
        printf("\nDirección de memoria del puntero: %p", &p);
        printf("\nTamaño de memoria utilizado por la variable: %d", sizeof(var));

        return 0;
    }