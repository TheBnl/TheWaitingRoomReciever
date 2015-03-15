#ifndef _OF_PLAYER
#define _OF_PLAYER

#include "ofMain.h"

class ofPlayer {
    
public:
    
    ofPlayer(string name);
    void update(float _roomWidth);
    void draw();
    
    
private:
    string name;
    float playerRadius;
    float x;
    float y;
    float z;
    
};

#endif
