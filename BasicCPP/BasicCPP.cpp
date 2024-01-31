#include <iostream>

using namespace std;

void EarnMoney(int* wallet, int wage) {
    *wallet += wage;
    *wallet -= wage / 4;
}

int main()
{
    string answer;
    int money = 1000;
    int* bankAccount = &money;
    cout << "Hello World!\n";
    cin >> answer;
    cout << "Hello " << answer << " you are stored in " << &answer <<"\n";
    cout << "You can find my money at this adress : " << bankAccount << "\n";

    EarnMoney(bankAccount, 100000);

    cout << "" << money;
}

