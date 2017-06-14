#include<stdio.h>
#include<stdlib.h>
void display(int[],int, int);
int main()
{
    int rear=-1, front=-1;
    int i, ans, item;
    int que[5];
    while(1)
    {
        printf(" \n Enter your option:\n press 1 for insertion \n press 2 for deletion \n press 3 for exit \n");
        scanf(" \t%d",&ans);
        switch(ans)
        {
            case 1: if(front==0&& rear==4)
                    {
                        printf(" \n Overflow");

                    }
                    else if(front>rear)
                    {
                        printf("overflow");
                    }
                        else if(front==-1)
                            {
                                front++;
                                rear++;
                                printf("\n Enter element to be inserted \n");
                                scanf("%d",&item);
                                que[rear]=item;
                                display(que,front,rear);

                            }
                            else{
                                rear++;
                                printf("\n Enter element to be inserted \n");
                                scanf("%d",&item);
                                que[rear]=item;
                                display(que,front,rear);
                            }
                            break;
            case 2: if(front==-1)
                    {
                        printf("underflow");
                    }
                    else{
                        for(i=front+1;i<=4;i++)
                        {
                            que[i-1]=que[i];
                        }
                        rear--;
                        display(que,front,rear);
                    }
                    if(rear==-1)
                    {
                        front=-1;
                    }
                    break;
            case 3: exit(0);
                    break;
            default : printf("\n wrong choice \n");
        }
    }
    return 0;
}
void display(int a[5], int b, int c)
{
    int j;
    for(j=b;j<=c;j++)
    {
        printf("|%d|",a[j]);
    }
}
