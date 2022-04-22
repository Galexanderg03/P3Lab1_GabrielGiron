// P3Lab1_GabrielGiron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float Opcion;
float A = 0;
float B = 0;
float C = 0;


int main()
{
	cout << "---Teorema de Pitagoras---" << "\n";
	cout << "Seleccione Incognita: A/B/C: " << "\n";
	cin >> Opcion;

	if(Opcion == 1)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Despejar para A: " << "\n";
		cout << "Ingrese valor para C: " << "\n";
		cin >> C;
		cout << "Ingrese valor para B: " << "\n";
		cin >> B;

	}
}

