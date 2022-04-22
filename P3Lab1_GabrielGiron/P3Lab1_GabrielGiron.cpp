// P3Lab1_GabrielGiron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float Opcion;
float A;
float B;
float C;


int main()
{
	cout << "---Teorema de Pitagoras---" << "\n";
	cout << "Seleccione Incognita: A/B/C: ";
	cin >> Opcion;

	if(Opcion == 1)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Despejar para A: " << "\n";
		cout << "Ingrese valor para C: ";
		cin >> C;
		cout << "Ingrese valor para B: ";
		cin >> B;
		cout << "Ecuacion: A^2 = " << C << "^2 - " << B << "^2 " << "\n";
		C = C * C;
		B = B * B;
		cout << "Ecuacion: A^2 = " << C << " - " << B << "\n";
		A = C - B;
		cout << "A^2 = " << A;
		
	}
	else if(Opcion == 2)
	{
		
	}
	else if(Opcion == 3)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Ya Esta Despejado " << "\n";
		cout << "Ingrese valor para A: ";
		cin >> A;
		cout << "Ingrese valor para B: ";
		cin >> B;
		cout << "Ecuacion: C^2 " << A << "^2 + " << B << "^2 " << "\n";
		A = A * A;
		B = B * B;
		cout << "Ecuacion: C^2 = " << A << " + " << B << "\n";
		C = A + B;
		cout << "A^2 = " << C;
	}
	return 0;
}

