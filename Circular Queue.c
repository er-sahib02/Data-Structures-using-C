#include<stdio.h>
#include<stdlib.h>
int menu();
void display(int[],int,int);
int main(){
    int QUE[5],frt=-1,rear=-1,ans,item;
    while(1){
        ans=menu();
        switch(ans){
        case 1:
            if(frt==0&&rear==4){
                printf("Overflow!\n");
                break;
            }
            else if(rear+1==frt){
                printf("Overflow!\n");
                break;
            }
            printf("Enter the element: ");
            scanf("%d",&item);
            if(frt==-1&&rear==-1){
                frt++;
                rear++;
                QUE[rear]=item;
            }
            else if(rear==4){
                rear=0;
                QUE[rear]=item;
            }
            else{
                rear++;
                QUE[rear]=item;
            }
            display(QUE,rear,frt);
            break;
        case 2:
            if(frt==-1){
                printf("Underflow!\n");
                break;
            }
            else if(rear+1==frt&&frt==4){
                frt=0;
            }
            else if(frt==rear){
                frt=-1;
                rear=-1;
                printf(" Now Queue Empty!\n");
                break;
            }
            else{
                frt++;
            }
            display(QUE,rear,frt);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid Option!\n");
        }
    }
return 0;
}
int menu(){
    int c;
    printf("Enter 1 to Insert a element in Queue\n");
    printf("Enter 2 to Delete a element in Queue\n");
    printf("Enter 3 to exit\n");
    scanf("%d",&c);
    return c;
}
void display(int QUE[],int rear,int frt){
    int i;
    if(rear<frt){
        for(i=frt;i<5;i++){
            printf("|%d|",QUE[i]);
        }
        for(i=0;i<=rear;i++){
            printf("|%d|",QUE[i]);
        }
    }
    else if(frt==4&&frt!=rear){
        printf("|%d|",QUE[frt]);
        for(i=0;i<rear+1;i++){
            printf("|%d|",QUE[i]);
        }
    }
    else if(frt==rear)
    {
        printf("|%d|", QUE[frt]);
    }
    else{
        for(i=frt;i<rear+1;i++){
            printf("|%d|",QUE[i]);
        }
    }
    printf("\n");
}
