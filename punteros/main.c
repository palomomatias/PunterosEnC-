#include <stdio.h>
#include <stdlib.h>


/*
posibilidad de administrar recursos

clase 15 en el campus para hacer ejercicios




*/
int cargarArray(int*,int );
int mostrarArray(int*,int );

int main()
{
  int vector [3];
  int * puntero;
    int i;
    int *p;
  puntero=vector;


if(  cargarArray(vector,3))
{
    printf("carga exitosa!!!\n");
}
else{
    printf("error al cargar los datos !!!");
}
  mostrarArray(vector,3);





    return 0;
}
int cargarArray(int* array,int tam )
{
 int i;
 int retorno=0;
  if(array!=NULL)
  {

retorno=1;

  for(i=0;i<tam;i++)
  {
      printf("ingrese un numero");
      scanf("%d",array+i);
  }
  }
return retorno;

}

int mostrarArray(int* array,int tam )
{
    int i;
    for(i=0;i<tam;i++)
  {
      printf("%d\n",*(array+i));// cuando yo quiero obtener el valor de la direccion de memoria se usa el *
  }
}
