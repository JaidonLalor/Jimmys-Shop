#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <chrono>
#include <thread>

const std::string GREEN = "\033[1;32m";
const std::string BLUE = "\033[1;34m";
const std::string BOLD = "\033[1m";
const std::string RESET = "\033[0m";

void print_slow(std::string text) {
    std::cout << "\n";
    for (std::size_t i = 0; i < text.length(); ++i) {
        std::cout << text[i] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(30)); //Print speed
    }
    std::cout << "\n";
}

void pause() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void header(std::string text) {
    std::string message = "-X----- " + BOLD + text + RESET + " -----X-";
    print_slow(message);
}

void clear_console() {
    std::cout << "\033[2J";
    std::cout << "\033[1;1H";
}

void choice_popup(std::string text) {
    std::string message = "\n" + GREEN + BOLD + text + RESET + "\n";
    print_slow(message);
}

#endif