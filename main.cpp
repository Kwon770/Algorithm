// https://www.acmicpc.net/problem/1012
// DFS-BFS (4), 유기농 배추
// NUMBER 1012

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

int graph[50][50], visited[50][50], m, n, k;

void dfs(int x, int y) {
    visited[x][y] = 1;
    for (int i = 0; i < 5; i++) {
        int cx = x + dx[i];
        int cy = y + dy[i];
        if (cx >= 0 && cx < m && cy >= 0 && cy < n && graph[cx][cy] && !visited[cx][cy]) {
            dfs(cx, cy);
        }
    }
}

int solve() {
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int o = 0; o < n; o++) {
            if (graph[i][o] && !visited[i][o]) {
                dfs(i, o);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));
        cin >> m >> n >> k;
        for (int o = 0; o < k; o++) {
            int tx, ty;
            cin >> tx >> ty;
            graph[tx][ty] = 1;
        }

        cout << solve() << endl;
    }
    return 0;
}