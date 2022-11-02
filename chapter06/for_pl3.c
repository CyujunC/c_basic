#include  <stdio.h>

// 1~10±îÁö 
int main(void) {
    
    for(int i = 1; i <=10; i ++) {
        // if(0) ¡æ False
        // if(1) ¡æ True
        if(i % 2) {    //Â¦¼öÆÇº°
            printf("Â¦¼ö\n");
        } else {
            printf("È¦¼ö\n");
        }
    }
}