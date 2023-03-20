#include <bits/stdc++.h>
using namespace std;

int* getDivisors(int n, int& count)
{
    // đếm xem n có bao nhiêu ước
    count = 0;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            count++;
    int* a = new int[count];
    // copy các ước đó vào mảng a
    for (int i = 1, j = 0; i <= n; ++i)
        if (n % i == 0)
            a[j++] = i;
    return a;
}

int main()
{
    int  count;
    int* a = getDivisors(10, count);
    for (int i = 0; i < count; ++i)
        cout << a[i] << " ";
    delete[] a;
}

