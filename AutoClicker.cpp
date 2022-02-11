#include "AutoClicker.h"
#include <iostream>
#include "windows.h"


using namespace std;
bool state(true);

void menu() {
    cout << "test";
}

int main() {
    menu();
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            state=!state;
        }

        if (!state) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }
        cout << state << endl;
        Sleep(50);
    }
}