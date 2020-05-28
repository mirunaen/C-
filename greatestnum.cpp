#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,n3;
	
	cout<<"Esribe un num: ";
	cin>>n1;
	cout<<"Esribe un num: ";
	cin>>n2;	
	cout<<"Esribe un num: ";
	cin>>n3;
	if((n1 > n2) && (n1 > n3)) 
	cout<<"El num mayor es: "<< n1;
		if((n2 > n1) && (n2 > n3)) 
	cout<<"El num mayor es: "<< n2;
		if((n3 > n2) && (n3 > n1)) 
	cout<<"El num mayor es: "<< n3;
	return 0;
}
 
