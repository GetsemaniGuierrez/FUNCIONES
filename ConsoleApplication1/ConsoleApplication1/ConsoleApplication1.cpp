#include <iostream>
#include<string>
using namespace std;

int main()
{
	cout << "	Ingresa 10 numeros ";
	int NUMERO[10], suma,restar, multiplicar;
	float dividir;
	for (int i = 0; i < 10; i++)
	{
		cout << "	*Ingresa un valor " << i + 1 << ":";
		cin >> NUMERO[i];
		cout << endl;
	}
	cout << "-------------------------------------------------";

	for (int i = 0; i < 9; i++)
	{
		suma = NUMERO[i] + NUMERO[i + 1];
		cout << "La suma total es: "<<suma;
		cout << endl;
		
	}
	cout << "-------------------------------------------------";

	for (int i = 0; i < 9; i++)
	{
		restar = NUMERO[i] - NUMERO[i + 1];
		cout << "resta total es: " << restar;
		cout << endl;
		
	}
	cout << "-------------------------------------------------";

	for (int i = 0; i < 9; i++)
	{
		dividir = NUMERO[i] / NUMERO[i + 1];
		cout << "La divicion total es: " << dividir;
		cout << endl;
		
	}
	cout << "-------------------------------------------------";

	for (int i = 0; i < 9; i++)
	{
		multiplicar = NUMERO[i] * NUMERO[i + 1];
		cout << "La multiplicacion total es: " << multiplicar;
		cout << endl;
		
	}
	cout << "-------------------------------------------------";

}


