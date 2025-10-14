#include <stdio.h>

int main() {
    int n, i;
    int bin[32];

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 0;
    if(n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while(n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for(int j = i-1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}
