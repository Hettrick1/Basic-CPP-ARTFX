#include <iostream>
#include "Pokemon.h"

using namespace std;

void EarnMoneyByPointer(int* wallet, int wage) {
    *wallet += wage;
    *wallet -= wage / 4;
}
void EarnMoneyByRef(int& wallet, int wage) {
    wallet += wage;
    wallet -= wage / 4;
}

int main()
{
    int money = 1000;
    int* bankAccount = &money;
    EarnMoneyByRef(money, 100000);
    cout << "" << money;

    Pokemon defaultPokemon = Pokemon();
    cout << "\n" << defaultPokemon.GetName() << defaultPokemon.GetDescription() << defaultPokemon.getPvs();

}


