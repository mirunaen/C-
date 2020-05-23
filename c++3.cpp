#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int notaDeCorte;
	
	cout<< "Pon tu nota: ";
	cin>> notaDeCorte; 
	if(notaDeCorte >= 5){
		cout<< "Estas aprobado!";
	}
	else
	cout<< "Estas suspenso!";
		return 0;
}
