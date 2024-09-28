#include<stdio.h>
#include<string.h>

/*STURCTURE*/
struct student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
}typedef s ;

/*PROTOTYPE*/
const char* Calgrade( float score ) ;
float CalAverage( s st ) ;

int main() {
    s st[ 3 ] ; 

    for( int i = 0 ; i < 3 ; i++ ) {
        
        printf( "Enter Name [%d]: ", i + 1 ) ;
        getchar() ;
        gets( st[i].Name ) ;
        printf( "Enter ID [%d]: ", i + 1 ) ;
        scanf( "%4s", st[ i ].ID ) ;
        printf( "Enter Sub 1: " ) ;
        scanf( "%f", &st[ i ].ScoreSub1 ) ;
        printf( "Enter Sub 2: " ) ;
        scanf( "%f", &st[ i ].ScoreSub2 ) ;
        printf( "Enter Sub 3: " ) ;
        scanf( "%f", &st[ i ].ScoreSub3 ) ;
        printf( "Enter Sub 4: " ) ;
        scanf( "%f", &st[ i ].ScoreSub4 ) ;
        printf( "Enter Sub 5: " ) ;
        scanf( "%f", &st[ i ].ScoreSub5 ) ;
    }//End Input Detail for loop

    printf( "Student Detail\n" ) ;
    printf( "----------------\n" ) ;
    for( int i = 0 ; i < 3 ; i++ ) {
        printf( "______________________\n" ) ; 
        printf( "Student %d \n", i + 1 ) ; 
        printf( "Name: %s\nID: %s\n", st[ i ].Name, st[ i ].ID ) ;
        printf( "Score: %.0f %.0f %.0f %.0f %.0f\n", 
            st[ i ].ScoreSub1, st[ i ].ScoreSub2, 
            st[ i ].ScoreSub3, st[ i ].ScoreSub4, 
            st[ i ].ScoreSub5 ) ;
        printf( "Grade: %s  %s  %s %s %s\n", 
            Calgrade( st[ i ].ScoreSub1 ), Calgrade( st[ i ].ScoreSub2 ), 
            Calgrade( st[ i ].ScoreSub3 ), Calgrade( st[ i ].ScoreSub4 ), 
            Calgrade( st[ i ].ScoreSub5 ) ) ;
        printf( "Average: %.1f\n", CalAverage( st[ i ] ) ) ;
    }//End Display for loop 
    
    return 0 ;
} //End Main Function

/*Function Calculate Grade*/
const char* Calgrade( float score ) {
    if( score >= 80 ) {
        return "A" ; 
    } else if(score >= 75) {
        return "B+" ; 
    } else if(score >= 70) {
        return "B" ; 
    } else if(score >= 65) {
        return "C+" ; 
    } else if(score >= 60) {
        return "C" ; 
    } else if(score >= 55) {
        return "D+" ; 
    } else if(score >= 50) {
        return "D" ; 
    } else {
        return "F" ; 
    }//End Function Calculate Grade
}
/*Function Find Average*/
float CalAverage ( s st ) {
    float sum = st.ScoreSub1 + st.ScoreSub2 + st.ScoreSub3 + st.ScoreSub4 + st.ScoreSub5 ; 
    return sum / 5 ; 
}//End Function Find Average 
