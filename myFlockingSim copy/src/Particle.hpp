//
//  Particle.hpp
//  myFlockingSim
//
//  Created by Danielle Beecham on 11/15/17.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle {
    
public:
    void reset();
    void update();
    void draw();
    
    void toggleMode();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint force;
    float drag;
    
    bool isAttracting = true;
};

#endif /* Particle_hpp */
