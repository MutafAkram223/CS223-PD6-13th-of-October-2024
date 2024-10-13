#include <iostream>
#include <cmath>
using namespace std;

string getArrivalStatus(int examH, int examM, int arrivalH, int arrivalM);
void showTimeDifference(int examH, int examM, int arrivalH, int arrivalM);

int main()
{
    int examH, examM, arrivalH, arrivalM;
    
    cout << "Enter Exam Start Time (hour): ";
    cin >> examH;
    cout << "Enter Exam Start Time (minutes): ";
    cin >> examM;
    cout << "Enter Student Arrival Hour: ";
    cin >> arrivalH;
    cout << "Enter Student Arrival Minutes: ";
    cin >> arrivalM;
    
    string status = getArrivalStatus(examH, examM, arrivalH, arrivalM);
    cout << status << endl;
    
    if (status != "On time") {
        showTimeDifference(examH, examM, arrivalH, arrivalM);
    }
}

string getArrivalStatus(int examH, int examM, int arrivalH, int arrivalM)
{
    int examTotalMin = examH * 60 + examM;
    int arrivalTotalMin = arrivalH * 60 + arrivalM;
    int diff = arrivalTotalMin - examTotalMin;
    
    if (diff > 0) {
        return "Late";
    } else if (diff >= -30) {
        return "On time";
    } else {
        return "Early";
    }
}

void showTimeDifference(int examH, int examM, int arrivalH, int arrivalM)
{
    int examTotalMin = examH * 60 + examM;
    int arrivalTotalMin = arrivalH * 60 + arrivalM;
    int diff = examTotalMin - arrivalTotalMin;
    
    int hrs = abs(diff) / 60;
    int mins = abs(diff) % 60;
    
    if (diff > 0) {
        if (hrs > 0) {
            cout << hrs << " hours and " << mins << " minutes before the start" << endl;
        } else {
            cout << mins << " minutes before the start" << endl;
        }
    } else {
        diff = abs(diff);
        hrs = diff / 60;
        mins = diff % 60;
        if (hrs > 0) {
            cout << hrs << " hours and " << mins << " minutes after the start" << endl;
        } else {
            cout << mins << " minutes after the start" << endl;
        }
    }
}