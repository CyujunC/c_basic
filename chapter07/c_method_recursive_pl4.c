#include <stdio.h>

int main(void) {
    int n = recursion(16);
    printf("%d", n);
}

int recursion(int n) {
    // if문 {실행문} → 조건이 참인 경우 실행
    // 실행문이 1개면 {}를 생략
    // if(n<5) {
    //     return 1;
    // }
    // if(n<5)
    //     return 1;
    // if(n<5) return 1;
    
    if(n<5) return 1;
    else if(n%5 == 1) return n+recursion(n-1);
    else recursion(n-1);
}