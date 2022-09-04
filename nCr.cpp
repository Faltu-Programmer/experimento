#include "factorial.cpp"

int  nCr_v1 (int n, int r)
{
	if(n == r or r == 0)
	{
		return 1;
	}
	
    int num = 1, den = 1;

    for(; n > r; n--)
    {
		num *= n;
    }

    for (int itr = r-1; itr > 1; itr--)
    {
        den *= itr;
    }

    return (num/den);
};



int nCr_v2 ( int n, int r)
{
    if (r == 0 or n == r)
    {
        return 1;
    }

    int num, den;
    
    num = factorial (n);
    den = factorial (r) * factorial (n-r);

    return (num/den);
};