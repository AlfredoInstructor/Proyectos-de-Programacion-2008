#include <iostream.h>
#include <stdlib.h>
int temperaturas [30];
int prom_temp;
int i;
int suma=0;
int main()
{
i=0;
while(i<30)
  {
  cout<<"\n Ingrese una temperatura del mes pasado "<<i;cout<<":";
  cin>>temperaturas [i];
  if(temperaturas[i]>60)
     cout<<"\n Error:";
  i=i+1;
  }
suma=0;
i=0;
while(i<30)
  {
  suma=suma+temperaturas[i];
  i=i+1;
  }
  prom_temp=suma/30;
  cout<<"\n El promedio de temperaturas es:"<<prom_temp;

system("PAUSE");
return 0;
}
