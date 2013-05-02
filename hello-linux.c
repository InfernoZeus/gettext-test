#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <libintl.h>

int main(int argc, const char * argv[])
{
 const char *domain = "hello";
 const char *directory = ".";

 bindtextdomain(domain, directory);
 textdomain(domain);
 
 printf("Default LC_ALL: %s\n", setlocale(LC_ALL, ""));
 printf("Default LC_COLLATE: %s\n", setlocale(LC_COLLATE, ""));
 printf("Default LC_CTYPE: %s\n", setlocale(LC_CTYPE, ""));
 printf("Default LC_MONETARY: %s\n", setlocale(LC_MONETARY, ""));
 printf("Default LC_NUMERIC: %s\n", setlocale(LC_NUMERIC, ""));
 printf("Default LC_TIME: %s\n", setlocale(LC_TIME, ""));

 char *locale = setlocale(LC_ALL, "it_IT");
 if (locale == NULL) {
 	printf ("Failed to change locale to it_IT\n");
 } else {
	printf ("Changed locale to %s\n", locale);
	printf("Using LC_ALL: %s\n", setlocale(LC_ALL, NULL));
	printf("Using LC_COLLATE: %s\n", setlocale(LC_COLLATE, NULL));
	printf("Using LC_CTYPE: %s\n", setlocale(LC_CTYPE, NULL));
	printf("Using LC_MONETARY: %s\n", setlocale(LC_MONETARY, NULL));
	printf("Using LC_NUMERIC: %s\n", setlocale(LC_NUMERIC, NULL));
	printf("Using LC_TIME: %s\n", setlocale(LC_TIME, NULL));
 }

 bindtextdomain(domain, directory);
 textdomain(domain);
 printf( gettext( "Hello, world" ) );
 printf( "\n" );


 locale = setlocale(LC_ALL, "en_IN");
 if (locale == NULL) {
 	printf ("Failed to change locale to en_IN\n");
 } else {
	printf ("Changed locale to %s\n", locale);
	printf("Using LC_ALL: %s\n", setlocale(LC_ALL, NULL));
	printf("Using LC_COLLATE: %s\n", setlocale(LC_COLLATE, NULL));
	printf("Using LC_CTYPE: %s\n", setlocale(LC_CTYPE, NULL));
	printf("Using LC_MONETARY: %s\n", setlocale(LC_MONETARY, NULL));
	printf("Using LC_NUMERIC: %s\n", setlocale(LC_NUMERIC, NULL));
	printf("Using LC_TIME: %s\n", setlocale(LC_TIME, NULL));
 }

 bindtextdomain(domain, directory);
 textdomain(domain);
 printf( gettext( "Hello, world" ) );
 printf( "\n" );

 exit(0);
}