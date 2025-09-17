#include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a; // Pointer to integer
    printf("Address p is %p\n", (void*)p); // Address stored in pointer
    printf("Size of integer is %d bytes\n", (int)sizeof(int));
    printf("Address p + 1 is %p\n", (void*)(p + 1)); // Address after incrementing pointer
    //This skips to the next byte

    double b = 10;
    double *q;
    q = &b; // Pointer to double
    printf("Address q is %p\n", (void*)q); // Address stored in pointer
    printf("Size of double is %d bytes\n", (int)sizeof(double));
    printf("Address q + 1 is %p\n", (void*)(q + 1)); // Address after incrementing pointer
    //This skips to the next byte

    return 0;
}