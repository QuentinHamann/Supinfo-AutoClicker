#include "AutoClicker.h"
#include <iostream>
#include "windows.h"

/*
using namespace std;

int x, y;
bool state(true);


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

int getTrajectory() {
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            POINT p;
            GetCursorPos(&p);
            int mouseX = p.x;
            int mouseY = p.y;
            cout << p.x << " " << p.y << endl;
        }
        Sleep(100);

    }
}

int Set() {
    SetCursorPos(x, y);
}

int click() {

    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            state = !state;
        }

        if (!state) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }
        cout << state << endl;
        Sleep(50);
    }
}*/