// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
// Declaraciones de funciones
void mostrarMenu();
double sumar(double a, double b);
double restar(double a, double b);
double dividir(double a, double b);
int main() {
	int opcion;
	double num1, num2, resultado;
	do {
		mostrarMenu();
		cout << "Elige una opcion: ";
		cin >> opcion;
		if (opcion >= 1 && opcion <= 3) {
			cout << "Introduce el primer numero: ";
			cin >> num1;
			cout << "Introduce el segundo numero: ";
			cin >> num2;
			switch (opcion) {
			case 1:
				resultado = sumar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;
			case 2:
				resultado = restar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;
			case 3:
				if (num2 != 0) {
					resultado = dividir(num1, num2);
					cout << "Resultado: " << resultado << endl;
				}
				else {
					cout << "Error: Division por cero" << endl;
				}
			}
		}
		else if (opcion != 0) {
			cout << "Opcion no valida" << endl;
		}
		
			cout << endl;
	} while (opcion != 0);
	cout << "Hasta luego!" << endl;
	return 0;
}
void mostrarMenu() {
	cout << "=== CALCULADORA ===" << endl;
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Dividir" << endl;
	cout << "0. Salir" << endl;
}
double sumar(double a, double b) {
	return a + b;
}
double restar(double a, double b) {
	return a - b;
}
double dividir(double a, double b) {
	return a / b;
}