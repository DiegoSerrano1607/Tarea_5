#include <iostream>
using namespace std;
//punteros con asignacion de memoria dinamica
//new = reservar un espacio en memoria
//delete [] = liberar memoria
main(){
	int fil=0,col=0,**pm_notas;
	cout<<"Ingrese la cantidad de estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad notas por estudiantes: ";
	cin>>col;
	
	pm_notas=new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}	
	for (int i=0;i<fil;i++){
		cout<<"_____Estudiante______"<<i<<endl;
		for(int ii=0;ii<col;ii++){
			cout<<"Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii); 
		}
		cout<<"______________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete []pm_notas;
	
}
