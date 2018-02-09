#include <iostream>
#include <string>
#include <vector>
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

//funcion para ordenar un arreglo
int* ordenar(int*,int);

//funcion para mostrar la fecha
void fecha(string,string,string);

//funcion para las medianas
void medianas(int*,int);
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
					   arreglo=ordenar(arreglo,tam);
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
					   string fechas;
					   string year;
					   string mes;
					   string dia;
					   cout<<"Ingrese fecha en formato YYYY/MM/DD: ";
					   cin>>fechas;
					   vector<string> date;
					   for(int i=0;i<fechas.length();i++){
							if(i>=0&&i<=3){
								year+=fechas[i];
							}
							if(i>=4&&i<=5){
								mes+=fechas[i];
							}
							if(i>=6&&i<=7){
								dia+=fechas[i];
							}
					   }
					   fecha(year, mes, dia);


				   }
				break;
				   
			case 4:{
				}
				break;
		}
	}
}

//funcion que crea el arreglo
int*createArray(int size){
	int* ret= new int[size];
	return ret;
}

//funcion menu
int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu***********"<<endl;
		cout<<"1.Poda y Busca"<<endl;
		cout<<"2.Permutacion"<<endl;
		cout<<"3.Fecha"<<endl;
		cout<<"4.salir"<<endl;
		cout<<"Ingrese numero de ejercicio: ";
		cin>>num;
		return num;
	}
}

//funcion para las medianas
void medianas(int* arreglo,int size){
	int medio=size/2;
	if(size>5){
		int division=size/5;
		int residuop=size%5;
		int** matriz= new int*[5];
		for(int i=0;i<size;i++){
			matriz[i]=new int[division];
		}
		int cont=0;
		for(int i=0;i<division;i++){
			for(int j=0;i<5;j++){
				if(cont<size){
					cont=cont+1;
				}
			}
		}
		
	}
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

//funcion para ordenar arreglo
int* ordenar(int* arreglo,int size){
	int auxiliar;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arreglo[i]>arreglo[j]){
				auxiliar=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=auxiliar;
			}
			
		}
	}
	return arreglo;
}

//funcion para la fecha
void fecha(string year, string mes, string dia){
	int modulomes;
	int mes1;
	int dia1;
	int year1;
	int fecha;
	year1=atoi(year.c_str());
	fecha=atoi(dia.c_str());
	mes1=atoi(mes.c_str());
	if(mes == "01"){
		cout<<"Enero,";
		modulomes=0;
	}
	if(mes == "02"){
		cout<<"Febrero,";
		modulomes=3;
	}
	if(mes == "03"){
		cout<<"Marzo,";
		modulomes=3;
	}
	if(mes == "04"){
		cout<<"Abril,";
		modulomes=6;
	}
	if(mes == "05"){
		cout<<"Mayo,";
		modulomes=1;
	}
	if(mes == "06"){
		cout<<"Junio,";
		modulomes=4;
	}
	if(mes == "07"){
		cout<<"Julio,";
		modulomes=6;
	}
	if(mes == "08"){
		cout<<"Agosto,";
		modulomes=2;
	}
	if(mes == "09"){
		cout<<"Septiembre,";
		modulomes=5;
	}
	if(mes == "10"){
		cout<<"Octubre,";
		modulomes=0;
	}
	if(mes == "11"){
		cout<<"Noviembre,";
		modulomes=3;
	}
	if(mes == "12"){
		cout<<"Diciembre,";
		modulomes=5;
	}
	dia1=((year1-1)%7+ ((year1-1)/4 -(3*((year1-1)/100+1)/4))%7+modulomes+fecha%7)%7;
	if(dia1==0){
		cout<<"Domingo, ";
	}
	if(dia1==1){
		cout<<"Lunes, ";
	}
	if(dia1==2){
		cout<<"Martes, ";
	}
	if(dia1==3){
		cout<<"Miercoles, ";
	}
	if(dia1==4){
		cout<<"Jueves, ";
	}
	if(dia1==5){
		cout<<"Viernes, ";
	}
	if(dia1==6){
		cout<<"Sabado, ";
	}
	cout<<dia<<", ";
	cout<<year<<endl;

	
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
		imprimir(narreglo);
		cout<<endl;




}

