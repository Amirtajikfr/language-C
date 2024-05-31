#include <stdio.h>

int main() {
    int myarray[] = {10, 13, 15, 16, 6, 5, 6, 6, 6, 6};
    int count = 0;
    int find = 6;

    // Description of the program
    printf("This program counts the occurrences of the value %d in an array.\n", find);

    // Counting occurrences of the value `find` in the array
    for (int i = 0; i < 10; i++) {
        if (find == myarray[i]) {
            count++;
        }
    }

    // Printing the count
    printf("The value %d occurs %d times in the array.\n", find, count);

    return 0;
}
