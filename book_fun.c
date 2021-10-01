#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{	
	// typedef struct goodbook{
 //    int ID;    
 //    SHELF shelfNum;
 //    float price;
	// } GOODBOOK;
	// return GOODBOOK;
	BOOK new = {ID,shelfNum, price};
	return new;
    // implement this function as per specification in books_def.h
}

void printBook(BOOK book1)
{	
	printf("%d %d %f\n",book1.ID,book1.shelfNum,book1.price);
   // implement this function as per specification in books_def.h
   return;
}