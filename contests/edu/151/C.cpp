#include <bits/stdc++.h>

std::string cur = "";
std::string target = "";
bool res = false;
bool valid(std::vector<std::vector<int>> &counts)
{
    int index = -1;
    // std::cout << cur << std::endl<<target << std::endl;
    for (int i = 0; i < cur.size(); i++)
    {
        int tmp = cur[i] - '0';
        auto pos = std::lower_bound(counts[tmp].begin(), counts[tmp].end(), index);
        if (pos == counts[tmp].end()) {
            return true;
        }
        index = *pos;
        std::cout << index;
    }
    return false;
}

void dfs(int index, std::string &l, std::string &r, std::vector<std::vector<int>> &counts)
{
    if (index == l.size())
    {
        if (valid(counts))
        {
            res = true;
            return;
        }
    }
    for (char i = l[index]; i <= r[index]; i++)
    {
        cur.push_back(i);
        dfs(index + 1, l, r, counts);
        cur.pop_back();
    }
}

void sol()
{
    res = false;
    std::cin >> target;
    int n;
    std::vector<std::vector<int>> counts(10);
    for (int i = 0; i < target.size(); i++)
    {
        counts[target[i] - '0'].push_back(i);
    }
    std::cin >> n;
    std::string l, r;
    std::cin >> l >> r;
    dfs(0, l, r, counts);
    if (res)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
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