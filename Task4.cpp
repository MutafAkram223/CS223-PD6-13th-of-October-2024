#include <iostream>
#include <string>
using namespace std;

float cellular(char code, char call_time, float min_used);
string dayNight(char code);
string service(char call_time);

main()
{
    char code, call_time;
    float min_used;
    string service_type, service_time;
    float charges;
    
    cout << "Enter the service code (P for Premium, R for Regular): ";
    cin >> code;
    cout << "Enter time of the call (D for Day and N for Night): ";
    cin >> call_time;
    cout << "Enter the number of minutes used: ";
    cin >> min_used;
    
    charges = cellular(code, call_time, min_used);
    service_type = dayNight(code);
    service_time = service(call_time);

    cout << "Your service type is: " << service_type << endl;
    cout << "Your service time is: " << service_time << endl;
    cout << "Due Charges: " << charges << endl;
}

float cellular(char code, char call_time, float min_used)
{
    float charges = 0;

    if (code == 'R') {
        if (min_used <= 50) {
            charges = 10;
        } else {
            charges = 10 + (min_used - 50) * 0.20;
        }
    }

    if (code == 'P') {
        if (call_time == 'D' && min_used <= 75) {
            charges = 25;
        } else if (call_time == 'D' && min_used > 75) {
            charges = 25 + (min_used - 75) * 0.10;
        } else if (call_time == 'N' && min_used <= 100) {
            charges = 25;
        } else if (call_time == 'N' && min_used > 100) {
            charges = 25 + (min_used - 100) * 0.05;
        }
    }

    return charges;
}

string dayNight(char code)
{
    if (code == 'P') {
        return "Premium";
    } else {
        return "Regular";
    }
}

string service(char call_time)
{
    if (call_time == 'D') {
        return "Day";
    } else {
        return "Night";
    }
}