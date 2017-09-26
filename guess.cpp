//Author: Ricardo Flores
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int randomNumber;
    randomNumber=rand()%10+1;
    int guess;
    cout << "Guess the computer's number:" << endl;
    cin >> guess;
    if(randomNumber == guess)
    {
    cout << "You guessed correctly! You Win!" << endl;
    }
    else if(randomNumber > guess)
    {
    cout << "You were off by " << (randomNumber - guess) << ". Sorry, you lose." << endl;
    }
    else
    {
    cout << "You were off by " << (guess - randomNumber) << ". Sorry, you lose." << endl;
    }
    return 0;
}
