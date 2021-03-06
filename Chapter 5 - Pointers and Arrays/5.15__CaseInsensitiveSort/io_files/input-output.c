#include "stdio.h"
#include "stdlib.h"
#include "../header_files/readlines.h"
#include "../header_files/sorthandler.h"

//---------------------------------------------------------- OUTPUT ---------------------------------------------------------//

void printSortedLines(char * lines[], int no_of_lines, int sorting_type) {

	int line_no = 0;

	system( "clear" );

	printTypeOfSorting( sorting_type );

	while( line_no < no_of_lines ) {

		printLineIndex( line_no );

		printf("%s\n", lines[ line_no ]);

		++line_no;

	}

	printf("\n");

}

void printTypeOfSorting(int sorting_type) {

	switch( sorting_type ) {

		case LEXICO_SORT :	printf("\n\t\tLEXICOGRAPHICAL SORT => ( Case Insensitive )\n\n");

					break;

		case REVERSE_SORT :	printf("\n\t\tREVERSE SORT => ( Case Insensitive )\n\n");

					break;

		case NUMERIC_SORT :	printf("\n\t\tNUMERIC SORT =>\n\n");

					break;

	case REVERSE_NUMERIC_SORT :	printf("\n\t\tREVERSE NUMERIC SORT =>\n\n");

					break;

	}

}

void printLineIndex(int line_no) {

	if( ( line_no + 1 ) < 10 )

		printf(" %d. ", ( line_no + 1 ) );

	else

		printf("%d. ", ( line_no + 1 ) );

}

//--------------------------------------------------------------------------------------------------------------------------//