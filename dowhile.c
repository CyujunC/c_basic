#include  <stdio.h>

/**
 * 1.while
 *  - dowhile: 반복?��면서 ?��?��?��?�� ?��?��문을
*/

int main(void) {
    // 1.while��
    // while(조건) {
    //      ?��?��;    
    // }

    // 2.dowhile��
    int a = 1;
    do {
        a = a*2;
    } while(a < 20);
    printf("a : %d\n", a);
    }