// https://www.acmicpc.net/problem/12865
//
// NUMBER

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input;
    cin >> n;
    while (true)
    {
        cin >> input;
        if (!input)
            break;

        if (input % n == 0)
            cout << input << " is a multiple of " << n << ".\n";
        else
            cout << input << " is NOT a multiple of " << n << ".\n";
    }
    return 0;
}