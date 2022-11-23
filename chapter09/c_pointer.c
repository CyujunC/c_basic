#include <stdio.h>

/**
 * 
 * 
 * 
 * 
 * 주소연산자(&)
 *  - int num;     # 20번지~23번지
 *  - scanf("%d", &num);
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/

int main(void) {
    int a;     // 4 Byte
    double b;  // 8 Byte
    char c;    // 1 Byte

    printf("a 변수 주소: %u\n", &a);
    printf("b 변수 주소: %u\n", &b);
    printf("c 변수 주소: %u\n", &c);
}