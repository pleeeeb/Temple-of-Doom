// Game.cpp

#include "Game.h"
#include "utilities.h"
#include <iostream>
using namespace std;

// Implement these and other Game member functions you may have added.

Game::Game(int goblinSmellDistance)
{}

void Game::play()
{
    vector<vector<char>> Level(18, vector<char>(70));
    Temple t(Level);
    
    cout << "The game hasn't been implemented yet." << endl;
    t.initializaLevel();
    t.createRooms();
    t.displayLevel();
    cout << "Press q to exit game." << endl;
    while (getCharacter() != 'q')
        ;
}

Temple::Temple(vector<vector<char>> map) {
    this->map = map;
}

void Temple::initializaLevel()
{
    for(int i = 0; i < MAP_HEIGHT; i++)
    {
        for (int j = 0; j < MAP_WIDTH; j++)
        {
            map[i][j] = '#';
        }
    }
}

void Temple::createRooms()
{
    int roomWidth, roomHeight, roomStartX, roomStartY;
    
    
    for (int i = 0; i < MAX_ROOMS; i++) {
        roomWidth = randInt(MIN_WIDTH, MAX_WIDTH);
        roomHeight = randInt(MIN_HEIGHT, MAX_HEIGHT);
        roomStartX = randInt(roomWidth);
        roomStartY = randInt(roomHeight);
        
    }
    
    
    for (int i = 0; i < numOfRooms; i++)
    {
        for (int j = randInt(2, 15); j < randInt(5, 15); j++)
        {
            map[i][j] = ' ';
        }
    }
    
    for (int i = 4; i < 16; i++)
    {
        map[i][5] = ' ';
    }
    
}

void Temple::displayLevel()
{
    for(int i = 0; i < MAP_HEIGHT; i++)
    {
        for (int j = 0; j < MAP_WIDTH; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }

}

void Temple::determineRoomHeight(int roomStartingY) {
    
    int roomHeight;
    
    
    
}

// You will presumably add to this project other .h/.cpp files for the various
// classes of objects you need to play the game:  player, monsters, weapons, 
// etc.  You might have a separate .h/.cpp pair for each class (e.g., Player.h,
// Bogeyman.h, etc.), or you might put the class declarations for all actors in
// Actor.h, all game objects in GameObject.h, etc.
