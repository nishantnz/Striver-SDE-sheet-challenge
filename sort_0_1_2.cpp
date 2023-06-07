#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt1++;
        }
        else if (arr[i] == 1)
        {
            cnt2++;
        }
        else
        {
            cnt3++;
        }
    }
    for (i = 0; i < cnt1; i++)
    {
        arr[i] = 0;
    }
    for (i = cnt1; i < cnt1 + cnt2; i++)
    {
        arr[i] = 1;
    }
    for (i = cnt1 + cnt2; i < n; i++)
    {
        arr[i] = 2;
    }
}
