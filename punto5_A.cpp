/*
*Autor: Miguel Guatibonza
*descripcion: programa recibe un numero en base diez, y devuelve en binario
*Fecha: 05-04-17
*/

#include <iostream>
#include <string>

using namespace std;


int main(){
 int numero, dividendo, reciduo;
	 string binario = "";
	 cout << "Ingrese el numero decimal a convertir a sistema binario" << endl;
	 cin >> numero;
	 dividendo = numero;
		 while(dividendo >= 2){ 
		 reciduo = dividendo % 2;
			  if(reciduo == 1){
			   binario = "1" + binario; 
			  }else{
			   binario = "0" + binario; 
			   }
			   dividendo = dividendo/2; 
		 }
		  if(dividendo == 1){
		   binario = "1" + binario; 
		  }else{
			binario = "0" + binario;
			}	cout << "En binario  se escribe " << binario << endl;
				return 0;
}






	

