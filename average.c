#include <stdio.h>

int main() {
    int tab[] = {20, 26, 22};
    int sum = 0;
    int av = 0;
    
    for (int i = 0; i < 3; i++) {
        sum = sum + tab[i];
    }
    
    av = sum / 3;
    
    printf("Sum of the array: %d\n", sum);
    printf("Average of the array: %d\n", av);
    
    return 0;
}
