/*7. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido 
por el usuario. Ejemplo, si introduc�s el n�mero 256.879, deber�a desplegarse el n�mero 0.879.*/

#include <iostream>
#include <conio.h>
using namespace std;

double parteFraccionaria(double);

int main() {
	double num=0,resultado=0;
	
	cout<<"numero: ";cin>>num;	
	resultado=parteFraccionaria(num);
	
	cout<<"\nParte fraccionaria: "<<resultado;
	
	getch();
	return 0;
}

double parteFraccionaria(double n) {
	int parteEntera=n;
	double parteFraccionaria=n-parteEntera;
	
	return parteFraccionaria;
}
