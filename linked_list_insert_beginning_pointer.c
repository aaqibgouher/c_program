#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

void insert_beginning(int n){
    //created node and assigning the value to it;
    struct node *snode;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;

    //linking the nodes;
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        snode->next = head;
        head=snode;
    }
}

void print(){
    //print via calling the function and taking the temp because if we use that head,then the pointer that connected to first node will be losr;
    struct node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
    head=NULL;

    insert_beginning(2);
    insert_beginning(4);
    insert_beginning(6);

    print();
}
