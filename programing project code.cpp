#include <iostream>
using namespace std;

int main()
{
    int choice;
    float amount;

    // Conversion rates (Approximate)
    float INR = 3.35;
    float BDT = 1.55;
    float CNY = 39.5;
    float JPY = 2.0;
    float SAR = 74.5;
    float AED = 75.0;
    float LKR = 0.90;

    char repeat;

    do
    {
        cout << "\n==============================\n";
        cout << "  ASIAN CURRENCY CONVERTER\n";
        cout << "==============================\n";

        cout << "1. PKR to Asian Currency\n";
        cout << "2. Asian Currency to PKR\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nConvert PKR to:\n";
            cout << "1. INR\n2. BDT\n3. CNY\n4. JPY\n5. SAR\n6. AED\n7. LKR\n";
            cout << "Enter option: ";
            cin >> choice;

            cout << "Enter amount in PKR: ";
            cin >> amount;

            if (choice == 1) cout << "INR = " << amount / INR;
            else if (choice == 2) cout << "BDT = " << amount / BDT;
            else if (choice == 3) cout << "CNY = " << amount / CNY;
            else if (choice == 4) cout << "JPY = " << amount / JPY;
            else if (choice == 5) cout << "SAR = " << amount / SAR;
            else if (choice == 6) cout << "AED = " << amount / AED;
            else if (choice == 7) cout << "LKR = " << amount / LKR;
            else cout << "Invalid option!";
        }
        else if (choice == 2)
        {
            cout << "\nConvert to PKR from:\n";
            cout << "1. INR\n2. BDT\n3. CNY\n4. JPY\n5. SAR\n6. AED\n7. LKR\n";
            cout << "Enter option: ";
            cin >> choice;

            cout << "Enter amount: ";
            cin >> amount;

            if (choice == 1) cout << "PKR = " << amount * INR;
            else if (choice == 2) cout << "PKR = " << amount * BDT;
            else if (choice == 3) cout << "PKR = " << amount * CNY;
            else if (choice == 4) cout << "PKR = " << amount * JPY;
            else if (choice == 5) cout << "PKR = " << amount * SAR;
            else if (choice == 6) cout << "PKR = " << amount * AED;
            else if (choice == 7) cout << "PKR = " << amount * LKR;
            else cout << "Invalid option!";
        }
        else
        {
            cout << "Invalid choice!";
        }

        cout << "\n\nDo you want to continue? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "\nThank you for using Currency Converter!\n";
    return 0;
}
