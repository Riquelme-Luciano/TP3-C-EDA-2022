/*7. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido 
por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.*/

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
