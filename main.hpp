#include <iostream>
#include <climits>
using namespace std;

void getTwoValues(int &, int &);
int  isPrime(int);
int  getNextPrime(int);
int  getPrevPrime(int);

void getTwoValues(int &val1, int &val2)
{
    do {
        cout << "Enter two values (begin < end): ";
        cin >> val1 >> val2;
    } while (val1 >= val2);
}

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int getNextPrime(int begin)
{
    int p = begin + 1;

    while (isPrime(p) == 0) {
        p++;
    }

    return p;
}

int getPrevPrime(int end)
{
    int p = end - 1;

    while (p >= 2) {
        if (isPrime(p) == 1)
            return p;
        p--;
    }

    return INT_MIN;
}
