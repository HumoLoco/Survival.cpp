#include <iostream>
#include "Survive.h"
using namespace std;

int main()
{
    int health = 100;
    int tired = 50;
    int hunger = 15;
    int money = 20;
    int food = 1;
    int day = 1;
    int choice;
    while (1)
    {
    cout << endl << endl;
    cout << "-----------------------------" << endl;
    cout << "Day: " << day << endl;
    cout << "Health: " << health << " Tired: " << tired << endl;
    cout << "Hunger: " << hunger << " Food: " << food << endl;
    cout << "Money: $" << money << endl << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Work" << endl;
    cout << "2. Buy the food" << endl;
    cout << "3. Eat the food" << endl;
    cout << "4. Get sleep" << endl;
    cout << "5. Surrender" << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nYou went to working." << endl;
        health = health - 50;
        hunger = hunger + 10;
        tired = tired - 25;
        money = money + 5;
        day = day + 1;
    }
    if (choice == 2)
    {
        cout << "You bought the food." << endl;
        money = money - 15;
        health = health - 10;
        hunger = hunger + 5;
        food = food + 2;
        tired = tired - 10;
        day = day + 1;
    }
    if (choice == 3)
    {
        cout << "You ate the food." << endl;
        food = food - 1;
        health = health + 25;
        hunger = hunger - 15;
        tired = tired + 5;
        day = day + 1;
    }
    else if (money < 0)
    {
        cout << "You don't have enough money. Please go work." << endl;
        food = food - 2;
        money = money + 15;
        day = day - 1;
    }
    if (choice == 4)
    {
        cout << "You get some rest." << endl;
        health = health - 30;
        hunger = hunger - 10;
        tired = tired + 25;
        day = day + 1;
    }
    if (choice == 5)
    {
        cout << "\nYou die. Game over." << endl;
        health = health - health;
        tired = tired - tired;
        return 0;
    }
    else if ((health) < 0)
    {
        cout << "You overwork. You die. Game over." << endl;
        return 0;
    }
    else if ((hunger) > 50)
    {
        cout << "You are too hungry. You die. Game over." << endl;
        return 0;
    }
    else if ((food) < 0)
    {
        cout << "You don't have enough money for the food. Please go work to get some money." << endl;
        food = food + 1;
        health = health - 25;
        hunger = hunger + 15;
        day = day - 1;
        tired = tired - 5;

    }
    else if ((tired) < 0)
    {
        cout << "You lacked of the sleep. You die." << endl;
        return 0;
    }
    else if ((day) == 10)
    {
        cout << "You received the gift from your mother!" << endl;
        cout << "You have restored your health." << endl;
        cout << "You received the food." << endl;
        cout << "You have received $15." << endl;
        health = health + 80;
        hunger = hunger + 30;
        tired = tired + 15;
        money = money + 15;
        food = food + 1;
    }
    else if ((day) == 20)
    {
        cout << "You received the gift from your friend!" << endl;
        cout << "You have restored your health." << endl;
        cout << "You received the food." << endl;
        cout << "You have received $20." << endl;
        health = health + 80;
        hunger = hunger + 20;
        tired = tired + 10;
        money = money + 20;
        food = food + 1;
    }
    else if ((day) == 30)
    {
        cout << "You received the gift from your father!" << endl;
        cout << "You have restored your health." << endl;
        cout << "You received the food." << endl;
        cout << "You have received $25." << endl;
        health = health + 70;
        hunger = hunger + 20;
        tired = tired + 15;
        money = money + 25;
        food = food + 1;
    }
    else if ((day) == 45)
    {
        cout << "You received the gift from your co-worker!" << endl;
        cout << "You have restored your health." << endl;
        cout << "You received the food." << endl;
        cout << "You have received $30." << endl;
        health = health + 75;
        hunger = hunger + 15;
        tired = tired + 10;
        money = money + 30;
        food = food + 2;
    }
    else if ((day) == 60)
    {
        cout << "Your boss called you for congratulation you the month of worker" << endl;
        cout << "You have restored your health." << endl;
        cout << "You received the food." << endl;
        cout << "You have received $35." << endl;
        health = health + 80;
        hunger = hunger + 25;
        tired = tired + 20;
        money = money + 35;
        food = food + 2;
    }
    else if ((day) == 70)
    {
        cout << "Your boss fired you for no reason." << endl;
        cout << "You have fail restored your health." << endl;
        cout << "You lacked out of the food." << endl;
        cout << "You have loaned $25 from your co-worker." << endl;
        health = health + 10;
        hunger = hunger + -115;
        tired = tired + 10;
        money = money + 25;
        food = food + 0;
    }

    else if ((day) == 100)
    {
        cout << "You have survived 100 days. You win this game congratulation!" << endl;
        return 0;
    }

    }



    return 0;
}
