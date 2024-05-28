#include <iostream>
#include <cstdlib>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    cout << "Початок виконання програми..." << endl;

    vector<char*> memoryHogs;

    while (true) {

        memoryHogs.push_back(new char[10000000]);
        this_thread::sleep_for(chrono::milliseconds(100));
    }


    for (auto& hog : memoryHogs) {
        delete[] hog;
    }

    return 0;
}
