#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer: %d bytes\n", sizeof(int));
    printf("Address of a: %p\n", (void*)p);
    printf("Value of a: %d\n", *p);

    char p0;
    p0 = *(char*)p; // Accessing the first byte of the integer
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Address of first byte of a: %p\n", (void*)((char*)p));
    printf("Value of first byte of a: %d\n", p0);
}