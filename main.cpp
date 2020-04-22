// https://www.acmicpc.net/problem/15829
// Binaray Search(4), 나무 자르기
// NUMBER 15829

#include <cmath>
#include <iostream>
#include <map>
using namespace std;
#define endl '\n'
#define R 31
#define MOD 1234567891

long long getHash(string str) {
    long long hash = 0;
    long long r = 1;
    for (size_t i = 0; i < str.length(); i++) {
        long long value = str[i] - '0' - 96;
        r = i == 0 ? 1 : r * R % MOD;
        hash += value * r % MOD;
    }
    return hash % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l;
    string str;
    cin >> l >> str;
    cout << getHash(str) << endl;
    return 0;
}