#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next;
}*head,*temp,*front,*rear,*new=NULL;
void enqueue();
void dequeue();
void display();
int main(){
        enqueue();
        
        dequeue();
        
}
void enqueue(){
    int t;
    printf("enter total number of elements to add to node\n");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        if(rear==NULL){
            
            front=new;
            rear=new;
        }
        else{
            rear->next=new;
            rear=new;
        }
    }
    display();
}
void dequeue(){
    int t;
    printf("enter total number of elements to delete from node\n");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        if(front==NULL){
            printf("EMPTY QUEUE");
        }
        else{
            temp=front;
            front=front->next;
            temp->next=NULL;
            free(temp);
            printf("Element Dequeued\n");
        }
    }
    display();
}
void display(){
    temp=front;
    if(front==NULL){
        printf("EMPTY");
    }
    else{
                while(temp!=NULL){
                            printf("%d",temp->data);
                            temp=temp->next;
    }}
}