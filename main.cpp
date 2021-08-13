#include <iostream>
#include <math.h>
using namespace std;


int menu() {
	
	system ("cls");
	
	int opcion;

cout<<"******"<<endl;
	cout<<"*               MENU                   *"<<endl;
	cout<<"* 1.- Formula cuadratica               *"<<endl;
	cout<<"* 2.- Salir                            *"<<endl;
    cout<<"******"<<endl;
    cout<<"Seleccione la opcion: ";
	cin>>opcion;
	 
	return opcion;
}

double formulacuadraticax1(double a, double b, double c) { 
  	double x1;
	x1 = (+b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);


	return x1;
}

double formulacuadraticax2(double a, double b, double c){
	double x2;
	x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

	return x2;
}



void opcion1() {
	system("cls");
	
	cout<<"*****"<<endl;
	cout<<"*    1.- Formula cuadratica           *"<<endl;
	cout<<"*****"<<endl;
	
	double a, b, c, x1, x2, raiz, filtroRaiz, formulacuadratica;
	
    cout<<"Ingresar valor a: ";
	cin>>a;
	cout<<"Ingresar valor b: ";
	cin>>b;
	cout<<"Ingresar valor c: ";
	cin>>c;


if(a == 0){
		cout<<"a no puede ser cero"<<endl;
	}else {
	  filtroRaiz = pow(b, 2) - 4 * a * c;
		
		if(filtroRaiz < 0) {
			cout<<"la raiz cuadrada no puede ser negativa"<<endl;
		}else {
			x1 = formulacuadraticax1(a, b, c);
			x2 = formulacuadraticax2(a, b, c);
			
			cout<<"x1: "<<x1<<endl;
			cout<<"x2: "<<x2<<endl;
		}
	}
    
    formulacuadratica = 	formulacuadratica = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);
    
    formulacuadratica =     formulacuadratica = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout<<"La formula cuadratica es: "<<formulacuadratica<<endl;
    
    system("pause");
	}
	

int main (int argc, char** argv) {
	int opt;
	
	while (opt != 5) {
		opt = menu();
		
		switch(opt) {
			case 1:
				opcion1();
				break;
            case 2:
				break;
			default:
			   cout<<"Opcion no valida"<<endl;	
			   system("pause");				
		}
	}
		
	return 0;
}
