/* ***
 * Secuencia - ejemplo de recursividad
 * Si n es par, divídelo entre 2
 * Si es impar, multiplícalo por 3 y súmale 1
 * La secuencia termina cuando N == 1
 ***/
 
#include <iostream>

using namespace std;

int Secuencia(int n) {
	int x;
	
	if (n == 1) {
		return 1;
	} else if (n % 2 == 0) {
		x = n / 2;
	} else {
		x = (n * 3) + 1;
	}
	cout << x << " ";
	Secuencia(x);
}

int main() {
	int num;
	
	cout << "Dame numero: ";
	cin >> num;
	Secuencia(num);
}