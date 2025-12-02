#include <stdio.h>

int main(){

    int num1=0;
    int num2=1;
    int num3;

    int input;
    scanf("%d", &input);
    
    if (input == 1)
    {
        printf("%d", num1);
    }
    else if (input == 2)
    {
        printf("%d", num2);
    }

    for (int i = 1; i < input-1; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;

        

        printf("%d ", num3);
    }

    return 0;
}