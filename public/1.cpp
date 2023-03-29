#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> size;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> size[i];
        for (int k = 0; k < size[i]; k++)
        {
            int in;
            cin >> in;
            v.push_back(in);
        }
    }
    
}