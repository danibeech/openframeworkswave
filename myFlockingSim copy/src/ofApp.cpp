#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int numParticles = 50000;
    
    for (int i=0; i < numParticles; i++){
        Particle newParticle;
        newParticle.reset();
        particles.push_back(newParticle);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(60, 60, 60), ofColor(10,10,10));
    for (int i = 0; i < particles.size(); i++) {
        particles[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//---------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    for (int i = 0; i<particles.size(); i++) {
        particles[i].toggleMode();
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
