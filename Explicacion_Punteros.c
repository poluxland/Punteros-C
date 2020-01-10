#include<stdio.h>

void invertir_numeros(int *x, int *y);

int main(int argc, char const *argv[])
{
    int a,b;
    a = 5;
    b = 7; 

    printf("\n\n\n\n\n Inicio del codigo \n\n\n\n\n");
    printf("a=%d, b =%d\n",a,b);
    printf("La direccion en memoria de a es: %#x\n",&a);
    printf("La direccion en memoria de b es: %#x\n",&b);

    invertir_numeros(&a,&b);
    printf("a=%d, b =%d\n",a,b);
    printf("La direccion en memoria de a es: %#x\n",&a);
    printf("La direccion en memoria de b es: %#x\n",&b);

    printf("\n\n\n\n\n Fin del codigo \n\n\n\n\n");

    return 0;
}


void invertir_numeros(int *x, int *y)
{
    int z;
    printf("\n\n Inicio de la funcion \n\n");
    printf("La direccion en memoria de x es: %#x\n",&x);
    printf("La direccion en memoria de y es: %#x\n",&y);

    printf("La direccion en memoria de z es: %#x\n",&z);

    printf("Lo que esta siendo apuntado por x es: %d\n",*x);
    printf("Lo que esta siendo apuntado por y es: %d\n",*y);

    z = *x; 
    *x = *y; 
    *y = z; 


    printf("Lo que esta siendo apuntado por x es: %d\n",*x);
    printf("Lo que esta siendo apuntado por y es: %d\n",*y);
    printf("\n\n Termino de la funcion \n\n");

}