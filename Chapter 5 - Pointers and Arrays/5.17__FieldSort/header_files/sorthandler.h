/* ------------ MACROS ------------- */

#define LEXICO_SORT		'l'
#define REVERSE_SORT		'r'
#define NUMERIC_SORT		'n'
#define REVERSE_NUMERIC_SORT	1

#define ON 	1
#define OFF 	0

/*---------------------------------- */


/* --------------------------- FUNCTION HEADERS ------------------------------ */

int checkTypeOfSorting( int , char const * [] , int * );

void checkForDirectorySort( int , char const * [] , int * );

void sortHandler( int , char * [] , int , int , int );

void quickSort( char * [] , int , int , int , int , int );

void setTypeOfSorting( int , void ( ** )( char * [] , int * , int , int , int , int ) );

void lexicographicSort( char * [] , int * , int , int , int , int );

void reverseSort( char * [] , int * , int , int , int , int );

void numericSort( char * [] , int * , int , int , int , int );

void reverseNumericSort( char * [] , int * , int , int , int , int );

int numberCompare( char * , char * , int * , int );

void swap( char * [] , int , int );

int str_cmp( char * , char * , int , int );

/* ---------------------------------------------------------------------------- */