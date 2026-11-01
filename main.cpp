#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int currentPopulation, percentageIncrease, numberOfDays, newPopulation;
    int day = 1;
    double dailyIncrease;

    cout << "Enter current number of organisms: ";
    cin >> currentPopulation;
        if (currentPopulation < 2) {
            cout <<"Population must be greater than or equal to 2." << endl;
            return 0;
        }

    cout << "Enter percentage increase: ";
    cin >> percentageIncrease;
        if (percentageIncrease <= 0 || percentageIncrease > 100) {
            cout <<"Percentage increase must be greater than 0 and less than or equal to 100." << endl;
            return 0;
        }

    cout << "Enter number of days: ";
    cin >> numberOfDays;
        if (numberOfDays < 1) {
            cout <<"Number of days must be greater than or equal to 1." << endl;
            return 0;
        }

    while (day <= numberOfDays) {;
        dailyIncrease = round(currentPopulation * (percentageIncrease/100.00));
        newPopulation = currentPopulation + dailyIncrease;

        cout << "Day " << day << ": " << newPopulation << " " << endl;

        currentPopulation = newPopulation;
        day++;
    }

    return 0;
}