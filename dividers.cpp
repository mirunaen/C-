#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num,i;
	cout<< "Escribe un num: ";
	cin>>num;
	cout<<"Sus divisores son: ";
	for(i=1;i<=num;i++) {
		if(num%i==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
