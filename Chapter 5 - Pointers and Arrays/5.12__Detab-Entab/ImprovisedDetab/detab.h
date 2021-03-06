/* ------------------------------ MACROS ------------------------------- */

#define MAXLENGTH	100
#define TABSTOP		6
#define TAB  		'\t'
#define READ 		"r"
#define SPACE		' '
#define END_OF_STRING	'\0'

#define TABSTOP_REACHED( count , tabstop )	( count % tabstop ) == 0

/* --------------------------------------------------------------------- */


/* ------------------ FUNCTIONS HEADERS ----------------------- */

// Input | Output
void fetchTabSpecifications( char const *[] , int * , int * );

void readInputFromFile( char * , int );

void placeTabIfFound( char ** , char , FILE * );

void displayOutputString( char * );


// Converting Tabs to Spaces - Detab
void detab( char * , char * , int , int );

void performDetab( char , char * , int , int * );

void placeSpacesToTab( char * , int , int ** );

void resetCharCount( int ** , int );


// Utility
char getNextChar( char * );

void sendCharToOutputString( char * , char );

/* ------------------------------------------------------------- */