#include<iostream>
#include<string>
using namespace std;

string zodiac(int day, string month);

int main()
{
    int day;
    string month;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth: ";
    cin >> month;

    string result = zodiac(day, month);
    cout << "Your sign is: " << result << endl;
}

string zodiac(int day, string month)
{
    if ((month == "March" && day > 20 && day <= 31) || (month == "April" && day <= 20 && day > 0))
        return "Aries";
    if ((month == "April" && day > 19 && day <= 30) || (month == "May" && day <= 21 && day > 0))
        return "Taurus";
    if ((month == "May" && day > 20 && day <= 31) || (month == "June" && day <= 21 && day > 0))
        return "Gemini";
    if ((month == "June" && day > 20 && day <= 30) || (month == "July" && day <= 23 && day > 0))
        return "Cancer";
    if ((month == "July" && day > 22 && day <= 31) || (month == "August" && day <= 23 && day > 0))
        return "Leo";
    if ((month == "August" && day > 22 && day <= 31) || (month == "September" && day <= 23 && day > 0))
        return "Virgo";
    if ((month == "September" && day > 22 && day <= 30) || (month == "October" && day <= 23 && day > 0))
        return "Libra";
    if ((month == "October" && day > 22 && day <= 31) || (month == "November" && day <= 22 && day > 0))
        return "Scorpio";
    if ((month == "November" && day > 21 && day <= 30) || (month == "December" && day <= 21 && day > 0))
        return "Sagittarius";
    if ((month == "December" && day > 21 && day <= 31) || (month == "January" && day <= 20 && day > 0))
        return "Capricorn";
    if ((month == "January" && day > 19 && day <= 31) || (month == "February" && day <= 19 && day > 0))
        return "Aquarius";
    if ((month == "February" && day > 18 && day <= 29) || (month == "March" && day <= 20 && day > 0))
        return "Pisces";
}
