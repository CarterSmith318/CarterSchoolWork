#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    bool playAgain = true;

    while (playAgain)
    {
        srand(time(NULL));

        int ranNum = rand() % 10 + 1;
        std::cout << "Guess the Number Game" << std::endl;
        int guess = 0;
        int attempts = 0;
        int maxAttempts;

        std::cout << "Enter the number of attempts you want: ";
        std::cin >> maxAttempts;

        while (guess != ranNum && attempts < maxAttempts)
        {
            std::cout << "Enter your guess (between 1 and 10): ";
            std::cin >> guess;

            if (guess < 1 || guess > 10)
            {
                std::cout << "Please enter a valid guess between 1 and 10." << std::endl;
            }
            else if (guess < ranNum)
            {
                std::cout << "Too low! Try again." << std::endl;
            }
            else if (guess > ranNum)
            {
                std::cout << "Too high!" << std::endl;
            }
            else
            {
                std::cout << "Congratulations! You guessed the number." << std::endl;
            }

            attempts++;
        }

        if (attempts >= maxAttempts && guess != ranNum)
        {
            std::cout << "Sorry, you've used all your attempts. The correct number was: " << ranNum << std::endl;
        }

        std::cout << "Do you want to play again? (1 for yes, 0 for no): ";
        std::cin >> playAgain;
    }

    std::cout << "Thanks for playing! Goodbye!" << std::endl;

    return 0;
}
