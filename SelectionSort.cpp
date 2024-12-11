#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Selection_Sort()
{
    vector<int> arr;
    string input;
    
    while (true)
    {
        cin >> input;
        if (input == "exit") break;
        arr.push_back(stoi(input));
    }

    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Selection_Sort();
    return 0;
}
