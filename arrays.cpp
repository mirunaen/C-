#include <iostream>
using namespace std;

int main()
{
	float numeros[4];
	int i=1;
	float sum;
	float media;
	sum=0;
	for (i=1; i<=4; i++)
	{
	cout << "Dime un numero: " << i << ": ";
	cin >> numeros[i];
	sum=sum+numeros[i];
	}
	media=sum/4;
	cout << "La media de los numeros: ";
	for (i=1; i<=4; i++)
	{
	cout << numeros[i] << " ";
	}
	cout << "es " << media << endl;
	return 0;
}
