#include <stdio.h>

int main() {
    int a = 5, b = 3, sementara;

    printf("Sebelum ditukar:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    sementara = a;
    a = b;
    b = sementara;

    printf("\nSetelah ditukar:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}