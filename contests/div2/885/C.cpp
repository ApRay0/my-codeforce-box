#include <bits/stdc++.h>

void sol() {
    int n;
    std::cin >> n;
    std::vector<int> v(n + 1);
    std::vector<int> sum(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> v[i];
        sum[i] = v[i] ^ sum[i - 1];
        // std::cout << sum[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (res < (sum[j] ^ sum[i])) {
                res = sum[j] ^ sum[i];
            }
        }
    }
    std::cout << res << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        sol();
    }
    return 0;
}

