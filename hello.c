#include <stdio.h>
int main() {
    //pointerA();
    //pointerB();
    pointerC();


	return 0;
}


int pointerC() {
    int a;
    int b;
    int* p;

    p = &a;
    *p = 2;
    p = &b;
    *p = 4;

    //pointerB �� ����
    printf("a : %d \n", a); //2
    printf("b : %d \n", b); //4

    return 0;
}

int pointerB() {
    int* p;
    int a;

    p = &a; // a�� ����ŵ�ϴ�
    *p = 3; //a�� ����Ű�� ��..

    printf("a �� �� : %d \n", a); // 3
    printf("*p �� �� : %d \n", *p); // 3
    // �̷ν� a = *p �����ϴٴ� ���� ����

    return 0;
}



int pointerA() {
    int* p;
    int a;

    p = &a;
    //printf("�����ϱ� �� *p �� �� : %d \n", *p); //  -858993460 ���ǻ� �����ִ� ��...����?
    a = 2;
    //printf("a �� �� : %d \n", a); //2
    printf("'a = 2'�� �� *p �� �� : %d \n", *p);
    a = 4;
    printf("'a = 4'�� �� *p �� �� : %d \n", *p);//2 //*p = a
    // "p �� ������ �ּ�(���� a �� �ּ�)�� �ش��ϴ� ������, �� ���� a�� '2'�� ����

    return 0;
}
