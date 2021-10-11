/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#define SIZE 100
struct students
{
    int id;
    int age;
    int marks;
};
void acceptinput(struct students *s1)
{
    printf("Enter the id");
    scanf("%d",&s1->id);
    printf("Enter the age");
    scanf("%d",&s1->age);
    printf("Enter the marks");
    scanf("%d",&s1->marks);
}
void displayoutput(struct students *s1)
{
    printf("ID:%d\n",s1->id);
    printf("Age:%d\n",s1->age);
    printf("Marks:%d\n",s1->marks);
}
int main()
{
    struct students s[10];
    int no,i;
    printf("Enter the number of students:\n");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        acceptinput(&s[i]);
    }
     for(i=0;i<no;i++)
     {
        displayoutput(&s[i]);
     }
     return 0;
}
