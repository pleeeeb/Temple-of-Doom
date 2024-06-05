// Game.h

#ifndef GAME_INCLUDED
#define GAME_INCLUDED

#include <vector>
using namespace std;
// You may add data members and other member functions to this class.

class Game
{
public:
    Game(int goblinSmellDistance);
    void play();
    
private:
};

class Temple
{
private:
    const int MAP_WIDTH = 70;
    const int MAP_HEIGHT = 18;
    const int MIN_HEIGHT = 3;
    const int MIN_WIDTH = 3;
    const int MAX_HEIGHT = 10;
    const int MAX_WIDTH = 10;
    const int MAX_ROOMS = 6;
    
    int numOfRooms;
    
    vector<vector<char>> map;
    
public:
    
    Temple(vector<vector<char>> map);
    
    void initializaLevel();
    
    void createRooms();
    
    void displayLevel();
    
    void determineRoomHeight(int roomStartingY);
    
    
    
};


class Actor: Game
{
    
private:
    int healthPoints;
    
};

class Player: Actor
{
    
};

class Items: Game
{
    
};

class Weapons: Items
{
    
};

class Scrolls: Items
{
    
};

#endif // GAME_INCLUDED
