#include <iostream>
#include <vector>
#include <map>
using namespace std;

void agregarEmpleado(int num, map<int, double>&empleado){
	
	for(map<int, double>::iterator it=empleado.begin(); it!=empleado.end(); it++){
		if(it->first == num){
			cout<< "El empleado ya existe"<<endl;
			}else{
				empleado[num]= 0;
				}
		}
	
	
	}
	
void vender(int num, string cod, double total; map<string, double>&ventas, map<int, double>&empleado){
	for(map<int, double>::iterator it=empleado.begin(); it!=empleado.end(); it++){
		if(it->first == num){
			
			for(map<string, double>::iterator it=ventas.begin(); it!=ventas.end(); it++){
				if(it->first == cod){
					ventas[cod]= total;
					empleado[num]=total;
					}else{
						ventas[cod]=total;
						empleado[num]=total;
						}
			
			
			}
	
	}
 }

}



int main(){
	
map<int, double>empleado;
map<string, double>ventas;

empleado[123456]= 12.345;
empleado[234567]= 10.000;

ventas[abc]= 1000;
ventas[cbd]= 2000;
}

