#include <stdio.h>

/**
 * 
 * 
 * 
 * 
 * �ּҿ�����(&)
 *  - int num;     # 20����~23����
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

    printf("a ���� �ּ�: %u\n", &a);
    printf("b ���� �ּ�: %u\n", &b);
    printf("c ���� �ּ�: %u\n", &c);
}