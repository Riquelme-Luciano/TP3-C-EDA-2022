/*6. Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una 
potencia en n�mero entero positivo y despliegue el resultado. El n�mero entero positivo deber� 
ser el segundo valor transmitido a la funci�n.*/

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
