#include <stdio.h>

int main() {
    char name[100];
    int age;

    scanf("%[^\n]%*c", name);
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved");
    return 0;
}