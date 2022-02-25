#include "AutoClicker.h"
#include <iostream>
#include "windows.h"


using namespace std;

AutoClicker::AutoClicker(int a, int b,int time, bool stat,std::string typeCLic) {
    x = a;
    y = b;
    state = stat;
    typeCLick = typeCLic;
    duration = time;
}




int AutoClicker::draw() {
    int xpos [100] = {};
    int ypos [100] = {};
    int num = 0;
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            POINT p;
            GetCursorPos(&p);
            cout << p.x << " " << p.y << endl;
            xpos[num]=p.x;
            ypos[num]=p.y;
            num += 1;
            cout << xpos << " " << ypos << endl;
            Sleep(100);
        }

        if (GetAsyncKeyState(VK_ESCAPE)) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            Sleep(100);
            for (int i=0;i<num; i++) {
                SetCursorPos(xpos[i], ypos[i]);
                Sleep(100);
            }
            num = 0;
        }
    }
}

int AutoClicker::Set() {
    SetCursorPos(x, y);
}

void AutoClicker::config() {
    cout << "Quel clic voulez-vous : gauche(g) ou droit(d) ? (par défaut : gauche) ";
    cin >> typeCLick;
    cout << endl << "Durée de l action :";
    cin >> duration;
}

int AutoClicker::click() {
    config();
    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE)) {
            Sleep(100);
            POINT p;
            GetCursorPos(&p);
            x = p.x;
            y = p.y;
        }

        if (GetAsyncKeyState(VK_SPACE)) {
            state = !state;
        }

        if (!state) {
            SetCursorPos(x, y);
            if (typeCLick == "droit" or typeCLick =="d"){
                mouse_event(MOUSEEVENTF_RIGHTDOWN, x, y, 0, 0);
                mouse_event(MOUSEEVENTF_RIGHTUP, x, y, 0, 0);
            }
            else {
                mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            }
            Sleep(duration);
            break;
        }



    }
}