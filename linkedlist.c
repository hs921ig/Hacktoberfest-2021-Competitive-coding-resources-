#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

void printNode(NODE n1)
{
    printf("Node is: ");
    printf("%d\n",n1->ele);
}

LIST createNewList(){
	LIST myListl;
	myList = (LIST) malloc(sizeof(struct linked_list));
	// myList = (LIST) malloc(sizeof(*LIST));
	myList->count=0;
	myList->head=NULL;
	return myList;
}

NODE createNewNode(int value){
	NODE myNode;
	myNode = (NODE) malloc(sizeof(struct node));
	// myList = (NODE) malloc(sizeof(*NODE));
	myNode->ele=value;
	myNode->next=NULL;
	return myNode;
}


void insertNodeIntoList(NODE n1, LIST l1){
	// case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
		n1->next = l1->head;
		l1->head = n1;
		l1->count++;
	}
}

void insertNodeAtEnd(NODE n1, LIST l1){
    // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
        NODE temp = l1->head;
        while(temp->next!=NULL)
        {
            temp = temp->next;            
        }
        temp->next = n1;
        n1->next = NULL;
        l1->count++;
		
	}	
}


NODE search(LIST l1, int value)
{
    if (l1->head == NULL)
    {
        printf("There are no elements in the list to search\n");
        return NULL;
    }
    else
    {
        NODE temp = l1->head;
        while(temp!=NULL)
        {
            if (temp->ele == value)
                return temp;
            temp = temp->next;
        }
        printf("Value not found in the list\n");
        return NULL;
    }
}
#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

void printNode(NODE n1)
{
    printf("Node is: ");
    printf("%d\n",n1->ele);
}

LIST createNewList(){
	LIST myList;
	myList = (LIST) malloc(sizeof(struct linked_list));
	// myList = (LIST) malloc(sizeof(*LIST));
	myList->count=0;
	myList->head=NULL;
	return myList;
}

NODE createNewNode(int value){
	NODE myNode;
	myNode = (NODE) malloc(sizeof(struct node));
	// myList = (NODE) malloc(sizeof(*NODE));
	myNode->ele=value;
	myNode->next=NULL;
	return myNode;
}


void insertNodeIntoList(NODE n1, LIST l1){
	// case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
		n1->next = l1->head;
		l1->head = n1;
		l1->count++;
	}
}

void insertNodeAtEnd(NODE n1, LIST l1){
    // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else {
        NODE temp = l1->head;
        while(temp->next!=NULL)
        {
            temp = temp->next;            
        }
        temp->next = n1;
        n1->next = NULL;
        l1->count++;
		
	}	
}


NODE search(LIST l1, int value)
{
    if (l1->head == NULL)
    {
        printf("There are no elements in the list to search\n");
        return NULL;
    }
    else
    {
        NODE temp = l1->head;
        while(temp!=NULL)
        {
            if (temp->ele == value)
                return temp;
            temp = temp->next;
        }
        printf("Value not found in the list\n");
        return NULL;
    }
}

void insertAfter(int searchEle, NODE n1, LIST l1)
{
     // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while(temp!=NULL)
        {
            if (temp->ele == searchEle)
                break;
            prev = temp;
            temp = temp->next;            
        }
        // I have to insert after temp;
        if(temp==NULL) 
        {
            printf("Element not found in the list. Not inserting\n");
            // prev->next = n1;
            // n1->next = NULL;
            // l1->count++;
            return;
        }
        else{
            if(temp->next == NULL)
            {
                temp->next = n1;
                n1->next = NULL;
                l1->count++;
            }
            else
            {
                prev = temp;
                temp = temp->next;
                prev->next = n1;
                n1->next = temp;
                l1->count++;
            }
            return;
        }       
		
	}	
    return;
}

void removeFirstNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else
    {
        NODE temp = l1->head;
        l1->head = temp->next;
        free(temp);
        l1->count--;        
    }
    return;
}

void removeLastNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else if(l1->count == 1)
    {        
        l1->count--;
        free(l1->head);
        l1->head = NULL;
    }
    else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while((temp->next) != NULL)
        {
            prev=temp;
            temp = temp->next;
        }
        prev->next = NULL;
        l1->count--;
        free(temp);
    }
    return;

}

void removeElem(int value, LIST l1)
{
    NODE target = search(l1, value);
    if (target != NULL) 
    {

        NODE currentNode = l1 -> head;
        NODE temp;
        if (currentNode -> ele == value) removeFirstNode(l1);
        else {
            while ((currentNode -> next) -> ele != value) currentNode = currentNode -> next;
            temp = (currentNode -> next) -> next;
            free(currentNode -> next);
            currentNode -> next = temp;
        }
        l1 -> count -= 1;
    }
}

void printList(LIST l1)
{
    if (l1 -> count != 0) {
    NODE currentNode = l1 -> head;
    printf("HEAD -> ");
    while (currentNode -> next != NULL) {
        printf("%d -> ", currentNode -> ele);
        currentNode = currentNode -> next;
    }
    printf("%d -> ", currentNode -> ele);
    printf("NULL\n");
    }
}

void insertAfter(int searchEle, NODE n1, LIST l1)
{
     // case when list is empty
	if(l1->count == 0) {
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	// case when list is non empty
	else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while(temp!=NULL)
        {
            if (temp->ele == searchEle)
                break;
            prev = temp;
            temp = temp->next;            
        }
        // I have to insert after temp;
        if(temp==NULL) 
        {
            printf("Element not found in the list. Not inserting\n");
            // prev->next = n1;
            // n1->next = NULL;
            // l1->count++;
            return;
        }
        else{
            if(temp->next == NULL)
            {
                temp->next = n1;
                n1->next = NULL;
                l1->count++;
            }
            else
            {
                prev = temp;
                temp = temp->next;
                prev->next = n1;
                n1->next = temp;
                l1->count++;
            }
            return;
        }       
		
	}	
    return;
}

void removeFirstNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else
    {
        NODE temp = l1->head;
        l1->head = temp->next;
        free(temp);
        l1->count--;        
    }
    return;
}

void removeLastNode(LIST l1)
{
    if (l1->count == 0)
    {
        printf("List is empty. Nothing to remove\n");        
    }
    else if(l1->count == 1)
    {        
        l1->count--;
        free(l1->head);
        l1->head = NULL;
    }
    else
    {
        NODE temp = l1->head;
        NODE prev = temp;
        while((temp->next) != NULL)
        {
            prev=temp;
            temp = temp->next;
        }
        prev->next = NULL;
        l1->count--;
        free(temp);
    }
    return;

}



void printList(LIST l1)
{
  
    NODE currentNode = l1 -> head;
    printf("HEAD -> ");
    while (currentNode -> next != NULL) {
        printf("%d -> ", currentNode -> ele);
        currentNode = currentNode -> next;
    }
    printf("%d -> ", currentNode -> ele);
    printf("NULL\n");
    }
}
