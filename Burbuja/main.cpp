#include <iostream>
using namespace std;

void ingresar(int a[],int n);
void imprimir(int a[],int n);
void burbuja(int a[],int n);


int main()
{

    int arreglo[100];
    int n;
    cout<<"INGRESE EL TAMANIO:";
void burbuja(int a[],int n)
{
    int i,j,aux;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;
            }
        }
    }


}
