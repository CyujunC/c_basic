#include <stdio.h>

/**
 * 숫자: 5자리
 * 예: 57256
*/
int main(void) {
    int num = 57256;
    int total = 0;
    
    while(total>=0) {
        if(num / 10000 != 0) {    
            printf(num % 10000);
        }
        if(num / 1000 != 0) {
            printf(num % 1000);
        }
        if(num / 100 != 0) {
            printf(num % 100);
        }
        if(num / 10 != 0) {
            printf(num % 10);
        }
        if(num / 1 != 0) {
            printf(num % 1);
        }
        total += num;
    
    // 5 + 7 + 2 + 5 + 6 = 25
    printf("총합 %d\n", total);  // 25출력
}
}