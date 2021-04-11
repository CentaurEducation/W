#include"sub.h"

int main( int argc, char *argv[] )
{
	int i;
	
	for( i= 1; i < argc; i+= 3 )
	{
		sub( argv[i], argv[i+1], argv[i+2] );
	}
	
	return 0;
}
