int factorial (int n)
{
    if (n < 2)
    {
        return 1;
    }

    int fact = 2;
    
    for (int itr = 3; itr <= n; itr++)
    {
        fact *= itr;
    }

    return fact;
}