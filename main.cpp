// https://www.acmicpc.net/problem/1074
// NUMBER 1074, Z

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#define endl "\n"
using namespace std;

const int dx[] = {0, 1, 0, 1};
const int dy[] = {0, 0, 1, 1};
int cnt = 0, r, c;

void solve(int unit, int fx, int fy) {
    if (unit == 1) {
        for (int i = 0; i < 4; i++) {
            int cx = fx + dx[i];
            int cy = fy + dy[i];

            if (cx == c && cy == r) {
                cout << cnt << endl;
                return;
            }

            cnt++;
        }
    } else {
        for (int i = 0; i < 4; i++) {
            int cx = fx + dx[i] * unit;
            int cy = fy + dy[i] * unit;
            solve(unit / 2, cx, cy);
        }
    }
}

int main() {
    int n;
    cin >> n >> r >> c;
    solve(pow(2, n) / 2, 0, 0);
    return 0;
}