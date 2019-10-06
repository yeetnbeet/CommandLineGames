#include <iostream>
#include <ctime>


void PrintIntro(int Difficulty)
{
    
    //just printing 
    std::cout << "you are stuck in a dark box with a number lock level " << Difficulty ;
    std::cout << "\nyou must enter the correct codes to escape... \n";
}

bool MakeGameGo(int Difficulty)
{
    
    PrintIntro(Difficulty);
    // setting constants
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    //math
    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProd = CodeA*CodeB*CodeC;

    //output to console
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code \n" ;
    std::cout << "+ The three numbers add up to: " << CodeSum ;
    std::cout << "\n+ The product of these numbers is: " << CodeProd << std::endl ;
    std::cout << "the numbers are: " << CodeA << CodeB << CodeC << std::endl;

    //store player Guess
    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;


    //check if player guess is correct
    if(GuessSum==CodeSum && GuessProd==CodeProd)
    {
        std::cout << "You Have unlocked the door! but there is another lock \n" ;
        return true;
    }

    else
    {
        std::cout << "Incorrect Code entered try again! \n" ;
        return false;
    }
}

void tripleX()
{
    srand(time(NULL));
    int LevelDif = 1;
    const int MaxLevel = 5;
    while(LevelDif <= MaxLevel)
    {
        bool bLevelComp = MakeGameGo
    (LevelDif);
        std::cin.clear();
        std::cin.ignore();
        if (bLevelComp)
        {
            ++LevelDif;
        }
    
    }
    
    std::cout << "\nGoodBye You Have Escaped!";
    return;
} 