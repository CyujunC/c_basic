#include  <stdio.h>

//���
// 1.if ~ else if ~ else
// 2.switch ~ case ~ default

/**
 * ���� ���� ��� �� ���ǿ� �ش��ϴ� �ϳ��� ��� ����
 * 
 * ��Ģ
 *  1) ���ǽ��� �����ĸ� ���
 *  2) �⺻������ case�� breaak���� ����
 *  3) break�� ���� ��� break ������ ������ ��� case ����
 *  4) default�� ���ǿ� �ش��ϴ� case�� ���� ��� ����
 *  5) default�� ���� ����(if���� else�� ���) 
 *  6) default�� ���� ��ġ�ص� �������, ��κ� �� �ϴ�
 *  7) if������ switch���� ����ӵ� ����
*/
int main (void) {
    int rank = 2, m = 0;

    switch(rank) {
        case1:
            m = 300;
            break;
        case2:
            m = 200;
            break;
        case3:
            m = 100;
            break;
        default:
            m = 10;
            break;
    }
}