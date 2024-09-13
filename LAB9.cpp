#include <stdio.h>

int main () {
    int n ;
    
    printf( " Enter size : " ) ; 
    scanf( "%d", &n ) ;

    int array[n] ;
    for( int i = 0 ; i < n ; i++ ) {
        printf ( "Enter Value (%d) :  ", i  ) ; 
        scanf ( "%d", &array[i] ) ;
    }//End for input 

    printf( "Index : ") ; 
    for( int i = 0 ; i < n ; i++ ) {
        printf ( "%d  ", i ) ; 
    }printf ( "\n" ) ;//End for print Index

    printf( "Array : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
       int num = array[i] ;     
       int prime_num = 1 ;
       if ( num <= 1 ) {
        prime_num = 0 ;
       }else {
        for ( int x = 2 ; x * x <= num ; x++ ) {
            if ( num % x == 0 ) {
                prime_num = 0 ; 
                break ;
            }
        }
    }
       if( prime_num ) {
         printf( "%d  ", num ) ;
       }else {
        printf ( "#  " ) ; 
       }
    }
    return 0 ; 
}//End program