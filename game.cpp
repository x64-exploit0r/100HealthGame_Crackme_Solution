#include <iostream>
using namespace std;

class Game {
private:
    int health;

public:
    Game() : health(100) {}

    void printStatus() {
        cout << "Health: " << health << endl;
    }

    void decreaseHealth() {
        health -= 10;
        if (health <= 0) {
            health = 0;
            cout << "Game Over! Health depleted." << endl;
            
        }
    }

    void play() {
        char input;
        do {
            printStatus();
            cout << " or 'q' to quit: ";
            input = cin.get();
            if (input == '\n') { 
                decreaseHealth();
            }
        } while (input != 'q'); 
    }
};

int main() {
    Game myGame;
    myGame.play();

    return 0;
}
