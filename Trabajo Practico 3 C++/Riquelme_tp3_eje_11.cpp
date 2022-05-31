/*11. Realice una función que reciba un número y devuelva el factorial del mismo. 
El factorial de un número: es el producto del número por todos sus antecesores hasta 1.
Ejemplos:
• Factorial de 0 es 1 (por definición) Se denota 0!=1
• Factorial de 1 es 1 Se denota 1!=1
• Factorial de 4= 4*3*2*1 Se denota 4!=24
• Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800*/

#include <iostream>
#include <conio.h>
using namespace std;

int calcularFactorial(int);

int main() {
	int n,fac;
	
	cout<<"Ingrese numero: ";cin>>n;
	fac=calcularFactorial(n);
	cout<<"Factorial de "<<n<<" es: "<<fac;
	
	getch();
	return 0;
}

int calcularFactorial(int num) { 
	int i=1;
	int factorial=1;
	
	while(i<=num) {
		factorial*=i;
		i++;		
		cout<<factorial<<endl;
	}
	
	return factorial;
}
