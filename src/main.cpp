#include <iostream>
#include <chrono>
#include <string>

int main() {
    std::string n;

    // start the game
    std::cout << "Press Enter to play! The aim is to get as close to ten "
        "seconds as possible!" << std::endl;
    std::getline(std::cin, n);

    // get the time at the start
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto start = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

    // wait for input
    std::cout << "Press Enter after 10 seconds!" << std::endl;
    std::getline(std::cin, n);
    
    // get the time when input is received
    now = std::chrono::system_clock::now();
    duration = now.time_since_epoch();
    auto end = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    
    // output time taken to input
    std::cout << "Time taken: " << (end - start) / 1000 << "s " 
        << (end - start) % 1000 << "ms" << std::endl;

    return 0;
}
