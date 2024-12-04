#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("data.txt");
    string content;
    getline(in, content);
    cout<< content<< endl;
    return 0;
}