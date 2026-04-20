#include <iostream>
#include <climits>
using namespace std;

//****************************
// Function Prototypes
//****************************
void getTwoValues(int &, int &);
int  isPrime(int);
int  getNextPrime(int);
int  getPrevPrime(int);

//****************************
// getTwoValues()
// Ask user for two integers. Re-prompt until val1 < val2.
// No return value.
//****************************
void getTwoValues(int &val1, int &val2)
{
    // TODO
    while (true)
    {
        cout << "Enter two values (begin < end): ";
        cin >> val1 >> val2;
        if (val1 < val2) break;
    }
    // TODO
}

//****************************
// isPrime(n)
// Return 1 if n is a prime number (n >= 2), else 0.
//****************************
int isPrime(int n)
{
    // TODO
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
    // TODO
}

//****************************
// getNextPrime(begin)
// Return the smallest prime strictly greater than begin.
//****************************
int getNextPrime(int begin)
{
    // TODO
    int p = begin + 1;
    while (!isPrime(p)) p++;
    return p;
    // TODO
}

//****************************
// getPrevPrime(end)
// Return the largest prime strictly less than end.
// Return INT_MIN if no such prime exists (end <= 2).
//****************************
int getPrevPrime(int end)
{
    // TODO
    int p = end - 1;
    while (p >= 2 && !isPrime(p)) p--;
    return (p < 2) ? INT_MIN : p;
    // TODO
}
