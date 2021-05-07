#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL << 60;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<long long> h(N);
    for (int i = 0; i < N; ++i) cin >> h[i];
    
    // 配列 dp を定義
    vector<long long> dp(N, INF);
    
    // 初期条件
    dp[0] = 0;
    
    // ループ
    for (int i = 1; i < N; ++i) {
        if (i == 1) dp[i] = abs(abs[i] - abs[i - 1]);
        else dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]),
                        dp[i -2] + abs(h[i] - h[i - 2]))
    }
    
    // 答え
    cout << dp[N - 1] << endl;
}
