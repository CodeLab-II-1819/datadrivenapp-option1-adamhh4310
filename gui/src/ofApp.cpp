#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//loading font 
	mainFont.load("Dirty Brush.ttf", 20);

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
//-------------------------------------------------------------------------------
	// Option 1 Button
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 100, 150, 50);

	// Opion 2 Button
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 175, 150, 50);

	
	// Option 3 Button
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 250, 150, 50);

	// Option 4 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 325, 150, 50);

	// Option 5 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 400, 150, 50);

	// Option 6 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 475, 150, 50);

	// Option 7 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 550, 150, 50);

	// Option 8 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 625, 150, 50);

	// Option  9 button 
	ofSetColor(94, 157, 63);
	ofDrawRectangle(50, 700, 150, 50);

	// Center console 
	ofSetColor(192, 192, 192);
	ofDrawRectangle(360, 100, 1400, 650);

//----------------------------------------------------------------------------

	// Setting the font colour 
	ofSetColor(236, 239, 179);
	// Option 1 
	mainFont.drawString(" All Tweets", 55 , 135 );
	// Option 2 
	mainFont.drawString(" Paris ", 55 , 210);
	// Option 3 
	mainFont.drawString(" Money" , 55 , 285);
	// Option 4 
	mainFont.drawString(" Politics", 55, 360);
	// Option 5
	mainFont.drawString("Uber", 55, 435);
	//  Option 6
	mainFont.drawString(" Dream Works", 55, 510);
	// Option 7
	mainFont.drawString(" Fruit", 55, 585);
	// Option 8
	mainFont.drawString("Brexit", 55, 660);
	// Oppion 9
	mainFont.drawString("Travel",55, 735);
	

}

