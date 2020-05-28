#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n ;
    int a0 , a1 , sum ;
    int i ;
    
    printf ("Introduce hasta que termino de la serie de Fibonacci quieres: ") ;
    scanf ("%d" , &n) ;
    
    a0 = 0 ;
    a1 = 1 ;
    
    for (i = 0 ; i < n ; i++) {
        sum = a0 + a1 ;
        
        a0 = a1;
        a1 = sum;
        
        printf(" %d " , a0) ;
    } ;
    
    return 0;
}
