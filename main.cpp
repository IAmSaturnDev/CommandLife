#include <iostream>
#include "Player.h"

void howToPlay() {
    std::cout << "HOW TO PLAY:\n";
    std::cout << "Enter your name, then type 'work' to work and endDay to end your day and get money\n";
    std::cout << "Type in stats to see your money, salary and other important information!\n";
    std::cout << "The more you work the higher your 'temper' gets.\nIf your temper exceeds the 'required temper' your salary increases and your temper resets to 0 and your required temper increases\n";
    std::cout << "Your reputation multiplies your money BY A LOT\n";
    std::cout << "Its recommended to check your stats before you end your day to see your temper and required temper!\n";
    std::cout << "You can also type in 'exit' to leave and 'name' to see your name\n";
    std::cout << "If you don't set your name your name will be set to 'yeetfuel'.\n";
    std::cout << "type in 'tips' for a list of tips!\n";
    std::cout << "Type in 'help' to see this message again.\n\n";
}

void tips() {
    std::cout << "Checking your stats before ending your day is very helpful!\n";
    std::cout << "Type 'reset' to reset your data! (BTW it resets every time you exit)\n";
    std::cout << "Saying yeetfuel gives you a gift!\n\n";
}


int main(int argc, const char *argv[]) {
    while (true) {
        howToPlay();
        Player player;
        std::string name;

        std::cout << "Enter your characters name\n";
        std::cin >> name;
        
        if (name == "") {
            player.username = "yeetfuel";
        }


        if (true) {
            
            player.username = name;
            while (true) {
                std::string input;

                std::cin >> input;

                if (input == "work") {
                    player.work();
                }

                if (input == "endDay") {
                    player.getPaid();
                }

                if (input == "name") {
                    getUser(player.username);
                }

                if (input == "stats") {
                    player.stats();
                }

                if (input == "exit") {
                    break;
                    break;
                }

                if (input == player.username) {
                    std::cout << "Hmm its kinda funny that you said your name\n\n";
                }

                if (input == "help") {
                    howToPlay();
                }

                if (input == "yeetfuel" || input == "C++") {
                    player.money += 200;
                }

                if (input == "tips") {
                    tips();
                }

                if (input == "reset") {
                    player.reset();
                }
            }
            
        }
    }
}
