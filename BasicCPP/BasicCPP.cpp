#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
    string answer;
    cin >> answer;
    cout << "Hello " << answer << " you are stored in " << &answer <<"\n";
}

