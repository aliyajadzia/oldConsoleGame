#include "engineMain.hh"

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
        void drawUI() {
            WINDOW *uiWindow = newwin(30, 24, 0, 0);
        };
};