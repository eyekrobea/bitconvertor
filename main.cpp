#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int option;

    cout << "Choose an option:" << endl;
    cout << "1. Translate from number to bits" << endl;
    cout << "2. Translate from bits to number\n\n";
    cin >> option;

    if (option == 1) {
        int number;
        cout << "Enter a number: ";
        cin >> number;
        cout << "Binary representation: " << bitset<8>(number) << endl;
    } else if (option == 2) {
        string bits;
        cout << "Enter a binary string (8 bits): ";
        cin >> bits;
        if (bits.length() == 8) {
            int number = bitset<8>(bits).to_ulong();
            cout << "Decimal representation: " << number << endl;
        } else {
            cout << "Please enter an 8-bit binary string." << endl;
        }
    } else {
        cout << "Invalid option. Please choose 1 or 2." << endl;
    }

    return 0;
}
