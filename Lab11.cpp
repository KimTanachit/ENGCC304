/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <math.h>

int armstrong( int check );


int main() {
    int input_num ; 

    printf( "Enter Number : " ) ;
    scanf( "%d", &input_num) ; 

    if( armstrong ( input_num ) == 1){
        printf( "Pass" ) ;
    }else {
        printf( "Not Pass") ;
    }
    return 0 ;
}//end main function

int armstrong (int check){
    int num, remaider, digit = 0, sum = 0 ;
    num = check ; 
    int base = check;
   

    while( num != 0 ){
        num = num/10 ; 
        digit ++ ; 
    }//End while loop นับหลัก

    num = base ;

    while ( num != 0 )
    {
        remaider = num % 10 ;
        sum += (float)pow( remaider, digit ) ;
        num /= 10 ;
    }//End while loop เอาเลขมาคูณหลัก
    
    if( sum == base ) {
        return 1 ; 
    }else {
        return 0 ;
    } 
}// end function check armstrong