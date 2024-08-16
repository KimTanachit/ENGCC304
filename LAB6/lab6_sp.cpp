#include <stdio.h>

int main (){
    int num = 0 ; 
    printf ("Enter num : ") ; 
    scanf( "%d", &num) ; 
    for(int r = 1; r <= num; r++ ){
        for(int c = 1 ; c <= num ; c++){
            if ((num % 2 != 0 && c == num - r + 1) || (num % 2 == 0 && c == r)){
                printf( "1" ) ;
            }else{
                printf( "0" ) ;
            }
        }
        printf( "\n" ) ; 
    }
}
