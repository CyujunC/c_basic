#include <stdio.h>
#include <string>

// �޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"};
char *side_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ����(����)
char *menu_save[3] = {};   // �ֹ� �޴�
int price_save[3] = {};    // �ֹ� ����

void print_main_menu(void);

int main() {
    // 1.���� �޴� ���
    print_main_menu()

    // 2.����� ���� �޴� ����
    int menu_num = 0;  //����ڰ� ������ �޴���ȣ ����
    puts("�� ���Ͻô� �޴���ȣ�� �����ϼ���.");
    while(1) {  // 1: True, 0: False 
        scanf("%d", &menu_num);
        if(menu_num >= 1 || menu_num <= 4) {  // 1~ 4 out
            break;
        } else {
            puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
        }
    }
    // 1~4 in ��ȣ �� �Ѿ ( break )

    // if(menu_num >= 1 && menu_num <= 4) {  // 1~4 in
    // } else {
    //     puts("Warning: 1~4�� ��ȣ�� �Է����ּ���.");
    // }

    // 3.���θ޴� ��� (1~4 in)
    int choice_num;  //����ڰ� ������ ���� �޴���ȣ ����
    if(menu_num == 1) {         // �ܹ��� ��Ʈ

    } else if(menu_num == 2) {  // �ܹ���
        puts("�����������������������������������������������������");
        puts("== Burger Menu ==");
        for(int i=0; i<3; i++) {
            printf("��� %d.%s(%d��) \n", i+1, burger_name[i], burger_price[i]);
        }
        puts("�����������������������������������������������������");
        printf(">> ��ȣ: ");
        scanf("%d", &choice_num);

    } else if(menu_num == 3) {  // ���̵�

    } else if(menu_num == 4) {  // �帵ũ

    }
}

void print_main_menu(void) {
    puts("�����������������������������������������������������");
    puts("�� cnu ���� 2022");
    puts("��  - version 1.0");
    puts("��  - develop by yujun");
    puts("��  - date 2022.12.07");
    puts("�����������������������������������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���.");
    puts("�����������������������������������������������������");
    puts("�� 1.�ܹ��� ��Ʈ");  // �ܹ���, ���̵�, �����
    puts("�� 2.�ܹ��� �޴�");  // �ܹ���
    puts("�� 3.���̵� �޴�");  // ���̵�
    puts("�� 4.�帵ũ �޴�");  // ����
    puts("�����������������������������������������������������");
}
}