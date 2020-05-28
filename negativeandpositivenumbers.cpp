#include <iostream>
using namespace std;

int main(){
  int num,positive_num=0, num_negative=0,cero;
  
  cout<< "Ingresa un num(0 para parar) : ";
  cin >> num;
  while(num){
  	if (num >0)
  	positive_num++;
  	else if(num < 0 )
  	num_negative++;
  	cout<<"Ingresa otro num (0 para parar): ";
  	cin >> num;
  }
  cout<< "Numeros positivos: "<< positive_num;
  cout<< " Numeros negativos : "<< num_negative;
  
  return 0; 
	}
