#include <iostream.h>
#include <stdlib.h>

int temp [30];
int prom;
int i;
int suma=0;
int opc=1;
int lleno;
int main()

{

while (opc==1)
{

cout<<"\n 1-Agregar temperaturas del mes pasado";
cout<<"\n 2-Saber el promedio de las temperaturas del mes pasado";
cout<<"\n 3-Saber el promedio de la primera quincena del mes pasado";
cout<<"\n 4-Saber el promedio de la segunda quincena del mes pasado";
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
cin>>temp [i];
if(temp[i]>50)
cout<<"\n ¡¡¡ Error !!! ";
i=i+1;
lleno=1;
}
}
break;
case 2:{
if (lleno==1){
suma=0;
i=0;

while(i<30)
{
suma=suma+temp[i];
i=i+1;

}
prom=suma/30;
cout<<"\n El promedio de temperaturas del mes pasado es:"<<prom;
 }
else
 {
cout<<"\n ¡¡¡ ERROR !!! ";
}
}
break;
case 3:{
if (lleno==1){
suma=0;
i=0;
while(i<14)

{
suma=suma+temp[i];
i=i+1;
}
prom=suma/14;
cout<<"\n El promedio de temperaturas del mes pasado es:"<<prom;
}
else {
cout<<"\n ¡¡¡ ERROR !!! ";
}
}
break;
case 4:{
 if (lleno==1){
suma=0;
i=15;
while(i<30)
              {
suma=suma+temp[i];
i=i+1;

}
prom=suma/15;
cout<<"\n El promedio de temperaturas del mes pasado es:"<<prom;
}
else
{
cout<<"\n ¡¡¡ ERROR !!! ";
}
}

break;
case 5:{
cout<<"\n Desea salir del programa?(1-si/0-no):";
cin>>opc;

     system("PAUSE");
    return 0;

}
break;
default:{
cout<<"\n Ha elegido una opcion equivocada";
}
}
cout<<"\n Desea ingresar otra opcion?:(1-si/0-no)";
cin>>opc;
}
       system("PAUSE");
      return 0;
}
