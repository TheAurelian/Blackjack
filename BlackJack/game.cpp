#include <ctime>
#include <iostream>

// Help from programming discord

/* void Deck()
{
    for (int i = 0; i < suites.size(); i++)
    {
        AddCard(suites[i], "Ace", 11);
        AddCard(suites[i], "Two", 2);
        AddCard(suites[i], "Three", 3);
        AddCard(suites[i], "Four", 4);
        AddCard(suites[i], "Five", 5);
        AddCard(suites[i], "Six", 6);
        AddCard(suites[i], "Seven", 7);
        AddCard(suites[i], "Eight", 8);
        AddCard(suites[i], "Nine", 9);
        AddCard(suites[i], "Ten", 10);
        AddCard(suites[i], "Jack", 10);
        AddCard(suites[i], "Queen", 10);
        AddCard(suites[i], "King", 10);
    }
} */


void Hand(int PlayerTotal, int DealerTotal) 
{
    std::cout << "Your total: " << PlayerTotal;
    std::cout << "\nDealer: " << DealerTotal;
}

int Draw() 
{
    // std::srand(std::time(0));
    return std::rand() % 11;
}

void Turn(int PlayerTotal, int pick, bool hitStay) 
{
    if (pick == '1') 
    {
        if ((PlayerTotal += Draw()) >= 21) 
        {
            std::cout << "Your total: " << PlayerTotal;
            hitStay = true;
        }
        return;
    }
    else
    {
        // Stay
    }
}

int main() 
{
    int pick = NULL;
    bool hitStay;

    std::srand(std::time(0));
    int PlayerTotal = Draw() + Draw();  
    int DealerTotal = Draw() + Draw();


    while (true)
    {
        hitStay = false;

        while (!hitStay) 
        {
            Hand(PlayerTotal, DealerTotal);
            std::cout << "\n1. Hit\n";
            std::cout << "2. Stay\n";
            std::cin >> pick;
            Turn(PlayerTotal, pick, hitStay);
        }

        hitStay = false;

        while (DealerTotal <= 21 && hitStay == false) 
        {
            if (DealerTotal >= PlayerTotal)
            {
                hitStay = true;
            }
            else
            {
                DealerTotal += Draw();
            }
        }
    }

    std::cout << "\nThe player has " << PlayerTotal;
    std::cout << "\nThe dealer has " << DealerTotal;

    if(PlayerTotal >= DealerTotal && PlayerTotal < 22)
    {
        std::cout << "\nThe player wins";
    }
    if(PlayerTotal < 22 && DealerTotal > 21)
    {
        std::cout << "\nThe player wins";
    }
    else
    {
        std::cout << "\nThe Dealer wins";
    }
}
