#include <stdio.h>

int main() {

    int score ; 
    
    printf ( "Enter score : " ) ; 
    scanf( "%d", &score ) ; 

     
    switch (score / 5) {
        case 0: 
        case 1: 
            printf( "F !\n" ) ;
            break;
        case 2: 
            printf( "D !\n" ) ;
            break;
        case 3: 
            printf( "D+ !\n" ) ;
            break;
        case 4: 
            printf( "C !\n" ) ;
            break;
        case 5: 
            printf( "C+ !\n" ) ;
            break;
        case 6: 
            printf( "B !\n" ) ;
            break;
        case 7: 
            printf( "B+ !\n" ) ;
            break;
        case 8: 
            printf( "A !\n" ) ;
            break;
        case 9: 
            printf( "A !\n" ) ;
            break;
        case 10: 
            printf( "D !\n" ) ;
            break;
        case 11: 
            printf( "D+ !\n" ) ;
            break;
        case 12: 
            printf( "C !\n" ) ;
            break;
        case 13: 
            printf( "C+ !\n" ) ;
            break;
        case 14: 
            printf( "B !\n" ) ;
            break;
        case 15: 
            printf( "B+ !\n" ) ;
            break;
        case 16: 
        case 17: 
        case 18: 
        case 19: 
        case 20: 
            printf( "A !\n" );
            break;
        default:
            printf( "Invalid\n" ); 
            break;
        }
    }
