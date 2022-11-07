#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
int temp [30];
int promedio_temperaturas;
int i;
int suma=0;
int opc=1;
int main()
{
cout<<"BIENVENIDO AL PROGRAMA";
while (opc==1)
  {
  cout<<"\n1-Agregar temperaturas de un mes";
  cout<<"\n2-Saber el promedio de las temperaturas de un mes";
  cout<<"\n3-Saber el promedio de la 1ra quincena";
  cout<<"\n4-Saber el promedio de la 2da quincena";
  cout<<"\n5-Salir del programa:";
  cin>>opc;
  switch (opc)
     {
     case 1:{
             i=0;
             while(i<30)
              {
              cout<<"\n Ingrese una temperatura del mes pasado"<<i<<":";
              cin>>temp [i];
              if(temp[i]>60)
                cout<<"\n NO ES VALIDO";
              i=i+1;
              }
            }
            break;
     case 2:{
            suma=0;
            i=0;
            while(i<30)
              {
              suma=suma+temp[i];
              i=i+1;
              }
              promedio_temperaturas=suma/30;
              cout<<"\nEl promedio de temperaturas es:"<<promedio_temperaturas;
            }
            break;
     case 3:{
            suma=0;
            i=0;
            while(i<14)
              {
              suma=suma+temp[i];
              i=i+1;
              }
              promedio_temperaturas=suma/14;
              cout<<"\nEl promedio de temperaturas es:"<<promedio_temperaturas;
            }
            break;
     case 4:{
            suma=0;
            i=15;
            while(i<30)
              {
              suma=suma+temp[i];
              i=i+1;
              }
              promedio_temperaturas=suma/15;
              cout<<"\nEl promedio de temperaturas es:"<<promedio_temperaturas;
            }
            break;
     case 5:{
         system("PAUSE");
         return 0;
            }
            break;
     default:{
             cout<<"\nHa elegido una obcion equivocada";
             }
     }
  cout<<"\nDesea ingresar otra opcion?:(1=si/0=no)";
  cin>>opc;
  }
cout<<"\n";
cout<<"\nFin del programa";
cout<<"\n";
system("PAUSE");
return 0;
}

