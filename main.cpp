#include <iostream>
#include <chrono>
#include <thread>
#include "./utils.h"
#include "./chapter-1/01_welcome.h"
#include "./chapter-1/02_order.h"
#include "./chapter-1/03_fire.h"

int main() {
    clear_console();

    welcome();
    order();
    fire();

    header("THE END");
    print_slow("\n\n\n\n\n\n\n\n");

    return 0;
}