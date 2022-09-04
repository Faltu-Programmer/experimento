#include <iostream>
#include "nCr.cpp"
//#include "pascals_tringle_improved.cpp"
using namespace std;



int main ()
{
    int n = 9, r = 5;
    //cin >> n >> r;

    //pascalsT (n);

    cout << nCr_v1 (n , r) << " ";
    cout << nCr_v2 (n , r) << "\n\n";

    return 0;
}