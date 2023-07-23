#include <bits/stdc++.h>

void sol() {
    int n, k;
    std::cin >> n >> k;
    k--;
    std::vector<int> v(n);
    std::vector<int> dif(n);
    int res = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < n - 1;i++) {
        dif[i] = std::abs(v[i + 1] - v[i]);
        res += dif[i];
    }

    std::sort(dif.begin(), dif.end());
    for (int i = 0; i < k; i++) {
        res -= dif[n - 1 - i];
        // std::cout << res;
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