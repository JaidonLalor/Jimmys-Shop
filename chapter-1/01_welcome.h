#ifndef _01_WELCOME_H_
#define _01_WELCOME_H_

void welcome() {
    header("Welcome to Jimmy's Sandwich Shop!");

    print_slow("Hey there, my name is Jimmy.\n"
        "I have been running this Sandwich Shop for 14 years.");

    std::string choice;
    do {
        print_slow("Have you been in before?");

        choice_popup("Answer by typing \"yes\" or \"no\"");
        
        std::getline(std::cin, choice);

        if (choice == "yes") {
            
            print_slow("Oh really?\n"
                "Geesh, in this small town, I really thought I knew everyone...");
    
            pause();
            pause();
    
            print_slow("Guess my memory isn't as good as I thought...");
    
            pause();
            pause();
    
        }else if(choice == "no"){
    
            print_slow("Oh well great to meet you!\n"
                "It's rare to meet a new customer in this small town!");
            
            choice_popup("Where did you come from?");
    
            std::string origin;
            std::getline(std::cin, origin);
            std::string message = "Wow... " + GREEN + BOLD + origin + RESET + " sounds like it's far away.";
            print_slow(message);

            pause();
            pause();
    
        }else{
    
            print_slow("What was that? I didn't understand you.");
    
        }
    } while (choice != "yes" && choice != "no");
}

#endif