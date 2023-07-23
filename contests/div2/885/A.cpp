#include <bits/stdc++.h>

void sol() {
    int n, m, k;
    std::cin >> n >> m >> k;
    int x, y;
    std::cin >> x >> y;
    int count1 = 0, count2 = 0;
    
    for (int i = 0; i < k; i++) {
        int tmpx, tmpy;
        std::cin >> tmpx >> tmpy;
        if ((tmpx + tmpy) % 2 == 0) {
            count1++;
        } else {
            count2++;
        }
    }
    if ((x + y) % 2 == 0) {
        if (count1 <= 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    } else {
        if (count2 <= 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }


}

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        sol();
    }
    return 0;
}