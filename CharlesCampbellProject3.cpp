/* 
Charles C. Campbell
CS 210
6/23/2024
CharlesCampbellProject3.cpp
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

// Class for tracking items from input file
class ItemTracker {
public:
    void readDataFile();    // Reads the file
    void displayMenu();     // Displays program menu
private:
    map<string, int> itemFrequency; // Map to store items and number frequency
    void searchItem();              // Search for items
    void printFrequencyList();      // Numerical print of all items
    void printHistogram();          // Histogram print of all items
};

// Class function to read input text file, and output item and frequency to data file
void ItemTracker::readDataFile() {
    ifstream inputFile;     // Input File
    inputFile.open("ProjectThreeInputFile.txt");    // Opens input file
    ofstream outputFile; // Output file
    outputFile.open("frequency.dat"); // Opens output file to store backup data
    string item;    // Item variable
    // Read items from input file
    while (inputFile >> item) {
        itemFrequency[item]++;  // add 1 frequency for every repeated item
    }
    // Writes the item-frequency pairs to output file; first being the name, second being the frequency number
    for (auto i : itemFrequency) {
        outputFile << i.first << ' ' << i.second << endl;
    }
    // Close the files
    inputFile.close();
    outputFile.close(); 
}

// Displays the menu for the program
void ItemTracker::displayMenu() {
    // Loop that gets users input, executes switch statement until user enters 4 to exit program
    int choice = 0;
    while (choice != 4) {
        cout << "\nMenu\n\n";
        cout << "1. Search for an item\n";
        cout << "2. Print the frequency list\n";
        cout << "3. Print a histogram\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        // Option 1; finding the frequency of an item from the file
        case 1:
            searchItem();
            break;
        // Option 2; prints the frequency of all items from the file
        case 2:
            printFrequencyList();
            break;
        // Optoin 3; does the same as option 2, but instead of numbers outputs a histogram for each item
        case 3:
            printHistogram();
            break;
        // Option 4; user exits the program
        case 4:
            cout << "Exiting program...\n\n";
            break;
        // If user does not input a number between 1-4, program asks for input again
        default:
            cout << "Invalid choice. Try again.\n\n";
        }
    }
}

// Function for option 1: to find the item user inputs, and informs numerical frequency; also informs user if no item is found.
void ItemTracker::searchItem() {
    string item;
    cout << "Enter the item to search for: ";
    cin >> item;
    if (itemFrequency.find(item) == itemFrequency.end()) {
        cout << item << " not found.\n";
    }
    else {
        cout << "Frequency of " << item << " = " << itemFrequency[item] << endl << endl;
    }
}

// Function for option 2: prints the frequency of all items from the file
void ItemTracker::printFrequencyList() {
    cout << "Frequency list:\n\n";
    for (auto const& item : itemFrequency) {
        cout << item.first << " " << item.second << endl;   // prints the item name (first) and then the frequency number (second)
    }
}

// Function for option 3: does the same as option 2, but instead of numbers outputs a histogram for each item
void ItemTracker::printHistogram() {
    cout << "Histogram:\n\n";
    for (auto const& item : itemFrequency) {
        cout << item.first << " ";                  // prints the item name (first)
        for (int i = 0; i < item.second; i++) {     // Converts the frequency number (second) to astericks
            cout << "*";
        }
        cout << endl;
    }
}

// Main function, calls the ItemTracker class, reads the text file and outputs data file, and produces menu until user inputs 4
int main() {
    ItemTracker itemTracker;
    itemTracker.readDataFile();
    itemTracker.displayMenu();
    return 0;
}