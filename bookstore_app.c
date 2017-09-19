// this program keeps track of the books, its price..
// it allows to find a book, add a new book to the inventory, checks it cost...

#include <stdio.h>
 
#define MAX_BOOKS 10
#define MAX_TITLE_SIZE 20

struct Book                    // creating a structure...
{
	int isbn;
	float price;
	int year;
	char title[MAX_TITLE_SIZE];
	char title1[MAX_TITLE_SIZE];
	char title3[MAX_TITLE_SIZE];
	int qty;
};

void flush()                   // a flush function which puses the execution till the user doen't hit enter..
{
	char ch;
	do
	{
		scanf("%c",&ch);
	}while(ch!='\n'); 
}
void menu()               // function which provides different options to user..
{
	printf("Please select from the following options:\n");
	printf("1) Display the inventory.\n");
	printf("2) Add a book to the inventory.\n");
	printf("3) Check price.\n");
	printf("0) Exit.\n\n");
}
void displayInventory(struct Book book[], int size)    //  function which display what is in the inventory...
{
	int i=0;
	if(size != 0)
	{	
		printf("\n\nInventory\n");
	printf("===================================================\n");
	
	printf("ISBN      Title               Year Price  Quantity\n");
	printf("---------+-------------------+----+-------+--------\n");
	
	
	while(i < size)           // displaying book is a type now with its properties, so we can store no. of books in that type and display at the same time..
	{
		printf("%-10.0d%-20s%-5d$%-8.2f%-8d\n",book[i].isbn,book[i].title,book[i].year,book[i].price,book[i].qty);
		i++;	
	}
	
	printf("===================================================\n\n");
        }
	else
	{
		printf("The inventory is empty!\n");
		printf("===================================================\n\n");
	}
}
int searchInventory(const struct Book *book, const int isbn1, const int size)     // function allows to search a particular book...
{
	int i,b=-1;
		for(i=0;i<size;i++)
		{
			if(isbn1 == book[i].isbn)                   // searching book through its isbn number...
			{
				b=i;
			}
		}
	return b;
}
void addBook(struct Book book[], int *size)                // function which allows us to add books to our inventory...
{
	int b = -1, qty, isbn1;	
	if(*size < MAX_BOOKS)                        // checking if the limit is reached or not to store books...
	{
		printf("ISBN:");                          // entering data of the book...
		scanf("%d",&isbn1);
		b = searchInventory(book,isbn1,*size);		
		if(b==-1)
		{
		book[*size].isbn = isbn1;
		printf("Quantity:");
		scanf("%d",&book[*size].qty);
		printf("Title:");
		flush();
		scanf("%[^\n]s",book[*size].title);
		printf("Year:");
		scanf("%d",&book[*size].year);
		printf("Price:");
		scanf("%f",&book[*size].price);
		printf("The book is successfully added to the inventory.\n\n");
		*size = *size + 1;
		}
		else
		{
			printf("Quantity:");
			scanf("%d",&qty);
			book[b].qty =book[b].qty + qty;
		        printf("The book exists in the repository, quantity is updated.\n\n");	
		}
		}
	else
	{
		printf("the inventory is full\n");
	}
}
void checkPrice(const struct Book *book, const int size)       // function which allows us to check cost of the book...
{
	int isbn, b;
	printf("Please input the ISBN number of the book:\n\n");
	scanf("%d",&isbn);
	b = searchInventory(book,isbn,size);
	if(b == -1)
	{
		printf("Book does not exist in the bookstore! Please try again.\n\n");
	}
	else
	{
		printf("Book %d costs $%.2f\n\n",book[b].isbn,book[b].price);
	}
}
int main(void)
{
	int size1 = 0,option;
	struct Book book1[MAX_BOOKS];
	printf("Welcome to the Book Store\n");
	printf("=========================\n");
	do
	{
		menu();
		printf("Select: ");
		scanf("%d",&option); 
		switch(option)                       // using switch statement to provide user to select different options...
		{
			case 1:
				displayInventory(book1,size1);
				break;	
			case 2:
				addBook(book1,&size1);
				break;
			case 3:
				checkPrice(book1,size1);
				break;
			case 0:
				printf("Goodbye!\n");
				break;

			default: 
				printf("Invalid input, try again:\n");
	}
	}while(option!=0);
	return 0;
}
