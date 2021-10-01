#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void printList(node *head){
    node* tmp=head;

    while(tmp!=NULL){
        if(tmp->next==NULL){
            printf("%f",tmp->element);
        } else {
            printf("%f -> ",tmp->element);
        }
        tmp=tmp->next;
    }
}

node* createNewList(int n){
    struct node *newNode,*temp,*head;
    float input;
    head=(node*)malloc(sizeof(node*));
    if(head==NULL){
        printf("No memory available!");
    }
    else{
        printf("Enter the data at node 1: ");
        scanf("%f",&input);
        head->element=input;
        head->next=NULL;
        temp=head;
        for(int i=2;i<=n;i++){
            printf("Enter the data at node %d: ",i);
            scanf("%f",&input);
            newNode=createNewNode(input);
            if(newNode==NULL){
                printf("oops, out of memory!");
            }
            else{
                temp->next=newNode;
                temp=temp->next;
            }
        }
    }
    return head;
}

node* createNewNode(float ele){
    node *new=(node*)malloc(sizeof(node*));
    if(new==NULL){
        return NULL;
    } else {
        new->element=ele;
        new->next=NULL;
    }
    return new;
}

void removeElement(node* head,float i){
    node *prev,*curr;
    while(head!=NULL && head->element==i){
        prev=head;
        head=head->next;
        free(prev);
    }
    prev=NULL;
    curr=head;
    while(curr!=NULL){
        if(curr->element==i){
            if(prev!=NULL){
                prev->next=curr->next;
            }
            free(curr);
            curr=prev->next;
        } else {
            prev=curr;
            curr=curr->next;
        }
    }
}
