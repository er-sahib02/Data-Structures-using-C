#include<stdio.h>
#include<stdlib.h>
void insert_at_beginning();
void insert_at_middle();
void insert_at_end();
void deletion();
void count();
struct node
{
    int data;
    struct node *next;
}*head, *var, *temp;
int main()
{
    int  ans;
    head = NULL;
    while(1)
    {
        printf("\n Enter the option\n 1 for insertion at beginning \n 2 for insertion in  middle \n 3 for insertion at end \n 4 for delete \n 5 for counting no. of nodes\n 6 for exit\n");
        scanf("\n %d",&ans);
        switch(ans)
        {
            case 1: insert_at_beginning();
                    break;
            case 2: insert_at_middle();
                    break;
            case 3: insert_at_end();
                    break;
            case 4: deletion();
                    break;
            case 5: count();
                    break;
            case 6: exit(0);
            default: printf("\n Wrong Choice entered");
                    break;
        }
    }
    return 0;
}
    void insert_at_beginning()
{
    int value;
    printf("Enter the data");
    scanf("%d",&value);
    var=(struct node*)malloc(sizeof(struct node));
    var->data=value;
    if(head==NULL)
    {
        var->next=NULL;
        head=var;
    }
    else{
        var->next=head;
        head=var;
    }
    temp=head;
    while(temp!=NULL)
    {
       printf("|%d|----",temp->data);
       temp=temp->next;
    }
}
    void insert_at_middle()
    {
        int value, after;
         if(head==NULL)
        {
            printf("\n NOT APPLICABLE! NO element in list\n");
        }
        else{
        printf("Enter value \t");
        scanf("%d",&value);
        printf("\n Enter the value after which you want to add your value \t");
        scanf("%d",&after);
        struct node *temp;
        var = (struct node *)malloc (sizeof(struct node));
        var->data=value;


            temp=head;
            while(temp!=NULL)
            {
                if(temp->data==after)
                {
                 var->next=temp->next;
                 temp->next=var;
                 break;
                }
                temp=temp->next;

            }
            if(temp==NULL)
            {
                printf("\n No Such Value found after which node can be added \n");
            }
            else
            {
                temp=head;
                while(temp!=NULL)
            {
                printf("|%d|----",temp->data);
                temp=temp->next;
            }
            }
        }
    }

    void insert_at_end()
    {
        int value;
        printf("Enter value");
        scanf("%d",&value);
        struct node *temp;
        var = (struct node *)malloc (sizeof(struct node));
        var->data=value;
        if(head==NULL)
        {
            head=var;
            var->next=NULL;
        }
        else
            {
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                var->next=NULL;
                temp->next=var;
            }
            temp=head;
            while(temp!=NULL)
            {
                printf("|%d|----",temp->data);
                temp=temp->next;

            }
    }
    void deletion()
    {
        int value,i=0;
        if(head==NULL)
        {
            printf("\n NOT APPLICABLE! LIST EMPTY \n");
        }
        else
        {
            printf("Enter the value to delete");
            scanf("%d",&value);
            temp=head;
            while(temp!=NULL)
            {   var=temp->next;
                if(temp==head&&temp->data==value)
                {
                    var=temp->next;
                    head=var;
                    i=1;
                    break;

                }

                else if(var->data==value)
                {
                    temp->next=var->next;
                    i=1;
                    break;
                }
                else{
                    temp=temp->next;
                }
            }
           if(head==NULL){
                printf("List Empty Now");
            }
            else
            {
                temp=head;
                while(temp!=NULL)
                {
                    printf("|%d|----",temp->data);
                    temp=temp->next;

                }

            }
        }

    }
    void count()
    {
        int i=0;
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        printf("\n Number of nodes = %d \n",i);
    }




