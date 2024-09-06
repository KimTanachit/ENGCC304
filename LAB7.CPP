#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int score, ans ;
    srand( time ( NULL ) ) ;
    printf( "do you want to play game (1 = play,-1 = exit) :" ) ;
    scanf( "%d", &ans ) ;
    if( ans == 1 ) {
        do { 
            int r1 = 1 ;
            int r2 = 100 ;
            int num = rand () %100 + 1 ;
            score = 100 ;
            while( score != 0 ){
                printf( "guess the number (%d - %d):", r1, r2) ;
                scanf( "%d", &ans ) ; 
                if( ans > num ) {
                    if( ans < r2 ) {
                        r2 = ans - 1 ;
                    }
                    printf( "Sorry, you need to try lower than %d . (score = %d) \n", ans, score -= 10 ) ;  
                } else if( ans < num ) {
                    if( ans > r1 ) {
                        r1 = ans + 1 ;
                    }
                    printf ( "Sorry, you need to try higher than %d . (score = %d) \n", ans, score -= 10 ) ; 
                } else if( ans == num ) {
                    printf( "that is correct. the winnig number is %d \n", num ) ;
                    printf( "Score this game : %d \n", score ) ; 
                    break ;
                }//Break while
            }//End while
            printf( "Play Again ? : 1 = play, -1 = quit :" ) ;
            scanf( "%d", &ans ) ;
        }while( ans == 1 ) ; // ans == -1 => end do-while
        printf( "Nice to meet you" ) ;
    } else if( ans == -1 ) {
        printf( "Bruh!!!" ) ;
    } else {
        printf ( " Error please restart " ) ;
    }// End if
   return 0 ;
}//End program

    
        
