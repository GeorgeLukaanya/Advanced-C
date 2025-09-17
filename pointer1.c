#include<stdio.h>

int main(){
    int a;
    a = 22;
    int *p;
    p = &a; //&a is the address of a
    printf("%d\n", p);
    printf("%d\n", a);
    printf("a = %d\n", *p);//dereferencing the pointer
    *p = 55;
    printf("a = %d\n", a);
     printf("%d\n", &a);
}