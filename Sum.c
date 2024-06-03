#include <stdio.h>

int main() {
    int myarray[] = {10, 10, 15, 0, 6, 5, 6, 6, 6, 6};
    int somme=0;
    
    for (int i=0;i<10;i++){
        somme=somme+myarray[i];
    

    }
    printf("somme %d ",somme);

  
    return 0;
}
