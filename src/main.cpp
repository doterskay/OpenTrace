#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <cctype>
#include <windows.h>
#include <zip.h>

namespace fs = std::filesystem;

std::vector<fs::path> foundMobs;

bool isModArchive(const fs::path& file)
{
    int error = 0;
    zip_t* archive =zip_open(file.string().c_str(), ZIP_RDONLY, &error);

    if (!archive)
        return false;

    const char* entries[] = {
        "fabric.mod.json",
        "quilt.mod.json",
        "META-INF/mods.toml",
        "META-INF/neoforge.mods.toml"
    };

    bool result  = false;


    for (const char* entry : entries)
    {
        if(zip_name_locate(archive, entry, 0) >= 0)
        {
            result = true;
            break;
        }
    }

    zip_close(archive);
    return result;
}


void showMenu()
{
    system("cls");

    std::cout << "OpenTrace\n";
    std::cout << "Minecraft Mod Security Analyzer\n\n";

    std::cout << "1. Scan computer\n";
    std::cout << "2. About\n";
    std::cout << "3. Exit\n\n";

    std::cout << "Select option: ";
}

void showAbout()
{
    system("cls");

    std::cout << "OpenTrace\n";
    std::cout << "Developer: OpenSoftME\n";


    std::cout << "Press Enter to return to menu...";
    std::cin.get();
}

void startScan()
{
    system("cls");

    std::cout << "Scanner module is not implemented yet.\n\n";

    std::cout << "Press Enter to return to menu...";
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

    return 0;
}
