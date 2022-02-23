#include <iostream>
#include "windows.h"


using namespace std;

int x, y;
bool state(true);

void menu() {
    cout << "Ceci est un test";
}

//appui souris prolonger
int draw() {
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            state = !state;
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        }

        if (!state) {
            x += 1;
            SetCursorPos(x, y);
        } else {
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }
        Sleep(10);

    }
}

//premet d avoir la position de la souris, peut etre inclure dans une liste est boucler dessus pour creer move
int getPosition() {
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            Sleep(100);
            POINT p;
            GetCursorPos(&p);
            int mouseX = p.x;
            int mouseY = p.y;
            cout << p.x << " " << p.y << endl;
        }


    }
}

//place la souris sur la position souhaité
int Set(int x, int y) {
    SetCursorPos(x, y);
}


//tentative de click avec positionnement personalisé, ne marche pas :(
int click() {
    while (true) {
        if (GetAsyncKeyState(VK_DOWN)) {
            Sleep(100);
            POINT p;
            GetCursorPos(&p);
            x = p.x;
            y = p.y;
            cout << p.x << " " << p.y << endl;
            break;
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            SetCursorPos(x, y);
        }

        if (GetAsyncKeyState(VK_UP)) {
            state = !state;
        }


        if (!state) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            cout << state;

        }
        Sleep(50);


    }
}

int main() {
    menu();
    click();

}