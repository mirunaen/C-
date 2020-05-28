#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n0=0;
	int n1=0;
	int operacion;
	int suma = 0;
	int resta =0;
	int division = 0;
	int mult = 0;
	
	cout<< "Escribe un num : ";
	cin>> n0;
	cout<< "Escribe un num : ";
	cin>> n1;
	cout<< "Escribe operacion: ";
	cin>> operacion;
    switch (operacion) {
  case 1:
    suma=n0+n1;
    cout<<"La suma es: " << suma;
    break;
  case 2:
    resta=n0-n1;
    cout<<"La resta es: " << resta;
    break;
	case 3:
    division=n0/n1;
    cout<<"La division es: " << division;
    break;
    case 4:
    mult=n0*n1;
    cout<<"La multiplicacion es: " << mult;
    break;
  default:
    cout << "Pon algo.";
}
	return 0;
}
