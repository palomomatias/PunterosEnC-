#include <stdio.h>
#include <stdlib.h>
//cuanto bits pesa un entero o char se responde el sizeof de ese entero
typedef struct
{
    int a;
    char b;

}dato;



int main()
{
/*
  dato d ;
  d.a=5;
  d.b='<';

  dato* pDato;
  pDato=&d;
  printf("%d---  %c",pDato->a,pDato->b);
*/
int i;
  dato l[2]={{1,'a'},{1,'b'}};
  dato* pLista;
  pLista= l;

  for(i=0;i<2;i++)
  {
      printf("%d--%c\n",(*(pLista+i)).a,(*(pLista+i)).b);
       printf("%d--%c\n",(pLista+i)->a,(pLista+i)->b);
  }


    return 0;
}

