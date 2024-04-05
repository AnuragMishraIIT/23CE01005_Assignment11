/*  
    LAB ASSIGNMENT: 11
    Question number: 1

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 05/04/2024
*/

#include <stdio.h>
int n=0;
struct stack
{
    int top;
    char item[100];
} s;

void push()
{
    if(s.top==99)
    {
        printf("The stack is full\n");
    }
    else
    {
        scanf("%c",&s.item[++s.top]);
    }
}


void display()
{
    if(s.top==-1)
    {
        return;
    }
    else
    {
        printf("%c",s.item[s.top--]);
        return;
    }
}

int main()
{
    s.top=-1;
    printf("Enter the size of the string:\n");
    scanf("%d",&n);
    getchar();
    printf("Enter the string to reverse:\n");
    for(int i=0;i<=n;i++)
    {
        push();
    }

    printf("The reversed string is:\n");
    for(int i=0;i<=n;i++)
    {
    display();
    }

    
    return 0;
}