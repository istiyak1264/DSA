#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Student
{
public:
    string name;
    ll marks;
    Student(string n, ll m) : name(n), marks(m) {}
};

bool compare(const Student &a, const Student &b)
{
    return a.marks > b.marks;
}

int main()
{
    map<string, ll> studentMap;
    string name;
    ll marks;

    while (true)
    {
        cout << "Enter student name (or type 'exit' to stop): ";
        getline(cin, name);
        if (name == "exit")
            break;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // Clear the newline character from the buffer
        studentMap[name] = marks;
    }

    vector<Student> students;
    for (auto &entry : studentMap)
    {
        students.push_back(Student(entry.first, entry.second));
    }

    sort(students.begin(), students.end(), compare);
    
    int i = 1;
    for (auto &student : students)
    {
        cout << i++ << ". Name: " << student.name << ", Marks: " << student.marks << endl;
    }

    return 0;
}
