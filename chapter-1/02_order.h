#ifndef _02_ORDER_H_
#define _02_ORDER_H_

void order() {
    print_slow("Anyway...");

    choice_popup("What would you like to order?");

    std::string request;
    std::getline(std::cin, request);

    if (request != "grilled cheese") {
        std::string first_response = "Hmmm... " + GREEN + BOLD + request + RESET + " is not on the menu.";
        print_slow(first_response);

        pause();
        pause();

        choice_popup("What else could I get for you?");

        std::string second_request;
        std::getline(std::cin, second_request);

        if (second_request != "grilled cheese") {
            print_slow("Ooo, not sure if we have the ingreedients for that one.\n"
                "Let me check in the back");
            
            pause();
            pause();
            pause();
            pause();

            print_slow("Nope, sorry. We don't got the stuff for that today.");

            pause();
            pause();

            choice_popup("What else could I get for you?");

            std::string third_request;
            std::getline(std::cin, third_request);

            if (third_request != "grilled cheese") {
                print_slow("*Sigh*");
                pause();
                print_slow("...");
                pause();
                
                std::string third_response = "Oh jeesh, we just ran out of " + GREEN + BOLD + third_request + RESET + " this morning.";
                print_slow(third_response);

                pause();
                pause();

                print_slow("How about I get you a grilled cheese!");

                choice_popup("How does that sound?");

                std::string yes_or_no;
                std::getline(std::cin, yes_or_no);

                if (yes_or_no != "yes") {
                    print_slow("Awwww, don't worry about it.\n"
                        "I can't let you leave with an empty stomach after all that!\n"
                        "This one is on the house ;)");
                }
            }
        }
    }

    print_slow("1 grilled cheese coming right up!");

    pause();
    pause();
    
    print_slow("*Jimmy goes to the back*");
    
    pause();
    
    print_slow("*The sound of a sizzling grilled cheese from the back*");
}

#endif