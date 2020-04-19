
// https://www.acmicpc.net/problem/1920
// Binaray Search(1), 수 찾기
// NUMBER 1920

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input.begin(), input.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        int target, left = 0, right = n - 1;
        bool found = false;
        cin >> target;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (input[mid] < target)
                left = mid + 1;
            else if (input[mid] > target)
                right = mid - 1;
            else {
                found = true;
                break;
            }
        }

        if (found)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}