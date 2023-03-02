#include<stdio.h>
int top = -1, stack [100];
void push(int);
int pop();
int eval (char, int, int);
void main() 
{
    char a[50], ch;
    int i,op1,op2,res,x;
    printf("Enter a postfix expression: ");
    scanf("%s", a);
    for(i=0; a[i]!='\0'; i++) 
    {
        ch = a[i];
        if (ch>='0' && ch<='9')
            push(ch-'0');
        else 
        {
            op2 = pop();
            op1 = pop();
            res = eval(ch, op1, op2);
            push(res);
        }
    }
    x = pop();
    printf("Evaluated value = %d\n", x);
}

void push(int n) 
{
    top++;
    stack [top] = n;
}
int pop() 
{
    int res;
    res = stack[top];
    top--;
    return res;
}
int eval(char ch, int op1, int op2) 
{
    switch(ch) 
    {
        case '+' : return (op1+op2);
        case '-' : return (op1-op2);
        case '*' : return (op1*op2);
        case '/' : return (op1/op2);
    }
}

