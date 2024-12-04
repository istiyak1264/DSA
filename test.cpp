#include <bits/stdc++.h>
using namespace std;

void Clear()
{
#ifdef _WIN32
    system("ClS");
#endif
}

void Insert()
{
    ofstream file("data.txt", ios::app);
    string input;
    cout << "Enter text to insert: ";
    cin.ignore();
    getline(cin, input);
    file << input << endl;
    file.close();
}

void Delete()
{
    ifstream file("data.txt");
    vector<string> lines;
    string line;
    cout << "File contents:" << endl;
    int index = 1;
    while (getline(file, line))
    {
        cout << index << ". " << line << endl;
        lines.push_back(line);
        index++;
    }
    file.close();

    if (lines.empty())
    {
        cout << "File is empty, nothing to delete." << endl;
        return;
    }

    int deleteIndex;
    cout << "Enter the line number to delete: ";
    cin >> deleteIndex;

    if (deleteIndex < 1 || deleteIndex > lines.size())
    {
        cout << "Invalid line number." << endl;
        return;
    }

    ofstream outFile("data.txt");
    for (int i = 0; i < lines.size(); i++)
    {
        if (i + 1 != deleteIndex)
        {
            outFile << lines[i] << endl;
        }
    }
    outFile.close();
    cout << "Line " << deleteIndex << " deleted successfully." << endl;
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
        if (num == 2)
            Delete();
        if (num == 3)
            Exit();
    }
    return 0;
}
