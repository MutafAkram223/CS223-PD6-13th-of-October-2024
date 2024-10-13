#include <iostream>
#include <string>
using namespace std;

string calculateHotelPrice(string month, int stays);

main() {
    string month;
    int stays;

    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;

    string result = calculateHotelPrice(month, stays);
    cout << result << endl;
}

string calculateHotelPrice(string month, int stays) {
    float studioPricePerNight;
    float apartmentPricePerNight;
    float totalStudioPrice;
    float totalApartmentPrice;

    if (month == "May" || month == "October") {
        studioPricePerNight = 50;
        apartmentPricePerNight = 65;
        totalStudioPrice = studioPricePerNight * stays;
        totalApartmentPrice = apartmentPricePerNight * stays;

        if (stays > 14) {
            totalStudioPrice = totalStudioPrice * 0.7;
        } else if (stays > 7) {
            totalStudioPrice = totalStudioPrice * 0.95;
        }

    } 
    else if (month == "June" || month == "September") {
        studioPricePerNight = 75.2;
        apartmentPricePerNight = 68.7;
        totalStudioPrice = studioPricePerNight * stays;
        totalApartmentPrice = apartmentPricePerNight * stays;

        if (stays > 14) {
            totalStudioPrice = totalStudioPrice * 0.8;
        }

    } 
    else if (month == "July" || month == "August") {
        studioPricePerNight = 76;
        apartmentPricePerNight = 77;
        totalStudioPrice = studioPricePerNight * stays;
        totalApartmentPrice = apartmentPricePerNight * stays;

    if (stays > 14) {
        totalApartmentPrice = totalApartmentPrice * 0.9;
    }
    }

    string result = "Apartment: " + to_string(totalApartmentPrice) + " Dollars\nStudio: " + to_string(totalStudioPrice) + " Dollars";

    return result;
}