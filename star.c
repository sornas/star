#include <stdio.h>

int main() {
    int i, j, x;
    int first_part[] = {9, 1, 8, 3, 7, 5, 6, 7, 0, 19, 2, 15, 4, 12};
    int second_part[] = {4, 5, 1, 5, 3, 4, 5, 4, 2, 3, 9, 3};

    for (i = 0; i < sizeof(first_part) / sizeof(first_part[0]); i += 2) {
        for (x = 0; x < first_part[i]; ++x) {
            printf(" ");
        }
        for (x = 0; x < first_part[i + 1]; ++x) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < sizeof(second_part) / sizeof(second_part[0]); i += 4) {
        for (x = 0; x < second_part[i]; ++x) {
            printf(" ");
        }
        for (x = 0; x < second_part[i + 1]; ++x) {
            printf("*");
        }
        for (x = 0; x < second_part[i + 2]; ++x) {
            printf(" ");
        }
        for (x = 0; x < second_part[i + 3]; ++x) {
            printf("*");
        }
        printf("\n");
    }
}
