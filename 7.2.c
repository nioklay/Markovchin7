#include <stdio.h>


int size_info() {
    int a;
    double b;
    float c;
    char d;
    long e;
    long double i;
    long long int j;
    printf("\n %lu - ������ ���������� int", sizeof(a));
    printf("\n %lu - ������ ���������� char", sizeof(d));
    printf("\n %lu - ������ ���� float", sizeof(c));
    printf("\n %lu - ������ ���������� double", sizeof(b));
    printf("\n %lu - ������ ���������� long double", sizeof(i));
    printf("\n %lu - ������ ���� long long int", sizeof(j));
}

