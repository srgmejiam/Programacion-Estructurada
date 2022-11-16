#include<iostream>
using namespace std;

void Registros()
{
	//Tamaño del Arreglo
	int Size =0;	
	cout<<"Cuantos Registros quiere guardar"<<endl;
	cin>>Size;
	
	//Declarando el arreglo 
	int *Arreglo = new int[Size];
	
	//Agregando valores al arreglo
	for(int i=0;i<Size;i++)
	{
		cout<<"Ingrese el registro ["<<(i+1)<<"] del Arreglo"<<endl;
		cin>>Arreglo[i];
	}
	
	//Limpiando la consola
	system("cls");
	
	cout<<"Los registros ingresados son los siguientes:"<<endl;
	//Leer el arreglo
	for(int i=0;i<Size;i++)
	{
		cout<<Arreglo[i]<<endl;
	}
	
}

int main (int argc, char *argv[]) 
{
	//Llamando al metodo Resgistros
	Registros();
	
	system("pause>null");
		return 0;
}

