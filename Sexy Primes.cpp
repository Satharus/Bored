#include <iostream>
#include <algorithm>
#include <iomanip>
#define lngl long long
using namespace std;

//--------------------------------------------------
bool isPrime(lngl x);
//--------------------------------------------------

int main()
{
    lngl start, end, cnt(0);

    cout << "Please enter the starting number: ";
    cin  >> start;

    cout << "Please enter the ending number: ";
    cin  >> end;

    if (start>end){swap(start,end);}

    for (lngl j=start; j<=end; j++)
        if (isPrime(j) && isPrime(j + 6) && (j+6)<=end)
            cnt++;

    if (cnt==0)
    {
        cout<<"There are no sexy primes in this range!"<<endl;
        goto retry;
    }
    else
    {
        cnt=0;
        cout << "The following are the sexy prime pairs between " <<
             start << " and " << end << ':' << endl;

        for (lngl j = start; j <= end; j++)
        {
            if (isPrime(j) && isPrime(j + 6) && (j + 6) <= end)
            {
                cnt++;
                cout << "Pair #" << cnt <<
                     setw(10) << " (" << j << ',' <<
                     j + 6 << ')' << endl;
            }
        }
    }
    char choice;
    retry:
    cout << endl << "Would you like to enter another range?(y/n)";
    cin >> choice;
    if (choice == 'Y' || choice == 'y'){return main();}
    else if (choice =='N' || choice == 'n'){return 0;}
    else
    {
        cout << "Invalid input!";
        goto retry;
    }
}

//--------------------------------------------------
bool isPrime(lngl x)
{
    if (x==1||x==0){return false;}

    else if (x>2)
    {
        for (lngl i=2; i<x; i++)
        {
            if (x%i==0){return false;}
        }
    }

    return true;
}
//--------------------------------------------------
