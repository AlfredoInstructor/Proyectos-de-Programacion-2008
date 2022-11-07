#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
int temp [30];
int promedio_temperatura;
int i;
int suma=0;
int main()
{
i=0;
while(i<30)
  {
  cout<<"\nIngrese una temperatura del mes pasado"<<i<<":";
  cin>>temp [i];
  if(temp[i]>60)
     cout<<"\n NO ES VALIDO:";
  i=i+1;
  }
suma=0;
i=0;
while(i<30)
  {
  suma=suma+temp[i];
  i=i+1;
  }
  promedio_temperatura=suma/30;
  cout<<"\nEl promedio de temperatura es:"<<promedio_temperatura;
  cout<<"\nFin del programa";
system("PAUSE");
return 0;
}

