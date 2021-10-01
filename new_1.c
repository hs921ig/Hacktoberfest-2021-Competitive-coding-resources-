#include "linkedList.h"

int main()
{
    LIST newList = createNewList();
    NODE n1 = createNewNode(10);
    NODE n2 = createNewNode(20);
    NODE n3 = createNewNode(30);
    NODE retNode = search(newList,10);
    if (retNode != NULL) printNode(retNode);
    printList(newList);
    insertNodeIntoList(n1,newList);
    printList(newList);
    insertNodeIntoList(n2,newList);
    printList(newList);
    insertNodeAtEnd(n3,newList);
    printList(newList);
    retNode = search(newList,10);
    if (retNode != NULL) printNode(retNode);
    retNode = search(newList,50);
    if (retNode != NULL) printNode(retNode);
    NODE n4 = createNewNode(40);
    insertAfter(10,n4,newList);

    removeElem(40,newList);
    printList(newList);
    removeElem(20,newList);
    printList(newList);
    removeElem(10,newList);
    printList(newList);
    removeElem(30,newList);
    printList(newList);
    removeElem(30,newList);
    printList(newList);
}
