//============================================================================
// Name        : *tp05.cpp
// Author      : Nayla Taguada
// Fecha       :13/05/15
// Materia     : AED
//============================================================================

#include <iostream>

using namespace std;

double GetNumeroPositivo(){
      double numero;
      while (true){
    	  cin>>numero;
    	  if(numero>0){
    		  return numero;
           }else{
        	   cout<<"No es un numero correcto, uno mayor a 0"<<endl;
           }
        }
      }

double GetPerimetro(double b,double h){
	return b*h;
}

int main() {
	double h = 0;
	double b = 0;

	cout<<"Ingrese la altura del rectangulo"<<endl;
	h = GetNumeroPositivo ();

	cout<<"Ingrese la base del rectangulo"<<endl;
	b = GetNumeroPositivo ();

	cout<<"El Perimetro del rectangulo es: "<<GetPerimetro(b,h)<<endl;

}
