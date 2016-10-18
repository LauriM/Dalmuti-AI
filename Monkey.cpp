#include "Monkey.h"
#include <iostream>

Monkey::Monkey() : Player()
{
    SetName("Jorma");
}

Monkey::Monkey(std::string name) : Player()
{
    SetName(name);
}

Monkey::~Monkey()
{
}

void Monkey::Prepare()
{
}

Hand Monkey::AskMove(GameState state)
{
    Hand table = state.table;
   Hand myHand;

    if(table.value == CARDS::PASS)
    {
        int highest = GetHighestCard();
        int amount = CountCard(highest);

        myHand.value = highest;
        myHand.amount = amount;
        myHand.jesters = 0;
        return myHand;
    }
    else if(table.value == CARDS::DALMUTI)
    {
        return Hand();
    }
    else
    {
       
        myHand.value = i;
        myHand.amount = CountCard(i);
        myHand.jesters = 0;
        return myHand;

    }

    return Hand();
}

int Monkey::GiveCard()
{
    std::out << "hahaa\n";
    return CARDS::PASS;
}
