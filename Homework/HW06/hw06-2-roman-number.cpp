/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/

#include<stdio.h>

int main() {
    int input ;

    printf( "Test case:\n" ) ;
    scanf( "%d", &input ) ;

    printf( "%d = ", input ) ; // ให้พิมพ์ค่า input มาก่อน ค่อยใช้ for ในการพิมพ์ตัวอักษรโรมัน

    for ( input ; input / 1000 ; input ) {// ถ้ากรอกค่ามาเกิน 1000 แล้วหารด้วย1000 ถ้าหารได้จะพิมพ์ M แล้วลบด้วย 1000 จนกว่าจะหารไม่ได้
        input -= 1000 ;
        printf( "M") ;
    }// end for 1000 = M
    
    for ( input ; input / 900 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 900 ถ้าหารได้จะพิมพ์ CM แล้วลบด้วย 900 จนกว่าจะหารไม่ได้
        input -= 900 ;
        printf( "CM" ) ;
    }// end for 900 = CM
    
    
    for ( input ; input / 500 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 500 ถ้าหารได้จะพิมพ์ D แล้วลบด้วย 500 จนกว่าจะหารไม่ได้
        input -= 500 ;
        printf( "D" ) ;
    } // end for 500 = D

    for ( input ; input / 400 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 400 ถ้าหารได้จะพิมพ์ CD แล้วลบด้วย 400 จนกว่าจะหารไม่ได้
        input -= 400 ;
        printf( "CD" ) ;
    }// end for 400 = CD
    

    for ( input ; input / 100 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 100 ถ้าหารได้จะพิมพ์ C แล้วลบด้วย 100 จนกว่าจะหารไม่ได้
        input -= 100 ;
        printf( "C" ) ;
    } // end for 100 = C

    for ( input ; input / 90 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 90 ถ้าหารได้จะพิมพ์ XC แล้วลบด้วย 90 จนกว่าจะหารไม่ได้
        input -= 90 ;
        printf( "XC" ) ;
    }// end for 90 = XC

    for ( input ; input / 50 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 50 ถ้าหารได้จะพิมพ์ L แล้วลบด้วย 50 จนกว่าจะหารไม่ได้
        input -= 50 ;
        printf( "L" ) ;
    }// end for 50 = L

    for ( input ; input / 40 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 40 ถ้าหารได้จะพิมพ์ XL แล้วลบด้วย 40 จนกว่าจะหารไม่ได้
        input -= 40 ;
        printf( "XL" ) ;
    }// end for 40 = XL

    for ( input ; input / 10 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 10 ถ้าหารได้จะพิมพ์ X แล้วลบด้วย 10 จนกว่าจะหารไม่ได้
        input -= 10 ;
        printf( "X" ) ;
    }// end for 10 = X

    for ( input ; input / 9 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 9 ถ้าหารได้จะพิมพ์ IX แล้วลบด้วย 9 จนกว่าจะหารไม่ได้
        input -= 9 ;
        printf( "IX" ) ;
    }// end for 9 = IX

    for ( input ; input / 5 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 5 ถ้าหารได้จะพิมพ์ V แล้วลบด้วย 5 จนกว่าจะหารไม่ได้
        input -= 5 ;
        printf( "V" ) ;
    }// end for 5 = V
    
    for ( input ; input / 4 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 4 ถ้าหารได้จะพิมพ์ IV แล้วลบด้วย 4 จนกว่าจะหารไม่ได้
        input -= 4 ;
        printf( "IV" ) ;
    }// end for 4 = IV

    for ( input ; input / 1 ; input ) {// ถ้าค่าที่หักลบแล้ว หารได้โดย 1 ถ้าหารได้จะพิมพ์ I แล้วลบด้วย 1 จนกว่าจะหารไม่ได้
        input -= 1 ;
        printf( "I" ) ;
    }// end for 1 = I
    
    return 0;
}
