#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];   // char배열 → 문자열(string)
    int age;         // 나이
    double height;   // 신장(키)
    char *intro;     // 자기소개 → 포인터(주소)
}

int main(void) {
    struct profile yuni;  // 선언을 통해 구조체 생성

    strcpy(yuni.name, "최유준");   //<string.h>
    yuni.age = 8;
    yuni.height = 50.8;

    // malloc()함수
    //  - 메모리 동적 할당
    //  - ()안에 값은 Byte 의미
    //  - 반드시 free()로 해제

    // 동적 할당
    //  - 필요할 때 동적으로 메모리를 사용!
    yuni.intro = (char*)malloc(80);   // intro 포인터에 80Byte 할당 메모릴ㅇㄻ
    printf("자기소개: ");
    gets(yuni.intro);

    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);   // 동적 할당 메모리 해제
} 