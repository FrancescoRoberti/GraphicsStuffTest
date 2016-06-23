#ifndef MAINGAME_H
#define MAINGAME_H

#include <SDL/SDL.h>
#include <GL/glew.h>

class MainGame
{
    public:
        MainGame();
        virtual ~MainGame();

        void run();

        void initSystems();

    private:
        SDL_Window* _window;
        int _screenWidth;
        int _screenHeight;
};

#endif // MAINGAME_H
