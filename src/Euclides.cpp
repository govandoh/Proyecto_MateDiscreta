#include <iostream>
#include <stdio.h>
using namespace std;
//Declaracion de Variables
int A, B, C, Residuo_temp, n1, n2, n3, menor1, menor2;
int salir = 0;
int opcion;

void pedirDosNumeros(){
	cout<<" \n ****ALGORITMO CON DOS NUMEROS *** \n";
	cout<<"Ingrese el primero numero: \n";
	cin>>n1; 
	cout<<"Ingrese el segundo numero: \n";
	cin>>n2;
}

void pedirTresNumeros(){
	cout<<" ****ALGORITMO CON TRES NUMEROS *** \n";
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
		cout<<"\n";
		cout<<"El numero menor es: "<<B<<"\n\n";
	}else{
		B = n2; 
		A = n1;
		cout<<"\n";
		cout<<"El numero menor es: "<<B<<"\n\n";
	}
	return 0;
}

int determinar_Menores(int n1, int n2, int n3){
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
	
}

void mostrarMCD(){
	cout<<"\n El MCD de: "<< A << " entre: " << B << " es: "<< Residuo_temp<<"\n"; 
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


void menu() {
	cout<<"\n------- MENU PRINCIPAL - ALGORITMO DE EUCLIDES -------- \n";
	cout<<" 1 - Algoritmo de Euclides con 2 Numeros \n";
	cout<<" 2 - Algoritmo de Euclides con 3 Numeros \n";
	cout<<" 3 - Salir \n";
}

int main(){
	
	while(!salir){
		menu();
		printf("\n Opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: pedirDosNumeros();
					determinar_Menor(n1,n2);
					mcd_Euclides(A,B);
					mostrarMCD();
				break; 
			case 2: pedirTresNumeros();
					determinar_Menores(n1, n2, n3);
				break;
			case 3: salir = 1;
					exit(1);
					break;
			default: printf("\n �OPCION NO VALIDA! \n\n");
		}
	}
	//determinar_Menores(n1, n2, n3);
	return 0;
}
