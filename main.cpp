// https://www.acmicpc.net/problem/1697
// DFS-BFS (8), 숨바꼭질
// NUMBER 1697

// DFS BFS, https://www.notion.so/sckwon770/DFS-BFS-6ec22005435048b18669df0f2541538c

#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#define endl "\n"
using namespace std;
#define MAX 100000

int main() {
    int visited[MAX + 1];
    memset(visited, 0, sizeof(visited));
    queue<int> Queue;
    int n, k, seg = 1, ans = 0;

    cin >> n >> k;
    Queue.push(n);

    while (!Queue.empty()) {
        int cnt = 0;
        for (int i = 0; i < seg; i++) {
            int cur = Queue.front();
            Queue.pop();

            if (cur == k) {
                cout << ans << endl;
                return 0;
            }
            visited[cur] = 1;

            if (cur + 1 <= MAX && !visited[cur + 1]) {
                Queue.push(cur + 1);
                cnt++;
            }
            if (cur - 1 >= 0 && !visited[cur - 1]) {
                Queue.push(cur - 1);
                cnt++;
            }
            if (cur * 2 <= MAX && !visited[cur * 2]) {
                Queue.push(cur * 2);
                cnt++;
            }
        }
        seg = cnt;
        ans++;
    }
    cout << ans << endl;
    return 0;
}