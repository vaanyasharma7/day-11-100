#include <stdio.h>

int main() {
    enum Colors {RED, YELLOW, GREEN};
    const char* names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i <= GREEN; i++)
        printf("%s=%d\n", names[i], i);

    return 0;
}