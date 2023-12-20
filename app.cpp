// include our libraries  

#include <iostream>
#include <cstdlib>
#include <ctime>

// Define Our variables 

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
  //  random number library  

  srand((unsigned int) time(NULL));
  
  //  play keeps game ended 
  // is true the game ended ,
  // in this case the game is played again

  int player_score = 0;
  int computer_score = 0;
  bool play = false;


  do
  {
    // The User Score
    cout << "Select your throw." << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Selection: ";
    cin >> player_score ;
    
    // Output an endl (newline) to separate the user input from the game output
    cout << endl;
    
   // Random number between [ 1 , 2 , 3 ] that the computer use 
    computer_score  = (rand() % 3) + 1;
    
    // Output the computer_score  so the player knows what it is
    if (computer_score  == ROCK)
    {
      cout << "computer_score is ROCK." << endl;
    }
    else if (computer_score  == PAPER)
    {
      cout << "computer_score is PAPER." << endl;
    }
    else if (computer_score == SCISSORS)
    {
      cout << "computer_score SCISSORS." << endl;
    }
    
    // We'll set play to false 
    play = false;


    // Our Game Conditions 
    
    if (player_score == computer_score )
    {
      play = true;
      cout << "sorry! Play again" << endl;
    }
    else if (player_score == ROCK && computer_score  == SCISSORS)
    {
      cout << "ROCK beats SCISSORS! YOU WIN. {^_^} " << endl;
    }
    else if (player_score == ROCK && computer_score  == PAPER)
    {
      cout << "PAPER beats ROCK! YOU LOSE. {-_-}" << endl;
    }
    else if (player_score  == PAPER && computer_score == ROCK)
    {
      cout << "PAPER beats ROCK! YOU WIN. {^_^} " << endl;
    }
    else if (player_score  == PAPER && computer_score  == SCISSORS)
    {
      cout << "SCISSORS beats PAPER! YOU LOSE. {-_-}" << endl;
    }
    else if (player_score == SCISSORS && computer_score  == PAPER)
    {
      cout << "SCISSORS beats PAPER! YOU WIN. {^_^}" << endl;
    }
    else if (player_score  == SCISSORS && computer_score == ROCK)
    {
      cout << "ROCK beats SCISSORS! YOU LOSE. {-_-} " << endl;
    }
    
    // Output an endl (newline) to separate the game output from the user 
    cout << endl;

  // if play is true this means the game ended , we will played again, 
  // if play is false  that means the game ended , and the loop stop and we wont play again .

  } while (play);

  return 0;
}