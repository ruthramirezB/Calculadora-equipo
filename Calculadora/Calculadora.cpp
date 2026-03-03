// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
// Declaraciones de funciones
void mostrarMenu();
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);
double potencia(double base, double exponente);
int main() {
	int opcion;
	double num1, num2, resultado;
	do {
		mostrarMenu();
		cout << "Elige una opcion: ";
		cin >> opcion;
		if (opcion >= 1 && opcion <= 5) {
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
				resultado = multiplicar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;

			case 4:
				if (num2 != 0) {
					resultado = dividir(num1, num2);
					cout << "Resultado: " << resultado << endl;
				}
				else {
					cout << "Error: Division por cero" << endl;
				}
				break;
			case 5:
				resultado = potencia(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;

			}
		}
		else if (opcion != 0) {
			cout << "Opcion no valida" << endl;
			break;


		}
	} while (opcion != 0);
	cout << "Hasta luego!" << endl;
	return 0;
}
void mostrarMenu() {
	cout << "=== CALCULADORA ===" << endl;
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Dividir" << endl;
	cout << "5.Potencia (a^b)" << endl;
	cout << "0. Salir" << endl;
}
double multiplicar(double a, double b) {
	return a * b;
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

double potencia(double base, double exponente)
{
	// Caso especial: 0^0 no está definido matemáticamente
	if (base == 0 && exponente == 0) {
		cout << "Advertencia: 0^0 es indeterminado. Retornando 1." << endl;
		return 1;
	}
	// Caso especial: cualquier número^0 = 1
	if (exponente == 0) {
		return 1;
	}
	// Exponentes negativos
	if (exponente < 0) {
		return 1.0 / potencia(base, -exponente);
	}
	double resultado = 1;
	for (int i = 0; i < exponente; i++)
	{
		resultado *= base;

	}
	return resultado;
}
