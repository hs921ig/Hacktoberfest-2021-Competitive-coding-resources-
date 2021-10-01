#include "books_catalog.h"

void addBookToCatalog(BOOK book1)
{
    // implement this function as per specification in books_catalog.h
	// newBook[MAX_SIZE];
	booksCatalog[count].ID=book1.ID;
	booksCatalog[count].shelfNum=book1.shelfNum;
	booksCatalog[count].price=book1.price;
	// scanf("%d %d %f",&book1.ID,&book1.shelfNum,&book1.price);
	count++;
    return;
    
}

void printBookCatalog()
{
    // implement this function as per specification in books_catalog.h
	for(int i=0;i<count;i++){
		printBook(booksCatalog[i]);
	}
    return;
}

void sortBookCatalogOnID()
{
    // implement this function as per specification in books_catalog.h
	for(int i=0;i<count;i++){
		for(int j=0;j<count-1-i;j++){
			if(booksCatalog[j].ID>booksCatalog[j+1].ID){
				int temp=booksCatalog[j].ID;
				booksCatalog[j].ID=booksCatalog[j+1].ID;
				booksCatalog[j+1].ID=temp;
			}
		}
	}
    return;
}