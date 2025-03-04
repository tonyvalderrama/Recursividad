/* ***
 * Invertido.cpp - De forma recursiva, sin usar ciclos, devolver un número con los dígitos invertidos
 * ***/
 
#include <iostream>
#include <cmath>

using namespace std;

long numDigitos(long num) {
	if (num < 10) {
		return 1;
	}
	return 1 + numDigitos((long)num/10);
}

long invertir(long num) {
	int n,digitos;
	long potencia;
	
	digitos = numDigitos(num);
		
	if (digitos == 1) {
		return num;
	}
	n = num % 10;
	potencia = n * (long) pow(10,digitos-1);
	
	return potencia + invertir((long) num / 10);
}

int main() {
	int x;
	long num = 432048;
	x = numDigitos(num);
	cout << "Numero: " << num << endl;
	cout << "Digitos: " << x << endl;
	cout << "Inverso: " << invertir(num) << endl;
}