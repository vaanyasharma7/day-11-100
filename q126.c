#include <stdio.h>

int main() {
    char filename[100], line[500];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}