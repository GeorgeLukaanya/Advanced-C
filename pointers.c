#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a; // Pointer to integer
    printf("Value of a: %d\n", a); //    Value of a
    printf("Address of a: %p\n", (void*)&a); // Address of a
    printf("Value of pointer p: %p\n", (void*)p); // Address stored in pointer
    printf("Value pointed to by p: %d\n", *p); // Dereferencing pointer
    return 0;
}