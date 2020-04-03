// https://www.acmicpc.net/problem/2164
// Queue_Deque_(2), 카드 2
// NUMBER 2164

#include <iostream>
#include <deque>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> deque;
    int n, k;
    cin >> n >> k;
    k--;
    int idx = k;
    for (int i = 1; i <= n; i++)
        deque.push_back(i);
    cout << "<";
    while (deque.size() != 1)
    {
        cout << deque[idx] << ", ";
        deque.erase(deque.begin() + idx);
        n--;
        idx += k;
        if (idx >= n)
            idx %= n;
    }
    cout << deque[0] << ">" << endl;
    return 0;
}