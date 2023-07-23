#include <bits/stdc++.h>

void sol() {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int res = 1;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x1 < x2 && x1 < x3) {
        res += (std::min(x2, x3) - x1);
    }
    if (x1 > x2 && x1 > x3) {
        res += (x1 - std::max(x2, x3));
    }
    if (y1 < y2 && y1 < y3) {
        res += (std::min(y2,y3) - y1);
    }
    if (y1 > y2 && y1 > y3) {
        res += (y1 - std::max(y2, y3));
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