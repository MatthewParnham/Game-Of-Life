#include <iostream>
#include <string>


using namespace std;

class Game
{
  private:
    //instance variables
    GameMode *mode; //maybe pointer?
    Grid grid; //maybe pointer?

  public:
    //Constructors
    Game();
    //Destructor
    ~Game();

    //Mutator Functions
    void promptGameMode();
    void promptCells();
    void promptOutput();
    string promptFileName();

    void printGen();
    void printGridEnter();
    void gameLoop();

}
