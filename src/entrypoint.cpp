#include "entrypoint.h"
#include <stdio.h>
#include <vector>
class GameObject{
   public:
   float x,y,w,h;
   GameObject();
};

class Breakout : protected GameObject{
    public:
    Breakout(float x, float y);

};
class Game : protected GameObject{
    public:
    Game(float x, float y);
    bool GameOver = false;
};
void Update(void){
    float* GameObject_x, GameObject_y;
    float GameObject_w, GameObject_h;
    GameObject* game_object = new GameObject();
}
void Draw(void){

}
void raylib_start(void){
    float bx, by;
    Game* game = new Game(bx, by);
    while(!game->GameOver){
    }
}