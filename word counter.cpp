#include <iostream>
#include <string>
#include <windows.h>
using std::cout; using std::string; using std::cin; using std::getline;

// written by chapel1337
// made on 9/29/2022

string tempWords{};
string words{};
int wordCount{ 0 };

int main();

void displayCount()
{
    system("cls");
    wordCount = 0;

    for (int i{ 0 }; i <= tempWords.length(); i++)
    {
        if (tempWords[i] == ' ' && i != 1)
        {
            wordCount++;
        }
        if (tempWords[i] == 1 && i == ' ')
        {
            continue;
        }
    }

    for (int i{ 0 }; i <= words.length(); i++)
    {
        if (words[i] == ' ' && i != 1)
        {
            wordCount++;
        }
        if (words[i] == 1 && i == ' ')
        {
            continue;
        }
    }

    words += tempWords + ' ';
    cout << "word count: " << wordCount << "\n\n";

    cout << words;
    getline(cin >> std::ws, tempWords);

    displayCount();
}

int main() {
    std::system("title word counter");

    cout << "word counter\n";
    cout << "written by chapel1337\n";

    Sleep(2000);

    cout << "press enter to see word count\n";

    displayCount();
}