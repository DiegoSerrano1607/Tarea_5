#include <iostream>
using namespace std;
main(){
	int edad=25,*p_edad;
	p_edad=&edad;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"---------- Cambiar valores ----------"<<endl;
	*p_edad=40;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"---------- Otra variable a p_edad valores ----------"<<endl;
	int edad2=100;
	p_edad=&edad2;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	
}
