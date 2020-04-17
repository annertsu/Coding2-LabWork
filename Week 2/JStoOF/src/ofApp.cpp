#include "ofApp.h"

// className giveName (create object instances from class here) - these classes are in the OF preset folder
ofPath path;
ofPoint point;
ofPolyline line;
ofFbo fbo;

#define _USE_MATH_DEFINES
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup()
{
    //just set up the openFrameworks stuff
    ofBackground(230, 230, 255); //background color
}

//--------------------------------------------------------------
void ofApp::draw()
{
    float twoPi = M_PI * 2;
    int segments = mouseX / 40;
    float spacing = twoPi / segments;
    float radius = (cos(mouseY) * 10) + 50;
    
    ofSetColor(mouseX % 255, mouseY % 255, mouseX % 255);
    ofSetLineWidth(3);
    
    if (pressed == false) {
        ofTranslate (mouseX, mouseY);
    } else {
        ofTranslate (400, 400);
    }
    
    for (int i = 0; i < segments; i++)
    {
        float theta = spacing * i;
        float previousTheta = spacing * (i-1);
        ofDrawLine(cos(previousTheta) * radius, sin(previousTheta) * radius, cos(theta) * radius, sin(theta) * radius);
    }
    
    float lastTheta = spacing * segments;
    ofDrawLine(cos(lastTheta) * radius, sin(lastTheta) * radius, cos(twoPi) * radius, sin(twoPi) * radius);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
    pressed = true;
    toCenter = glm::vec2(x,y);
    center = glm::vec2(x,y);
}

void ofApp::mouseReleased(int x, int y, int button)
{
    pressed = false;
}

void ofApp::keyPressed(int key)
{
    pressed = true;
}
