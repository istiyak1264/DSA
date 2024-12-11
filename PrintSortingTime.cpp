#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void BubbleSort(vector<int> arr)
{
    auto start = chrono::high_resolution_clock::now();

    int n = arr.size();
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nTime: " << duration.count() << " microseconds\n";
}

void SelectionSort(vector<int> arr)
{
    auto start = chrono::high_resolution_clock::now();

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

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nTime: " << duration.count() << " microseconds\n";
}

void InsertionSort(vector<int> arr)
{
    auto start = chrono::high_resolution_clock::now();

    int n = arr.size();
    for (int i = 1; i <= (n - 1); i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nTime: " << duration.count() << " microseconds\n";
}

int main()
{
    vector<int> arr;
    string input;

    cout << "Enter integers to sort (type 'exit' to stop):\n";
    while (true)
    {
        cin >> input;
        if (input == "exit") break;
        arr.push_back(stoi(input));
    }

    cout << "\n";
    BubbleSort(arr);
    cout << "\n";
    SelectionSort(arr);
    cout << "\n";
    InsertionSort(arr);

    return 0;
}
