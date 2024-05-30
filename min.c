#include <stdio.h>
int main(){

int myaray[]={6,7,8,9,9,10,1,5,17,95};
int min;
min=myaray[0];
for (int i=0; i<10;i++){
    if (myaray[i]<min){


        min=myaray[i];
        printf("minimum :%d \n",min);
    }


}

    return 0;
}