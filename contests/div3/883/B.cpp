#include <bits/stdc++.h>

void sol() {
    std::vector<char> v(9);
    for (int i = 0; i < 9; i++) {
        std::cin >> v[i];
    }
    for (int i = 0; i < 3; i++) {
        if (v[i] == v[i + 3] && v[i + 3] == v[i + 6] && v[i] != '.') {
            std::cout << v[i] << std::endl;
            return;
        }
        int t = i * 3;
        if (v[t] == v[t + 1] && v[t + 1] == v[t + 2] && v[t] != '.') {
            std::cout << v[t] << std::endl;
            return;
        }
    }
    if (v[0] == v[4] && v[4] == v[8] && v[4] != '.') {
            std::cout << v[4] << std::endl;
            return;
    }
    if (v[2] == v[4] && v[4] == v[6] && v[4] != '.') {
            std::cout << v[4] << std::endl;
            return;
    }
    std::cout << "DRAW\n";
}

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        sol();
    }
    return 0;
}