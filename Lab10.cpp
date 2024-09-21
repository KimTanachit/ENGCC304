/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    char user_in[50], reverst[50] ;
    int length, special = 1 ;
     printf( "Enter : ") ;
     scanf( "%49s", &user_in ) ; 
    length = strlen( user_in ) ; 

    for( int i = 0 ; i < length ; i ++ ) {
        user_in[i] = tolower( user_in[i] ) ; 
    }//End loop แปลงตัวอักษรทุกตัวให้เป็นพิมพ์เล็ก

    for( int i = 0 ; i < length / 2 ; i++ ) {
        if( user_in[i] != user_in[length - 1 - i]) {
            special = 0 ;
            break ;
        } 
    }//end loop ตรวจคำว่าอ่านจากหลังไปหน้าได้ไหม

    if( special == 1 ) {
        printf( "Pass \n" ) ;
    }else { 
        printf( "Not Pass \n" ) ;
    }
    
    return 0 ;
}//end main function