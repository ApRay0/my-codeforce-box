#include <bits/stdc++.h>



int main()
{
    std::vector<int> v = {1,2,5,4,3};
    std::sort(v.begin(), v.end());
    for (auto t : v) {
        std::cout << t;
    }
    return 0;
}