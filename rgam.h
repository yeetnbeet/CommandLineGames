#include <iostream>
#include <ctime>

void intro()
{
    std::cout << "Welcome to pick a number!\nGuess the Number to win...";
}

bool PlayGame(int numbers)
{
    std::cout << "\nWelcome to level: " << numbers - 1 <<"\nNumber between 0 and " << numbers-1;

    int TheNumber = rand() % numbers;
    std::cout << "\n\nEnter Your Guess\n";

    int ipt;
    std::cin >> ipt;

    if(TheNumber==ipt)
    {
        std::cout << "\n\n\n----------------------\nYou Guessed Right!\n";
        return true;
    }

    else
    {
        std::cout << "\nYou Guessed Wrong Try again!";
        return false;
    }
    
    

}

void GameLoop()
{
    srand(time(NULL));
    int mod = 2;
    const int Levels = 3;

    int incorrect = 0;
    
    intro();

    while(mod-1 <= Levels)
    {
        bool levelPass = PlayGame(mod);
        if(levelPass)
        {
            ++mod;
        }
        else
        {
            ++incorrect;
        }
        
    }
    
    std::cout << "\n Your Stats are: " << Levels << " / " << incorrect + Levels << std::endl;
    std::cout << "\n\nYOU HAVE WON NICE GAME COMPLETE\nEnter anything to continue\n";
    int Exit;
    std::cin >> Exit;    
}

bool Menu()
{
    std::cout << "\n------------------------------------------";
    std::cout << "\nWelcome Enter 1 to play or 0 to Main Menu\n";
    std::cout << "------------------------------------------\n";
    
    int Answer;
    std::cin >> Answer;
    bool flag = true;
    while (flag)
    {
        
        if (Answer==1)
        {
            return true;
        }
        if(Answer==0)
        {
            return false;
        }
        else
        {
            std::cout << "\nNo pick something 1 or 0\n\n";
            std::cin >> Answer;
            
        }
        
    }
    

    
    
}
void rgam()
{
    bool bContinueGame = Menu();
    while(bContinueGame)
    {
        GameLoop();
        bContinueGame = Menu();
    }
    
    return;
}