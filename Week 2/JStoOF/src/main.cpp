#include "ofMain.h"
#include "ofApp.h"

ofApp header;

//========================================================================
int main( ){
    
	ofSetupOpenGL(800, 800, OF_WINDOW);
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
