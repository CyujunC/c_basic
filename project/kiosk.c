#include <stdio.h>
#include <string>

// 메뉴표 생성(전역)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3] = {"콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// 고객 주문 기록 저장(전역)
char *menu_save[3] = {};   // 주문 메뉴
int price_save[3] = {};    // 주문 가격

void print_main_menu(void);
void print_order(void);

int main() {
    // 1.메인 메뉴 출력
    print_main_menu()

    // 2.사용자 메인 메뉴 선택
    int menu_num = 0;  //사용자가 선택한 메뉴번호 저장
    puts("■ 원하시는 메뉴번호를 선택하세요.");
    while(1) {  // 1: True, 0: False 
        scanf("%d", &menu_num);
        if(menu_num >= 1 || menu_num <= 4) {  // 1~ 4 out
            break;
        } else {
            puts("Warning: 1~4의 번호를 입력해주세요.");
        }
    }
    // 1~4 in 번호 → 넘어감 ( break )

    // if(menu_num >= 1 && menu_num <= 4) {  // 1~4 in
    // } else {
    //     puts("Warning: 1~4의 번호를 입력해주세요.");
    // }

    // 3.세부메뉴 출력 (1~4 in)
    int choice_num;  //사용자가 선택한 세부 메뉴번호 저장
    if(menu_num == 1) {         // 햄버거 세트

    } else if(menu_num == 2) {  // 햄버거
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("□□ %d.%s(%d원) \n", i+1, burger_name[i], burger_price[i]);
        }
        puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        printf(">> 번호: ");
        scanf("%d", &choice_num);

    } else if(menu_num == 3) {  // 사이드

    } else if(menu_num == 4) {  // 드링크

    }
}

void print_main_menu(void) {
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ cnu 버거 2022");
    puts("■  - version 1.0");
    puts("■  - developed by yujun");
    puts("■  - date 2022.12.07");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 저희 매장을 찾아주셔서 감사합니다.");
    puts("■ 원하시는 메뉴를 선택해주세요.");
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    puts("■ 1.햄버거 세트");  // 햄버거, 사이드, 음료수
    puts("■ 2.햄버거 메뉴");  // 햄버거
    puts("■ 3.사이드 메뉴");  // 사이드
    puts("■ 4.드링크 메뉴");  // 음료
    puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}

// 1.햄버거 주문
int choice_burger(void) {

}
// 2.사이드 주문
int choice_side(void) {

}
// 3.츠링크 주문
int cnoice_drink(void) {

}

 

}