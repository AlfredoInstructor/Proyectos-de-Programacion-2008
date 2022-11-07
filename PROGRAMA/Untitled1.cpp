#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
               struct electro { int codigo;
                                char descripcion [500];
                                float precio_costo;
                                float precio_venta_menor;
                                float precio_venta_mayor;
                                int cantidad;
                                int cantidad_minima;
                                int ubicacion;
                                char nombre_proveedor [500];
                                int promocion;
                                char marca [500];
                                char modelo [500];
                                char garantia [500];
                                int descuento_contado;

                                };
           electro stock[100];

        int opc, salida;
        int i=0;
        int tope = 0;
        int encontre, mod, chau;
        float suma;
int main(int argc, char *argv[])
{
while(salida!=13)
{
 cout<<"\n PROGRAMA DE CONTROL DE STOCK";
 cout<<"\n ****************************\n";
 cout<<"\n 1-Agregar un electrodomestico al stock\n";
 cout<<" 2-Modificar los datos de un electrodomestico\n";
 cout<<" 3-Cantidad de electrodomesticos en stock\n";
 cout<<" 4-Cantidad de electrodomesticos que hay en un stock de un electrodomestico\n";
 cout<<" 5-Mostrar electrodomesticos que hay en un stock\n";
 cout<<" 6-Capital que hay en stock\n";
 cout<<" 7-Borrar un electrodomestico que la empresa no trabaje mas con el\n";
 cout<<" 8-Realizar la venta de un electrodomestico\n";
 cout<<" 9-Realizar la compra de un electrodomestico\n";
 cout<<"10-Mostrar solo los eletrodomesticos que estan en promocion\n";
 cout<<"11-Mostrar solo los electrodomesticos que tienen descuento al contado\n";
 cout<<"12-Mostrar solo los electrodomesticos que estan por debajo de stock minimo\n";
 cout<<"13-Desea salir del programa?\n";
 cout<<"\n";
 cout<<"=> ";
 cin>>opc;


 switch(opc)
 {
case 1:{
  clrscr();
  cout<<"Agregar un electrodomestico al stock:\n";
  cout<<"-------------------------------------";
  cout<<"\n";
  i = tope;
  tope = tope + 1;





         cout<<"\nIngrese el codigo del articulo: "<<i<<"\n";
         cin>>stock[i].codigo;
         cout<<"\nIngrese la descripcion del stock: "<<i<<"\n";
         cin>>stock[i].descripcion;
         cout<<"\nIngresar el precio de costo: "<<i<<"\n";
         cin>>stock[i].precio_costo;
         cout<<"\nIngresar precio de venta al por menor: "<<i<<"\n";
         cin>>stock[i].precio_venta_menor;
         cout<<"\nIngresar el precio de venta al por mayor: "<<i<<"\n";
         cin>>stock[i].precio_venta_mayor;
         cout<<"\nIngresar la cantidad de stock: "<<i<<"\n";
         cin>>stock[i].cantidad;
         cout<<"\nIngresar la canitdad de stock minimo: "<<i<<"\n";
         cin>>stock[i].cantidad_minima;
         cout<<"\nIngresar su ubicacion adentro del stock: "<<i<<"\n";
         cin>>stock[i].ubicacion;
         cout<<"\nIngresar nombre del proveedor que la empresa la compro: "<<i<<"\n";
         cin>>stock[i].nombre_proveedor;
         cout<<"\nIngresar si esta en promocion? (1-si,0-no): "<<i<<"\n";
         cin>>stock[i].promocion;
         cout<<"\nIngrese la marca: "<<i<<"\n";
         cin>>stock[i].marca;
         cout<<"\nIngrese el modelo: "<<i<<"\n";
         cin>>stock[i].modelo;
         cout<<"\nIngrese si tiene o no garantia(1-si,0-no): "<<i<<"\n";
         cin>>stock[i].garantia;
         cout<<"\nIngrese si tiene o no descuento al contado (1-si, 0-no): "<<i<<"\n";
         cin>>stock[i].descuento_contado;
         clrscr();
         }

  break;

case 2:{
  mod=0;
  encontre=0;
  i=0;
  clrscr();
  cout<<"Modificar los datos de un electrodomestico:\n";
  cout<<"-------------------------------------------";
  cout<<"\n";
  cout<<"\n";
  cout<<"Ingrese el codigo del Electrodomestico: ";
  cin>>mod;
while(encontre==0&&i<tope)
{
if (mod==stock[i].codigo)
encontre=1;
else
i=i+1;
}

if (encontre==1)
 {
  cout<<"\nDatos Actuales\n";
  cout<<"--------------\n";
  cout<<"Codigo:                             "<<stock[i].codigo<<"\n";
  cout<<"Descripcion:                        "<<stock[i].descripcion<<"\n";
  cout<<"Precio de costo:                    "<<stock[i].precio_costo<<"\n";
  cout<<"Precio de venta al por menor:       "<<stock[i].precio_venta_menor<<"\n";
  cout<<"Precio de venta al por mayor:       "<<stock[i].precio_venta_mayor<<"\n";
  cout<<"Cantidad en stock:                  "<<stock[i].cantidad<<"\n";
  cout<<"Stock minimo:                       "<<stock[i].cantidad_minima<<"\n";
  cout<<"Ubicacion en stock:                 "<<stock[i].ubicacion<<"\n";
  cout<<"Proveedor:                          "<<stock[i].nombre_proveedor<<"\n";
  cout<<"En Promocion? (1-si, 0-no):         "<<stock[i].promocion<<"\n";
  cout<<"Marca:                              "<<stock[i].marca<<"\n";
  cout<<"Modelo:                             "<<stock[i].modelo<<"\n";
  cout<<"Garantia? (1-si, 0-no):             "<<stock[i].garantia<<"\n";
  cout<<"Descuento al contado? (1-si, 0-no): "<<stock[i].descuento_contado<<"\n\n";
  cout<<"Es este el electrodomestico que desea modificar? (1-si, 0-no): ";
  cin>>mod;

  if (mod==1)
  {
  clrscr();

         cout<<"Modificando...\n";
         cout<<"--------------\n";
         cout<<"\nIngrese el codigo del articulo: "<<i<<"\n";;
         cin>>stock[i].codigo;
         cout<<"\nIngrese la descripcion del stock: "<<i<<"\n";
         cin>>stock[i].descripcion;
         cout<<"\nIngresar el precio de costo: "<<i<<"\n";
         cin>>stock[i].precio_costo;
         cout<<"\nIngresar precio de venta al por menor: "<<i<<"\n";
         cin>>stock[i].precio_venta_menor;
         cout<<"\nIngresar el precio de venta al por mayor: "<<i<<"\n";
         cin>>stock[i].precio_venta_mayor;
         cout<<"\nIngresar la cantidad de stock: "<<i<<"\n";
         cin>>stock[i].cantidad;
         cout<<"\nIngresar la canitdad de stock minimo: "<<i<<"\n";
         cin>>stock[i].cantidad_minima;
         cout<<"\nIngresar su ubicacion adentro del stock: "<<i<<"\n";
         cin>>stock[i].ubicacion;
         cout<<"\nIngresar nombre del proveedor que la empresa la compro: "<<i<<"\n";
         cin>>stock[i].nombre_proveedor;
         cout<<"\nIngresar si esta en promocion? (1-si,0-no): "<<i<<"\n";
         cin>>stock[i].promocion;
         cout<<"\nIngrese la marca: "<<i<<"\n";
         cin>>stock[i].marca;
         cout<<"\nIngrese el modelo: "<<i<<"\n";
         cin>>stock[i].modelo;
         cout<<"\nIngrese si tiene o no garantia(1-si,0-no): "<<i<<"\n";
         cin>>stock[i].garantia;
         cout<<"\nIngrese si tiene o no descuento al contado (1-si, 0-no): "<<i<<"\n";
         cin>>stock[i].descuento_contado;

  }
  }
else
{
cout<<"\nERROR NO EXISTE";
getch();
}
}

clrscr();
break;

case 3:{
clrscr();
  cout<<"Cantidad de Electrodomesticos en stock\n";
   cout<<"-------------------------------------\n";
  cout<<tope;
  getch();
  clrscr();


       }

break;

case 4:{
  clrscr();
  cout<<"Cantidad en stock de un electrodomestico dado\n";
  cout<<"---------------------------------------------";
  cout<<"\n";
  cout<<"\n";
  cout<<"Ingrese su ubicacion dentro del stock: ";
  cin>>i;
  cout<<"\n";
  cout<<"El electrodomestico: "<<stock[i].descripcion;
  cout<<"\nTiene un stock de: "<<stock[i].cantidad<<" unidades";
  getch();
  clrscr();
  }
break;

case 5:{
  clrscr();
  cout<<"Todos los electrodomesticos en stock\n";
  cout<<"------------------------------------";
  cout<<"\n";
  cout<<"\n";
  i=0;
  while(i<tope)
  {
  cout<<i;
  cout<<"\n";
  cout<<"------------------------------------\n";
  cout<<"Codigo:                             "<<stock[i].codigo<<"\n";
  cout<<"Descripcion:                        "<<stock[i].descripcion<<"\n";
  cout<<"Precio de costo:                    "<<stock[i].precio_costo<<"\n";
  cout<<"Precio de venta al por menor:       "<<stock[i].precio_venta_menor<<"\n";
  cout<<"Precio de venta al por mayor:       "<<stock[i].precio_venta_mayor<<"\n";
  cout<<"Cantidad en stock:                  "<<stock[i].cantidad<<"\n";
  cout<<"Stock minimo:                       "<<stock[i].cantidad_minima<<"\n";
  cout<<"Ubicacion en stock:                 "<<stock[i].ubicacion<<"\n";
  cout<<"Proveedor:                          "<<stock[i].nombre_proveedor<<"\n";
  cout<<"En Promocion? (1-si, 0-no):         "<<stock[i].promocion<<"\n";
  cout<<"Marca:                              "<<stock[i].marca<<"\n";
  cout<<"Modelo:                             "<<stock[i].modelo<<"\n";
  cout<<"Garantia? (1-si, 0-no):             "<<stock[i].garantia<<"\n";
  cout<<"Descuento al contado? (1-si, 0-no): "<<stock[i].descuento_contado<<"\n\n";
  i=i++;
   }}
  getch();
  clrscr();
  break;

case 6:{
     clrscr();
     i = 0;
     suma = 0;
     while ( i <= tope )
     {
     suma=suma +(stock[i].precio_costo);
     i = i + 1;
     }
     cout<<"Capital que hay en stock \n";
     cout<<"------------------------\n";
     cout<<suma;

     getch();
     clrscr();

      }
   break;

case 10:{
    clrscr();
    cout<<"Electrodomesticos en Promocion \n";
    cout<<"------------------------------\n";
     i=0;

     while(i<=tope)
     {
     if (stock[i].promocion==1)
     {
  cout<<i;
  cout<<"\n";
  cout<<"------------------------------------\n";
  cout<<"Codigo:                             "<<stock[i].codigo<<"\n";
  cout<<"Descripcion:                        "<<stock[i].descripcion<<"\n";
  cout<<"Precio de costo:                    "<<stock[i].precio_costo<<"\n";
  cout<<"Precio de venta al por menor:       "<<stock[i].precio_venta_menor<<"\n";
  cout<<"Precio de venta al por mayor:       "<<stock[i].precio_venta_mayor<<"\n";
  cout<<"Cantidad en stock:                  "<<stock[i].cantidad<<"\n";
  cout<<"Stock minimo:                       "<<stock[i].cantidad_minima<<"\n";
  cout<<"Ubicacion en stock:                 "<<stock[i].ubicacion<<"\n";
  cout<<"Proveedor:                          "<<stock[i].nombre_proveedor<<"\n";
  cout<<"En Promocion? (1-si, 0-no):         "<<stock[i].promocion<<"\n";
  cout<<"Marca:                              "<<stock[i].marca<<"\n";
  cout<<"Modelo:                             "<<stock[i].modelo<<"\n";
  cout<<"Garantia? (1-si, 0-no):             "<<stock[i].garantia<<"\n";
  cout<<"Descuento al contado? (1-si, 0-no): "<<stock[i].descuento_contado<<"\n\n";
  i=i+1;
  }
  else
  i=i+1;
  }

  getch();


  }
  clrscr();
break;

case 11:{
    clrscr();
    cout<<"Electrodomesticos con descuento al contado \n";
    cout<<"------------------------------------------\n";
     i=0;

     while(i<=tope)
     {
     if (stock[i].descuento_contado==1)
     {
  cout<<i;
  cout<<"\n";
  cout<<"------------------------------------\n";
  cout<<"Codigo:                             "<<stock[i].codigo<<"\n";
  cout<<"Descripcion:                        "<<stock[i].descripcion<<"\n";
  cout<<"Precio de costo:                    "<<stock[i].precio_costo<<"\n";
  cout<<"Precio de venta al por menor:       "<<stock[i].precio_venta_menor<<"\n";
  cout<<"Precio de venta al por mayor:       "<<stock[i].precio_venta_mayor<<"\n";
  cout<<"Cantidad en stock:                  "<<stock[i].cantidad<<"\n";
  cout<<"Stock minimo:                       "<<stock[i].cantidad_minima<<"\n";
  cout<<"Ubicacion en stock:                 "<<stock[i].ubicacion<<"\n";
  cout<<"Proveedor:                          "<<stock[i].nombre_proveedor<<"\n";
  cout<<"En Promocion? (1-si, 0-no):         "<<stock[i].promocion<<"\n";
  cout<<"Marca:                              "<<stock[i].marca<<"\n";
  cout<<"Modelo:                             "<<stock[i].modelo<<"\n";
  cout<<"Garantia? (1-si, 0-no):             "<<stock[i].garantia<<"\n";
  cout<<"Descuento al contado? (1-si, 0-no): "<<stock[i].descuento_contado<<"\n\n";
  i=i+1;
  }
  else
  i=i+1;
  }

  getch();


  }
  clrscr();
break;

case 12:{
    clrscr();
    cout<<"Electrodomesticos con descuento al contado \n";
    cout<<"------------------------------------------\n";
     i=0;

     while(i<=tope)
     {
     if (stock[i].cantidad<stock[i].cantidad_minima)
     {
  cout<<i;
  cout<<"\n";
  cout<<"------------------------------------\n";
  cout<<"Codigo:                             "<<stock[i].codigo<<"\n";
  cout<<"Descripcion:                        "<<stock[i].descripcion<<"\n";
  cout<<"Precio de costo:                    "<<stock[i].precio_costo<<"\n";
  cout<<"Precio de venta al por menor:       "<<stock[i].precio_venta_menor<<"\n";
  cout<<"Precio de venta al por mayor:       "<<stock[i].precio_venta_mayor<<"\n";
  cout<<"Cantidad en stock:                  "<<stock[i].cantidad<<"\n";
  cout<<"Stock minimo:                       "<<stock[i].cantidad_minima<<"\n";
  cout<<"Ubicacion en stock:                 "<<stock[i].ubicacion<<"\n";
  cout<<"Proveedor:                          "<<stock[i].nombre_proveedor<<"\n";
  cout<<"En Promocion? (1-si, 0-no):         "<<stock[i].promocion<<"\n";
  cout<<"Marca:                              "<<stock[i].marca<<"\n";
  cout<<"Modelo:                             "<<stock[i].modelo<<"\n";
  cout<<"Garantia? (1-si, 0-no):             "<<stock[i].garantia<<"\n";
  cout<<"Descuento al contado? (1-si, 0-no): "<<stock[i].descuento_contado<<"\n\n";
  i=i+1;
  }
  else
  i=i+1;
  }

  getch();


  }
  clrscr();

 break;
case 13:{
  cout<<"\nDesea salir del programa? (1-si, 0-no) ";
  cin>>chau;
  if (chau==1)
  salida=13;
  else
  clrscr();
   }
break;

default:{
     clrscr();
break;
     }
        }}


   system("PAUSE");
   return 0;
   }
