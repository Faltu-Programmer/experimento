#include <iostream>
#include "nCr.cpp"

void print ( int n)
{
    std :: cout << n << " ";
}


void pascalsT ( int noOfTerms )
{
    for( int n = 0; n <noOfTerms; n++)
    {
        for( int r = 0; r <= n; r++)
        {
            print ( nCr_v1 ( n, r));
	    	print ( nCr_v2 ( n, r));
        }
        std :: cout << "\n\n";
    }
}

