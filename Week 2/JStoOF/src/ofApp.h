#pragma once

#ifndef ofApp_hpp // if (the header file is) not defined (in the file or in an included file)
#define ofApp_hpp // define (the header file)

#include "ofMain.h"

class ofApp : public ofBaseApp
{
	public:
		void setup();
		void draw();
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void keyPressed(int key);
        bool pressed = false;
        bool fill = true;
        glm::vec2 center;
        glm::vec2 toCenter;
};

#endif // end the conditional
