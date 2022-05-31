/*6. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una 
potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá 
ser el segundo valor transmitido a la función.*/

#include <iostream>
#include <conio.h>
using namespace std;

int funpot(int,int);

int main() {
	int num=0, n=0, resultado;
	
	cout<<"Ingrese"; 
	cout<<"\nnumero: ";cin>>num;
	cout<<"\notro numero: "; cin>>n;
	
	resultado=funpot(num,n);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	getch();
	return 0;
}

int funpot(int num,int n) {
	 int elevado= num*num;
	 int potencia= n*elevado;
	 
	 return potencia;
}
