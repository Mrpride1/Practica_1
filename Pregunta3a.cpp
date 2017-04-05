/*
 *autor: Juan Adrada
 * Codigo: 1663930
 * plan: 3743
 * Archivo: pregunta3.cpp
 */
 
 #include <iostream>
 #include <math.h>
 using namespace std;
 
 int main (){
	
	int a;
	int b; 
	char c;
	
	cout << "ingrese a" << endl;
	cin >> a;
	cout << "ingrese b" << endl;
	cin >> b;
		
		if(b > 0 && a > 0){
		cout << "Cuando b y a son mayores que 0 el resultado es: " << 'c' << endl;
		cin >> c;
			
		}else if(b < 0){
			
			if(a > 5 || b < -5){
			cout << "Cuando a es mayor  5 o b menor que -5 el resultado es: "<< 'd' << endl;
			cin >> c;
				
			}else if(a <= 5 && b > 5){
				cout << "cuando a es manor o igual a 5 y b es mayor que 5 el resultado es: "<< 'f' << endl;
				cin >> c;
				
			}else cout << "En otro caso retorna: " << 'k' << endl;
			
			
		}else if(b == 0 && a > 0){
			cout << "Cuando b es igual a 0 y a es mayor que 0 el resultado es: " << 'u' << endl;
		
		
		}else cout << "En cualquier otro caso retorna" << 'v' << endl;
	
}
