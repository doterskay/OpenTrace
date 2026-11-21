#include <iostream>
#include <string>
#include <cstdlib>

void showMenu()
{
    system("cls");

    std::cout << "OpenTrace\n\n";
    std::cout << "1. Scan computer\n";
    std::cout << "2. About\n";
    std::cout << "3. Exit\n\n";
    std::cout << "Select option: ";
}

void showAbout()
{
    system("cls");

    std::cout << "OpenTrace\n";
    std::cout << "Developer: OpenSoftME and doterskay\n\n";
    std::cout << "Press Enter to return...";
    std::cin.get();
}

void startScan()
{
    system("cls");

    std::cout << "Scanner module is not implemented yet.\n\n";
    std::cout << "Press Enter to return...";
    std::cin.get();
}

int main()
{
    system("cls");
    while (true)
    {
        showMenu();

        std::string choice;
        std::getline(std::cin, choice);

        if (choice == "1")
        {
            startScan();
        }
        else if (choice == "2")
        {
            showAbout();
        }
        else if (choice == "3")
        {
            system("cls");
            std::cout << "Closing OpenTrace...\n";
            return 0;
        }
        else
        {
            std::cout << "\nInvalid option. Press Enter...";
            std::cin.get();
        }
    }
}