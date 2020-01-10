#include<stdio.h>

void invertir_numeros(int x, int y);

int main(int argc, char const *argv[])
{


    int a,b;
    a = 5;
    b = 7; 

    printf("a=%d, b =%d\n",a,b);

    // Se llama a la funcion: 

    invertir_numeros(a,b);

    printf("a=%d, b =%d\n",a,b);


    printf("\n\n\n\n\n Fin del codigo \n\n\n\n\n");

    return 0;
}


void invertir_numeros(int x, int y)
{
    int z;

    printf("\n\n Inicio de la funcion \n\n");

    z = x; 
    x = y; 
    y = z; 

    printf("x=%d, y =%d\n",x,y);

    printf("\n\n Termino de la funcion \n\n");

}