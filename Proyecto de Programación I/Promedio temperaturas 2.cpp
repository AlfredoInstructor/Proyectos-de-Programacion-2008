#include <iostream.h>
#include <stdlib.h>
int temperaturas [30];
int prom_temp;
int i;
int suma=0;
int opc=1;
int main()
{

while (opc==1)
  {
  cout<<"\n 1-Agregar temperaturas de un mes";
  cout<<"\n 2-Saber el promedio de las temperaturas de un mes";
  cout<<"\n 3-Saber el promedio de la primera quincena";
  cout<<"\n 4-Saber el promedio de la segunda quincena";
  cout<<"\n 5-Salir del programa";
  cout<<"\n Ingrese la opcion deseada:";
  cin>>opc;
  switch (opc)
     {
     case 1:{
             i=0;
             while(i<30)
              {
              cout<<"\n Ingrese una temperatura del mes pasado "<<i;cout<<":";
              cin>>temperaturas [i];
              if(temperaturas[i]>60)
                cout<<"\n Error";
              i=i+1;
              }
            }
            break;
     case 2:{
            suma=0;
            i=0;
            while(i<30)
              {
              suma=suma+temperaturas[i];
              i=i+1;
              }
              prom_temp=suma/30;
              cout<<"\n El promedio de temperaturas es:"<<prom_temp;
            }
            break;
     case 3:{
            suma=0;
            i=0;
            while(i<14)
              {
              suma=suma+temperaturas[i];
              i=i+1;
              }
              prom_temp=suma/14;
              cout<<"\n El promedio de temperaturas es:"<<prom_temp;
            }
            break;
     case 4:{
            suma=0;
            i=15;
            while(i<30)
              {
              suma=suma+temperaturas[i];
              i=i+1;
              }
              prom_temp=suma/15;
              cout<<"\n El promedio de temperaturas es:"<<prom_temp;
            }
            break;
     case 5:{
            cout<<"\n ¿Desea salir del programa?(1=si/0=no):";
            cin>>opc;
         system("PAUSE");
         return 0;
            }
            break;
     default:{
             cout<<"\n Ha elegido una obcion equivocada";
             }
     }
  cout<<"\n Desea ingresar otra opcion?:(1=si/0=no)";
  cin>>opc;
  }
system("PAUSE");
return 0;
}
