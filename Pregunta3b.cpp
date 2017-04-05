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
	int c;
	int d;
	
	cout << "ingrese a" << endl;
	cin >> a;
	cout << "ingrese b" << endl;
	cin >> b;
	cout << "ingrese c" << endl;
	cin >> c;
		
		if(a > 0 && b > 0){
		cout << "Cuando a y b son mayores que 0 el resultado es: " << 2*c << endl;
		cin >> d;
			
		}else if(a < 0){
			
			if(b > 5 || a < -5){
			cout << "Cuando b es mayor 5 o a menor que -5 el resultado es: "<< 3*c << endl;
			cin >> d;
				
			}else if(a <= 5 && b > 5){
				cout << "cuando a es menor o igual a 5 y b es mayor que 5 el resultado es: "<< 5*c << endl;
				cin >> d;
				
			}else cout << "En otro caso retorna: " << 4*c << endl;
			
			
		}else if(b == 0 && a > 0){
			cout << "Cuando b es igual a 0 y a es mayor que 0 el resultado es: " << 5*c << endl;
		
		
		}else cout << "En cualquier otro caso retorna" << c << endl;
	
}
