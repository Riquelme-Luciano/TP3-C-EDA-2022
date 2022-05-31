/*9. Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
llamando a la función correspondiente, según las que siguen: 
A. Calcula la multiplicación por sumas sucesivas. 
Ej. 2 x 4 = 2 + 2 + 2 + 2 
(suma 4 veces el numero 2 generalizando nxm =n+n+…(m veces). 
B. Calcula la división por restas sucesivas Ej. 10/2=5 
(5 indica la cantidad de veces que pude restar 2 al 10) 
C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 
(multiplica 2 por si mismo 3 veces)*/

#include <iostream>
#include <conio.h>
using namespace std;

int sumaSucesiva(int,int);
int restaSucesiva(int,int);
int multiSucesiva(int,int);

int main() {
	int funcion=0,n1=0,n2=0,r1=0,divisor=0,dividendo=0,cociente=0,res=0,mult1=0,mult2=0;
	char opcion;
	
	do {
		system("cls");
		cout<<"1)Suma Sucesiva: \n2)Resta Sucesiva:\n3)Multiplicacion Sucesiva:\n Eliga opcion a ejecutar: "; cin>>funcion;
	
		switch(funcion) {
			case 1:
				system("cls");
			
				cout<<"\nMultiplicacion por sumas sucesivas: "<<endl;
				cout<<"Ingrese numeros"<<endl;
				cout<<"numero 1: ";cin>>n1;
				cout<<"\nnumero 2: ";cin>>n2;
				r1=sumaSucesiva(n1,n2);
				cout<<"\nResultado: "<< r1;
				break;
			case 2:
				system("cls");
				
				cout<<"Resta Suceciva"<<endl;
				cout<<"Dividendo: ";cin>>dividendo;
				cout<<"\nDivisor: ";cin>>divisor;
				cociente=restaSucesiva(dividendo,divisor);
				cout<<"\nResultado: "<<cociente;
				break;
			
			case 3:
				system("cls");
				
				cout<<"Multiplicacion Suceciva"<<endl;
				cout<<"Numero: ";cin>>mult1;
				cout<<"\nMultiplicador: ";cin>>mult2;
				res=multiSucesiva(mult1,mult2);
				cout<<"\nResultado: "<<res;
				break;
			
			default:
				cout<<"\nNo ha ingresado una opcion valida";
				break;
		}
		cout<<"\nDesea continuar? s || n"<<endl; 
		cin>>opcion;
		
	} while(opcion=='s' || opcion=='S');
	
	
	getch();
	return 0;
}

int sumaSucesiva(int num, int cont ) {
	int suma=0;
	
	for(int i=0;i<cont;i++) {
		suma+= num;	
	}
	
	return suma;
}

int restaSucesiva(int dividendo,int divisor) {
	int cociente=0;
	
	while(dividendo>=divisor) {
		dividendo-=divisor;
		cociente++;
	}
	
	return cociente;
}

int multiSucesiva(int num,int multiplicador) {
	int res=1;
	
	for(int i=0;i<multiplicador;i++) {
		res*=num;	
	}
	
	return res;
}







