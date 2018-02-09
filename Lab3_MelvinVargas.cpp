#include <iostream>
#include <string>
using namespace std;

//Funcion del menu
int menu();

//funcion random
int aleatorio(int);

//funcion para crear el arreglo
int* createArray(int);

//funcion para imprimir el arreglo
void imprimir(int*,int);

//funcion para imprimir arreglo de chars
void imprimir(char*);

//funcion para dar valores al arreglo
int* lectura(int*,int);

//funcion para permutar el numero
void permutar(char*);

//main
int main(){
	int op=0;
	while(op!=4){
		switch(op=menu()){
			case 1:{
					   int* arreglo=NULL;
					   int tam;
					   cout<<"Ingrese size de su arreglo";
					   cin>>tam;
					   arreglo=createArray(tam);
					   arreglo=lectura(arreglo,tam);
					   imprimir(arreglo,tam);
					   cout<<endl;
					}
				break;

			case 2:{
					   string numero;
					   char* arreglo=new char[4];
					   cout<<"Ingrese un numero de 4 digitos: ";
					   cin>>numero;
					   while(numero.length()<4||numero.length()>4){
						   cout<<"Ingrese un numero de 4 digitos: ";
						   cin>>numero;
					   }
					   for(int i=0;i<5;i++){
						   arreglo[i]=numero[i]; 
						}
					   permutar(arreglo);
					   
				}
				break;
			case 3:{
					   string fecha;
				}
				break;
				   
			case 4:{

				}
				break;		   
		}
	}
	return 0;
}


//funcion del menu
int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu**********"<<endl;
		cout<<"1.Poda y busca"<<endl;
		cout<<"2.Permutacion"<<endl;
		cout<<"3.Fechas"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Ingrese nuemero de opcion que desea evaluar: ";
		cin>>num;
		return num;
	}
}

//funcion que crea el arreglo
int*createArray(int size){
	int* ret= new int[size];
	return ret;
}


//genera numero random
int aleatorio(){
	int ran=0;
	ran=rand()% 100+1;
	return ran;
}

//dar valores al arreglo
int* lectura(int*arreglo,int size){
	for(int i=0;i<size;i++){
		arreglo[i]=aleatorio();
	}
	return arreglo;
}

//funcion para imprimir arreglo
void imprimir(int* arreglo,int size){
	for(int i=0;i<size;i++){
		cout<<" "<<arreglo[i];
	}
}

//funcion para imprimir arreglo de chars
void imprimir(char* arreglo){
	for(int i=0;i<4;i++){
		cout<<" "<<arreglo[i];
	}	
}

//funcion para permutar
void permutar(char* arreglo){
	char* narreglo=new char [4];
		narreglo[0]=arreglo[0];
		narreglo[1]=arreglo[1];
		narreglo[2]=arreglo[3];
		narreglo[3]=arreglo[2];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[0];
		narreglo[1]=arreglo[2];
		narreglo[2]=arreglo[1];
		narreglo[3]=arreglo[3];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[0];
		narreglo[1]=arreglo[2];
		narreglo[2]=arreglo[3];
		narreglo[3]=arreglo[1];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[0];
		narreglo[1]=arreglo[3];
		narreglo[2]=arreglo[1];
		narreglo[3]=arreglo[2];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[0];
		narreglo[1]=arreglo[3];
		narreglo[2]=arreglo[2];
		narreglo[3]=arreglo[1];
		imprimir(narreglo);
		cout<<endl;
		
		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[0];
		narreglo[2]=arreglo[2];
		narreglo[3]=arreglo[3];
		imprimir (narreglo);
		cout<<endl;

		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[0];
		narreglo[2]=arreglo[3];
		narreglo[3]=arreglo[2];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[2];
		narreglo[2]=arreglo[0];
		narreglo[3]=arreglo[3];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[2];
		narreglo[2]=arreglo[3];
		narreglo[3]=arreglo[0];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[3];
		narreglo[2]=arreglo[2];
		narreglo[3]=arreglo[1];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[1];
		narreglo[1]=arreglo[3];
		narreglo[2]=arreglo[0];
		narreglo[3]=arreglo[2];
		imprimir(narreglo);
		cout<<endl;

		narreglo[0]=arreglo[2];
		narreglo[1]=arreglo[0];
		narreglo[2]=arreglo[1];
		narreglo[3]=arreglo[3];




}

