/** i'm lazy please let me use stdc++.h **/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    double pr, studcount;
    double sum = 1340.0;
    double gpw[10] = {5, 14, 1, 2, 2, 0, 3, 0, 1, 0};
    double cp[10] = {29.4, 28.5, 18.8, 4.3, 4.2, 3.5, 3.4, 3.3, 2.9, 1.7};
    string cid[10] = {"United States", "India", "Singapore", "Poland", "Romania", "Vietnam", "Indonesia", "Canada", "United Kingdom", "Australia"};


    // Infinite loop lol.
    while (1){
    cout << "// Perfomance Rate Calculator for Google Code-In \n"
            "Licensed under MIT License\n"
            "Created by: smsunarto (http://github.com/smsunarto)\n"
            "Calculation here only counts the number of Grand Prize Winners and\n"
            "does not includes finalist and countries with no data to analyze (Ex: Russia)\n\n"
            "[1] United States\n"
            "[2] India\n"
            "[3] Singapore\n"
            "[4] Poland\n"
            "[5] Romania\n"
            "[6] Vietnam\n"
            "[7] Indonesia\n"
            "[8] Canada\n"
            "[9] United Kingdom\n"
            "[10] Australia\n"
            "Enter the country code: ";
    cin >> c;
    studcount = nearbyint(cp[c-1]*sum/100);
    pr = gpw[c-1]/studcount;
    cout << "------------------------------------------------------------\n";
    cout << "Country Selected: " << cid[c-1] << endl;
    cout << "Amount of students that join from your country - " << studcount << endl;
    cout << "Grand Prize Winners - " << gpw[c-1] << endl;
    cout << "Performance Rate (PR) - " << pr << endl;
    cout << "Comphare your PR with other countries!" << endl;
    cout << "------------------------------------------------------------\n\n";
    }
}

