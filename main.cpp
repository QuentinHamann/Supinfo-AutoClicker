#include <iostream>
#include "AutoClicker.h"


using namespace std;


void menu() {
    cout << "Supinfo-Cliqueur" << endl;
    cout << "Tapez 1 pour créer un clqueur ou 2 pour créer un mouvement( 1 par defaut)" << endl;
}


int main() {
    int choice = 0;
    AutoClicker task = AutoClicker(100, 100, 100, false, "gauche");
    menu();
    cin >> choice;
    if (choice == 1){
        task.click();
    }
    if (choice == 1){
        task.draw();
    }
    else{
        task.click();
    }

}