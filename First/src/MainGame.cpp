#include "MainGame.h"

MainGame::MainGame()
{
    _window = nullptr;
    _screenWidth = 480;
    _screenHeight = 480;
}

MainGame::~MainGame()
{
    //dtor
}

void MainGame::run()
{
    initSystems();
}

void MainGame::initSystems()
{
    //Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);
    _window = SDL_CreateWindow("Schermo giochetto", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}
