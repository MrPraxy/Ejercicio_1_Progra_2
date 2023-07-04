#include <iostream>
using namespace std;
const int N_GEN_MAX = 50;

int main() {
	double superficie1;
	int total_gen;
	int num_herederos[N_GEN_MAX];
	cout << "Ingrese la superficie del terreno a medir : ";
	cin >> superficie1;
	cout << "Ingrese el n�mero de generaciones a las cuales se les debe heredar : ";
	cin >> total_gen;
	if (total_gen < 1 || total_gen > N_GEN_MAX) {
		cout << "N�mero de generaciones inv�lido. Debe estar entre 1 y "
			<< N_GEN_MAX << "." << endl;
		return 1;
	}
	for (int i = 0; i < total_gen; i++) {
		cout << "Ingrese el n�mero de herederos en la generaci�n " << i + 1 << ": ";
		cin >> num_herederos[i];
		if (num_herederos[i] < 1) {
			cout << "N�mero de herederos inv�lido. Debe ser mayor o igual a 1." << endl;
			return 1;
		}
	}
	double area_terreno = superficie1;
	for (int i = 0; i < total_gen; i++) {
		area_terreno /= num_herederos[i];
	}
	cout << "El �rea de terreno correspondiente al heredero despu�s de "
		<< total_gen << " generaciones es: " << area_terreno << endl;
	return 0;
}
