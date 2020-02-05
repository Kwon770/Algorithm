#include<iostream>
#include<vector>
using namespace std;

#define endl "\n"

int n, m;
vector<int> v;

void PrintAll() {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void loop(int cnt, int idx) {
    if (cnt == m) {
        PrintAll();
        return;
    }

    for (int i = idx; i <= n; i++) {
        v.push_back(i);
        loop(cnt + 1, i + 1);
        v.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    loop(0, 1);
    return 0;
}