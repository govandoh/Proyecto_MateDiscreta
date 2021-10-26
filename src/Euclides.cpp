#include <iostream>
#include <stdio.h>
using namespace std;
//Declaracion de Variables
int A, B, C, Residuo_temp, n1, n2, n3, menor1, menor2;

void pedirDosNumeros(){
	cout<<"Ingrese el primero numero: \n";
	cin>>n1; 
	cout<<"Ingrese el segundo numero: \n";
	cin>>n2;
}

void pedirTresNumeros(){
	cout<<"Ingrese el primero numero: \n";
	cin>>n1; 
	cout<<"Ingrese el segundo numero: \n";
	cin>>n2;
	cout<<"Ingrese el tercer numero: \n";
	cin>>n3;
}

int determinar_Menor(int n1, int n2){
	if(n1 < n2){
		A = n2;
		B = n1;
		cout<<"El primer numero es menor: "<<B<<"\n";
	}else{
		B = n2; 
		A = n1;
		cout<<"El segundo numero es menor: "<<B<<"\n";
	}
	return 0;
}

/*int determinar_Menores(int n1, int n2, int n3){
	if(n1>n2){
		menor1=n1;
		n1=n2;
		n2=menor1;
	}
	if(n1>n2){
		menor1=n1;
		n1=n3;
		n2=menor1;
	}
	if(n2>n3){
		cout<<"prueba";
		menor1=n2;
		n2=n3;
		n3=menor1;
		menor2= n1;
		n1 =n2;
		n2 = menor2;
		
	}
	menor1 = n1;
	menor2 = n2;
	cout<<"Los menores son: \n";
	cout<<menor1<< "\n";
	cout<<menor2<< "\n";
	cout<<n3<< "\n";
	
}*/

void mostrarMCD(){
	cout<<"El MCD de: "<< A << " entre: " << B << " es: "<< Residuo_temp; 
}

int mcd_Euclides(int A, int B){
	//Ciclo para validar si numero menro es diferente de 0
	while(B != 0){
		Residuo_temp = B; 
		B = A % B; // el residuo del mayor entre el menor se vuelve en nuestro nuevo denominador
		A = Residuo_temp; // el Denominador anterior para a ser el nuevo denominador
	}
	return A;
}


int main(){
	pedirDosNumeros();
	determinar_Menor(n1,n2);
	mcd_Euclides(A,B);
	mostrarMCD();
	//determinar_Menores(n1, n2, n3);
	return A;
}
