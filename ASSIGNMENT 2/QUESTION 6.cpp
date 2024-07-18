#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function to simulate the traffic light
void simulateTrafficLight() {
    int timer = 0;

    while (true) {
        switch (timer % 9) {
            case 0:
            case 1:
            case 2:
                cout << "Traffic light is RED" << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Red light duration
                break;
            case 3:
            case 4:
                cout << "Traffic light is YELLOW" << endl;
                this_thread::sleep_for(chrono::seconds(2)); // Yellow light duration
                break;
            case 5:
            case 6:
            case 7:
            case 8:
                cout << "Traffic light is GREEN" << endl;
                this_thread::sleep_for(chrono::seconds(4)); // Green light duration
                break;
            default:
                cout << "Unexpected case" << endl;
        }
        timer++;
    }
}

int main() {
    simulateTrafficLight();
    return 0;
}
