#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solution()
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

    for (int i = 1; i <= (n - 1); i++)
    {
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    solution();
    return 0;
}
