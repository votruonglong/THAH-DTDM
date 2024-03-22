#include <stdio.h>

void printMultiplesOfSeven() {
    int i;
    for (i = 10; i <= 99; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    printMultiplesOfSeven();
    return 0;
}
