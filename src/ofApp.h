#pragma once

#include "ofMain.h"
#include "ofxPostGlitch.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void particledraw();
    
    vector<ofImage> image;//高速でイメージ差し替え
    int currentFrame;//高速でイメージ差し替え
    ofSoundPlayer mySound;//ofsoundクラスをインスタンス
    ofEasyCam camera;
    
    bool bdrawimage;//画像の差し替えのモード変更
    bool bdrawtitle;//シェーンベルクの名前の表示モード
    bool bdrawparticle;
    
    ofFbo myFbo;//画像の差し替えを記憶
    ofFbo myFbo1;//シェーンベルクの名前を記憶
    
    ofxPostGlitch myGlitch;
    ofxPostGlitch myGlitch1;
    ofTrueTypeFont ttf;//英数字（いわゆる ASCII 文字）しか表示できません。
    string s;//文字列
};
