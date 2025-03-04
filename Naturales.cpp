/* ***
 * Naturales - Ejemplo de recursividad
 * ***/
 
#include <iostream>

using namespace std;

long numNaturales(long num) {
	if (num == 1) {
		return 1;
	}
	return num + numNaturales(num-1);
}

int main() {
	long n;
	
	cout << "Escribe un numero: ";
	cin >> n;
	
	cout << "Suma de números naturales de 1 a " 
		<< n << " es " << numNaturales(n) << endl;
}