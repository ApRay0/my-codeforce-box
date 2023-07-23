#include <bits/stdc++.h>

struct Score
{
    /* data */
    int points;
    int penalty;
    int index;
};

bool cmp(Score &s1, Score &s2)
{
    if (s1.points == s2.points && s1.penalty == s2.penalty)
    {
        return s1.index < s2.index;
    }
    if (s1.points == s2.points)
    {
        return s1.penalty < s2.penalty;
    }
    return s1.points > s2.points;
}


void sol()
{
    int n, m, h;
    std::cin >> n >> m >> h;
    std::vector<int> v(m);
    std::vector<Score> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> v[j];
        }
        std::sort(v.begin(), v.end());
        
        int cur_h = 0;
        int cur_point = 0;
        int cur_penalty = 0;
        for (int j = 0; j < m; j++)
        {
            // std::cout << v[j];
            cur_h += v[j];
            if (cur_h > h)
            {
                break;
            }
            cur_point++;
            cur_penalty += cur_h;
        }
        // std::cout << std::endl;
        Score s;
        s.index = i;
        // std::cout << cur_point << " " << cur_penalty << std::endl;
        s.points = cur_point;
        s.penalty = cur_penalty;
        res.push_back(s);
    }

    std::sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        // std::cout << res[i].points << " "<< res[i].penalty << std::endl;
        if (res[i].index == 0)
        {
            std::cout << i + 1 << std::endl;
            return;
        }
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
