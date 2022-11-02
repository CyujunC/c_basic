#include  <stdio.h>

/**
 * 1.while
 *  - dowhile: Î∞òÎ≥µ?ïòÎ©¥ÏÑú ?ã§?ñâ?ïò?äî ?ã§?ñâÎ¨∏ÏùÑ
*/

int main(void) {
    // 1.whileπÆ
    // while(Ï°∞Í±¥) {
    //      ?ã§?ñâ;    
    // }

    // 2.dowhileπÆ
    int a = 1;
    do {
        a = a*2;
    } while(a < 20);
    printf("a : %d\n", a);
    }