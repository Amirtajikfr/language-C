#include <stdio.h>

int main() {
    int myarray[] = {6, 7, 8, 9, 9, 10, 1, 5, 17, 95};
    int max = myarray[0];

    for (int i = 1; i < 10; i++) {
        if (myarray[i] > max) {
            max = myarray[i];
        }
    }

    printf("Maximum : %d\n", max);

    return 0;
}
