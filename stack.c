#include<stdio.h>
void display(int[], int);
int main(){
    int stack[5], top=-1, c;
    while(1)
    {
        printf("Enter: \n 1 for Push \n 2 for pop \n 3 for exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1 : if (top==4)
                    {
                        printf("Stack Overflow");
                    }
                    else {
                        top=top+1;
                        scanf("%d",&stack[top]);

                        display(stack,top);
                    }
                    break;
            case 2 : if (top==-1)
                    {
                        printf("Stack Underflow");
                    }
                    else if(top==0)
                    {
                        stack[top]=0;
                        top--;
                        printf("Stack is Empty");
                    }
                    else
                    {
                        stack[top]=0;
                        top--;
                        display(stack,top);
                    }
                    break;
            case 3 :
                exit(0);
                break;
            default :
                printf("invalid choice");
                break;

        }
    }
    return (0);
}
void display(int a[10], int x)
{
    int i;
    for(i=x;i>=0;i--)
    {
        printf("|%d|\n",a[i]);
    }

}
