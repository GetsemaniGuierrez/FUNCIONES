#include <iostream>
#include<string>
using namespace std;

int main()
{
	float vector1[3];
	float vector2[3];
	float vectorSuma[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		cout << "	Introduce el valor: " << i << "del primer vector";
		cin >> vector1[i];
	}
	for (i = 0; i < 3; i++)
	{
		cout << "	Introduce el valor: " << i << "del segundo vector";
		cin >> vector2[i];
	}
	for (i = 0; i < 3; i++)
	{
		vectorSuma[i] = vector1[i] + vector2[i];
	}
	cout << "	El vector suma es: ";
	for (i = 0; i < 3; i++)
	{
		cout << vectorSuma[i] << " ";
	}
}

