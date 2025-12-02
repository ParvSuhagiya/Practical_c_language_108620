#include <stdio.h>

int main(){

    char c;
    printf("enter character : ");
    scanf("%c", &c);
    int d = c;


    if (d >= 'A' && d <= 'z')
    {
        if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' || d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U')
        {
            printf("vowels");
            goto a;
        }
        
        printf("consonant");
    }
    
    a:

    return 0;
}