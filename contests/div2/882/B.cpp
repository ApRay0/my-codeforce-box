#include <bits/stdc++.h>

void sol() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    int res = 0;
    int sum = 0xffffffff;
    for (int i = 0 ;i < n; i++) {
        std::cin >> v[i];
        sum &= v[i];
        if (sum == 0) {
            res++;
            sum = 0xffffffff;
        }
    }
    if (res == 0) {
        res++;
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