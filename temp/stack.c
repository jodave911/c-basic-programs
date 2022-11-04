#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push (void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("enter the size of stack");
scanf("%d",&n);
printf("\n1.push\n2.pop\n3.display\n4.exit");
do
{
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:{push();
       break;
       }
case 2:{pop();
       break;
       }
case 3:{display();
       break;
       }
case 4:
      break;
default:printf("invalid choice");
}
}while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("stack full");
}
else
{
printf("enter values");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if (top<=-1)
{
printf("under flow");
}
else
{
printf("popped elt is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("elements are");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
else
{
printf("stack is empty");
}
}
