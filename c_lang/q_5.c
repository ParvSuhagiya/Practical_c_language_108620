#include <stdio.h>

struct students
{
    int id;
    char name[50];
    int marks[3];
};


int main(){
    struct students s;

    printf("enter id : ");
    scanf("%d", &s.id);
    
    printf("enter name : ");
    scanf("%s", s.name);

    printf("enter mark1 : ");
    scanf("%d", &s.marks[0]);
    
    printf("enter mark2 : ");
    scanf("%d", &s.marks[1]);

    printf("enter mark3 : ");
    scanf("%d", &s.marks[2]);

    printf("id :  %d \n", s.id);
    printf("name : %s \n", s.name);
    printf("mark1 : %d \n", s.marks[0]);
    printf("mark2 : %d \n", s.marks[1]);
    printf("mark3 : %d \n", s.marks[2]);
    
    return 0;
}