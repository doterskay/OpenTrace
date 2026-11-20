#include <iostream>
#include <limits>

int main() {
    int choice = 0;


    std::cout << "         OpenTrace          \n";

    std::cout <<"1. Scan\n";
    std::cout <<"2. About\n";
    std::cout <<"3. Exit\n\n";

    while(true){
        std::cout <<"Select an option: ";
        
        
        if(!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize> :: max(), '\n');

            std::cout << "Invalid input. Enter a number.\n\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            std::cout << "\nScanning is not implemented yet.\n\n";
            break;

        case 2:
            std::cout << "\nOpenTrace - static analysis tool for mods.\n";
             std::cout << "Developed by OpenSoftME.\n\n";
            break;

        case 3:
            std::cout << "\nClosing OpenTrace...\n";
            return 0;
        
        default:
            break;
        }
    }
}