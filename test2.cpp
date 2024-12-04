#include <bits/stdc++.h>
using namespace std;

void Clear()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void Insert()
{
    ofstream file("data.txt");
    string input;
    cout << "Enter the text to insert: ";
    cin.ignore();
    getline(cin, input);
    file << input << endl;
    file.close();
}
void Delete()
{
    ifstream file("data.txt");
    vector<string>lines;
}
void Exit()
{
    exit(0);
}

int main()
{
    while (true)
    {
        Clear();
        int num;
        cout << "1.Insert" << endl;
        cout << "2.Delete" << endl;
        cout << "3.Exit" << endl;
        cout << "Choose an option: ";
        cin >> num;
        if (num == 1)
            Insert();
        else if (num == 2)
            Delete();
        else if (num == 3)
            Exit();
        else
            cout << "Invalid Option!" << endl;
    }

    return 0;
}