#include <stdio.h>

int main(){

    int size;
    int num = 1;
    scanf("%d",&size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}