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

	if (Opcion == 1)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Despejar para A: " << "\n";
		cout << "Ingrese valor para C: ";
		cin >> C;
		cout << "Ingrese valor para B: ";
		cin >> B;
		if (C < 4 || B < 4)
			cout << "Valores Ingresado menores a 4";
		else if(B == C)
			cout << "Valores Ingresado son Iguales";
		else if(C > 16 || B > 16)
			cout << "Valores Ingresado Mayores a 16";
		else 
		{
			cout << "Ecuacion: A^2 = " << C << "^2 - " << B << "^2 " << "\n";
			C = C * C;
			B = B * B;
			cout << "Ecuacion: A^2 = " << C << " - " << B << "\n";
			A = C - B;
			cout << "A^2 = " << A << "\n";
			int centinela = 0;
			for (int i = 1; i <= A; i++)
			{
				int total = i * i;
				if (total == A)
				{
					A = A / i;
					centinela = 1;
					break;
				}
			}

			if (centinela == 1)
			{
				cout << "A = " << A;
			}
			else if (centinela == 0)
			{
				cout << "No Tiene Raiz Cuadrada Exacta";
			}
		}
	}
	else if(Opcion == 2)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Despejar para B: " << "\n";
		cout << "Ingrese valor para C: ";
		cin >> C;
		cout << "Ingrese valor para A: ";
		cin >> A;
		if (C < 4 || A < 4)
			cout << "Valores Ingresado menores a 4";
		else if (A == C)
			cout << "Valores Ingresado son Iguales";
		else if (C > 16 || A > 16)
			cout << "Valores Ingresado Mayores a 16";
		else 
		{
			cout << "Ecuacion: B^2 = " << C << "^2 - " << A << "^2 " << "\n";
			C = C * C;
			A = A * A;
			cout << "Ecuacion: B^2 = " << C << " - " << A << "\n";
			B = C - A;
			cout << "B^2 = " << B << "\n";
			int centinela = 0;
			for (int i = 0; i < B; i++)
			{
				int total = i * i;
				if (total == B)
				{
					B = B / i;
					centinela = 1;
					break;
				}
			}

			if (centinela == 1)
			{
				cout << "B = " << B;
			}
			else if (centinela == 0)
			{
				cout << "No Tiene Raiz Cuadrada Exacta";
			}
		}
	}
	else if (Opcion == 3)
	{
		cout << "Ecuacion Inicial: " << "\n";
		cout << "C^2 = A^2 + B^2 " << "\n";
		cout << "Ya Esta Despejado " << "\n";
		cout << "Ingrese valor para A: ";
		cin >> A;
		cout << "Ingrese valor para B: ";
		cin >> B;
		if (B < 4 || A < 4)
			cout << "Valores Ingresado menores a 4";
		else if (B > 16 || A > 16)
			cout << "Valores Ingresado Mayores a 16";
		else {
			cout << "Ecuacion: C^2 " << A << "^2 + " << B << "^2 " << "\n";
			A = A * A;
			B = B * B;
			cout << "Ecuacion: C^2 = " << A << " + " << B << "\n";
			C = A + B;
			cout << "C^2 = " << C << "\n";
			int centinela = 0;
			for (int i = 0; i < C; i++)
			{
				int total = i * i;
				if (total == C)
				{
					C = C / i;
					centinela = 1;
					break;
				}
			}

			if (centinela == 1)
			{
				cout << "C = " << C;
			}
			else if (centinela == 0)
			{
				cout << "No Tiene Raiz Cuadrada Exacta";
			}
		}
	}
	return 0;
}

