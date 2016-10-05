////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////#include <stdlib.h>
////
////int do_a_book_page(long);
////
////void main(void)
//// {
////	 int rv;
////	 unsigned long nbr_pages = 0;
////	 unsigned long page = 0;
////	
////	 printf("\n\nEnter number of pages to do == > ");
////	 scanf("%d", &nbr_pages);
////	
////	 for (page = 1; page <= nbr_pages; page++)
////		 {
////		 rv = do_a_book_page(page);
////		
////		 if (rv == 99)
////			 {
////			   printf("\nAllocation error, exiting...");
////			  exit(1);
////			 }
////		 }
////	
////	    printf("\n\nDid all the pages!\n");
////	 }
////
////int do_a_book_page(long page_nbr)
////{
////	char *book_page; /* pointer to assign allocation to */
////
////	book_page = (char *)malloc(sizeof(char)*page_nbr);
////
////	if (book_page == NULL)
////	{
////		printf("\nError in line %3.3d: Could not allocate memory.",
////			__LINE__);
////		return(99);
////	}
////	else
////	{
////		printf("\nAllocation for book page %d is ready to use...",
////			page_nbr);
////	}
////	//free(book_page);
////	return 0;
////}
//
////#include <stdlib.h>
////#include <stdio.h>
////#include <conio.h>
////#define MAX 100
////void main(void)
////{
////	char *string = (char *)malloc(MAX);
////	printf("Enter something : ");
////	//gets(string);
////	scanf("%s", &string);
////	puts(string); /* do something like printing */
////	free(string);
////}
//
///* Day 1: Exercise 5 */
////#include <stdlib.h>
////#include <stdio.h>
////void main(void)
////{
////	long *long_array;
////	long total = 0;
////	int ctr;
////	long_array = (long *)calloc(sizeof(long), 10);
////	printf("Enter 10 numbers: ");
////	for (ctr = 0; ctr < 10; ctr++)
////	{
////		scanf("%ld", long_array + ctr);
////		
////			total += *(long_array + ctr);
////	}
////	printf("\n\nTotal of numbers is : %ld", total);
////}