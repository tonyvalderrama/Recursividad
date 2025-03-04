/* ***
 * FactorialRec.cpp
 * ***/
 
#include <iostream>

using namespace std;

// Calcula el factorial sin recursividad
long factorialSinR(int n) {
	long num=1;
	
	for(;n>0;n--) {
		num *= n;
	}
	
	return num;
}

// Calcula factorial con recursividad
long factorialRec(int n) {
	if (n==1) {
		return 1;
	}
	return n * factorialRec(n-1);
}

int main() {
	long numero;
	
	cout << "Numero: ";
	cin >> numero;
	
	cout << "Factorial de " << numero << " es " << factorialSinR(numero) << endl;
	cout << "Factorial de " << numero << " es " << factorialRec(numero) << endl;
}