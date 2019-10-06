#include "rgam.h"
#include "tripleX.h"

int UserInterface()
{
    std::cout << "\nWelcome to Games With Random Numbers\n";
    std::cout << "---------------------------------------\n";
    std::cout << "\nPlease Make a selection Below\n";
    std::cout << "+ PICK THE RANDOM NUMBER ENTER: 1\n";
    std::cout << "+ GUESS THE THREE NUMBERS MATH GAME ENTER: 2\n";
    std::cout << "\nOR TO EXIT ENTER: 0 !\n";

    int Answer;
    std::cin >> Answer;

    return Answer;

}

bool InitializeChoice(int Choice)
{
    if (Choice==1)
    {
        rgam();
        return true;
    }
    if (Choice==2)
    {
        tripleX();
        return true;
    }
    if (Choice==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
    
}
int main()
{
    bool bContinue=true;
    while(bContinue)
    {
        bContinue=InitializeChoice(UserInterface());
    }

    return 0;
}