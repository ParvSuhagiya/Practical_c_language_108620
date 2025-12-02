#include <stdio.h>

int main(){

    int num1,num2,result;
    char method;

    printf("enter num1:");
    scanf("%d", &num1);
    printf("enter num2:");
    scanf("%d", &num2);
    printf("enter method:");
    scanf("%c", &method);

    switch(method)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    
    default:
    printf("invalid input");
        break;
    }

    printf("%d", result);

    return 0;
}