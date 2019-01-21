#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//loading font 
	mainFont.load("CFNightmarePERSONAL-Regular.ttf", 60);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	//ofDrawRectangle(x, y, width, height);
	//ofSetColor(red, green, blue); rgb
	ofSetColor(192, 192, 192);
	ofDrawBitmapString(" Twitter Query App", (ofGetWidth()/2)-50, 30);

	
	ofSetColor(200, 10, 20);
	// static button 
	ofDrawRectangle(50, 100, 125, 50);

	// static button 
	ofDrawRectangle(50, 175, 125, 50);

	ofSetColor(10, 200, 20);
	// static button 
	ofDrawRectangle(50, 250, 125, 50);

	ofSetColor(192, 192, 192);
	//drawing the font 
	ofDrawRectangle(50, 325, 125, 50);
	// Option 1 
	ofDrawBitmapString(" Select for all Tweets", 55 , 125 );
	// Option 2 
	ofDrawBitmapString(" Paris " , 
	// Option 3 
	ofDrawBitmapString(" Money"),
	// Option 4 
	ofDrawBitmapString(" Politics",
	// Option 5
	ofDrawBitmapString("Uber",
	//  Option 6
	ofDrawBitmapString(" Dream Works",
	// Option 7
	ofDrawBitmapString(" Fruit",
	// Option 8
	ofDrawBitMapString("Brexit",
	// Oppion 9
	ofDrawBitMapString()
	

}

