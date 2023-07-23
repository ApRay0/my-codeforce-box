#include <bits/stdc++.h>

void sol()
{
    int n, k, x;
    std::cin >> n >> k >> x;
    if (x != 1)
    {
        std::cout << "YES\n";
        std::cout << n << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << "1 ";
        }
        std::cout << std::endl;
        return;
    }
    if (k == 1)
    {
        std::cout << "NO\n";
        return;
    }
    if (k == 2)
    {
        if (n % 2 == 0) {
            std::cout << "YES\n";
            std::cout << n / 2 << std::endl;
            for (int i = 0; i < n / 2; i++) {
                std::cout << "2 ";
            }
            std::cout << std::endl;
            return;
        } else {
        std::cout << "NO\n";
        return;
        }
    }

    if (n % 2 == 0)
    {
    }
    else
    {
        n -= 3;
        std::cout << n / 2 + 1 << std::endl;
        std::cout << "3 ";
    }
    while (n)
    {
        n -= 2;
        std::cout << "2 ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    while (n--)
    {
        sol();
    }
    return 0;
}