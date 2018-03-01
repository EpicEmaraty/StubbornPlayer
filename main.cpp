#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int times;
  int wins = 0;
cout<<"How many times do you want to play the game?"<<endl;    
  cin>> times;
  
  for ( int i = 0 ; i<times ; i++ )
  {
  game.newGame();

  game.guessDoorC();
  game.guessDoorC();

  if ( game.isWinner() == 1) { wins++;}
  }
  cout<<"You have won "<<wins<<" times!"<<endl;
  return 0;
}
