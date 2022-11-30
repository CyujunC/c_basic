#include <stdio.h>



int main (void) {


}

*pa = 10;         // 배열의 첫번째 
*(pa + 1) = 29;   // 배열
pa[2] = pa[0] + pa[1]; // 배열의 세번째 요소에 30입력
// 배열명[인덱스번호] → 해당 값을 호출
// ary[0], ary[1], ary[2] : (0)
// pa[0], pa[1], pa[2] : (0)  # 배열이름 = 시작주소 = 포인터(시작주  )

// 배열의 인덱서번호는 몇부터 시작? 0
// ary[99] → 배열의 크기(칸수)는 길이(len)? 99칸
//         → 배열의 인덱스 범위? 0~98
// 배열길이 계산?
// int ary[3]
// sizeof(ary) / sizeof(ary[0])
//    12       /     4    = 3 (3칸)
int ary_len = sizeof(ary) / sizeof(ary[0]);
for(int i; i<ary_len; i++) {
    printf("%d\n", pa[i]);
}