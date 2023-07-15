#include "gameCore.hh"
#include <ncurses.h>

// Path: src/graphicsEngine/engineMain.hh

class mapObjects {
    private:
        
    public:
        mapObjects();
        ~mapObjects();
        void drawMap();
        void drawPlayer();
        void drawEnemies();
        void drawItems();
        void drawNPCs();
        void drawAll();
        void drawUI();
};