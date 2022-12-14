#include <stdio.h>

/**
 * 숫자: 5자리
 * 예: 57256
*/

// 숙제1. 값을 직접 입력 (scanf 사용)
int main(void) {
    int num = 46324;
    int total = 0;
    
    // 46324 → 10  몫: 4632  나머지: 4
    // 4632 → 10  몫: 463  나머지: 2
    // 463 → 10  몫: 46  나머지: 3
    // 46 → 10  몫: 4  나머지: 6
    // 4 → 10  몫: 0  나머지: 4

    // 숙제2. 자리수 제한 없는 상황에서도 똑같이 동작!
    for(int i=1; i<=5; i++) {
        total += (num % 10);  //  총합
        num = num / 10;  // 다음 숫자(- 1자리;)
        
    }
    printf("총합 %d\n", total);  
}