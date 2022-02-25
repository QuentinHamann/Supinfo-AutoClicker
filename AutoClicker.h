#ifndef FINAL_AUTOCLICKER_H
#define FINAL_AUTOCLICKER_H
#import <iostream>

class AutoClicker {
private:
    int x, y;
    bool state = true;
    int duration;
    std::string typeCLick;

public:
    AutoClicker(int x, int y,int duration, bool state,std::string typeCLick);

    int draw();
    int click();
    int Set();
    void config();
};


#endif //FINAL_AUTOCLICKER_H
