// https://www.acmicpc.net/problem/1874
// Stack(5), 스택 수열
// NUMBER 1874

#include <iostream>
#include <stack>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string cmd = "";
    stack<int> stack;
    int input[100000];
    int n, o = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> input[i];

    for (int i = 1; i <= n; i++)
    {
        stack.push(i);
        cmd += "+\n";
        while (!stack.empty() && stack.top() == input[o])
        {
            stack.pop();
            cmd += "-\n";
            o++;
        }
    }
    if (stack.empty())
        cout << cmd << endl;
    else
        cout << "NO" << endl;
    return 0;
}