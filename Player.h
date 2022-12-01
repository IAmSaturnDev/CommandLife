#include <iostream>
void getUser(std::string a) {
    std::cout << a << "\n\n";
}




class Player {
    public:
        double money = 0;
        double salary = 78;
        std::string username = "placeholder";
        double temper = 0.0;
        double reqTemper = 6.0;
        double moneyEarned = 0;
        double reputation = 0;
        int day = 1;

        void work() {
            std::cout << "I am working at a daily salary of " << salary << "\n\n";
            temper += 0.45;
            moneyEarned += salary;
            reputation += 0.002;
        }

        void getPaid() {
            std::cout << "Its the end of the day. I am getting paid.\n\n";
            day++;
            moneyEarned = moneyEarned * temper;
            
            

            if (temper >= reqTemper) {
                salary += 0.67;
                reqTemper += 0.9;
                temper = 0;
            }

            money = money + moneyEarned;
            moneyEarned = 0;
        }

        void stats() {
            std::cout << "Your money is: " << money << "\n";
            std::cout << "Your salary is: " << salary << "\n";
            std::cout << "Your work temper is: " << temper << "\n";
            std::cout << "Your required work temper is: " << reqTemper << "\n";
            std::cout << "Your reputation is: " << reputation << "\n"; 
            std::cout << "The current day is: " << day << "\n";
            std::cout << "Yesterdays date was: " << day - 1 << "\n";
        }

        void reset() {
            std::cout << "Stats reset to defaults";
            temper = 0.0;
            reqTemper = 6.0;
            moneyEarned = 0;
            day = 1;
            money = 0;
            salary = 78;
            reputation = 0;
        }
};

