#include<iostream>
#include<string>
using namespace std;

float calculateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksScience, float marksBiology);
string calculateGrade(float average);

int main()
{
    float marksEnglish, marksMath, marksChemistry, marksScience, marksBiology;
    float average;
    string result;

    average = calculateAverage(marksEnglish, marksMath, marksChemistry, marksScience, marksBiology);
    cout << "Your average of subjects is: " << average << endl;
    
    result = calculateGrade(average);
    cout << "Your Grade is: " << result << endl;

    return 0;
}

float calculateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksScience, float marksBiology)
{
    cout << "Enter the marks of English: ";
    cin >> marksEnglish;
    cout << "Enter the marks of Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter the marks of Math: ";
    cin >> marksMath;
    cout << "Enter the marks of Science: ";
    cin >> marksScience;
    cout << "Enter the marks of Biology: ";
    cin >> marksBiology;

    float sum = marksEnglish + marksMath + marksChemistry + marksScience + marksBiology;
    float average = sum / 5;
    return average;
}

string calculateGrade(float average)
{
    if (average >= 90 && average <= 100) {
        return "A+";
    } 
    else if (average >= 80 && average < 90) {
        return "A";
    } 
    else if (average >= 70 && average < 80) {
        return "B+";
    } 
    else if (average >= 60 && average < 70) {
        return "B";
    } 
    else if (average >= 50 && average < 60) {
        return "C";
    } 
    else if (average >= 40 && average < 50) {
        return "D";
    } 
    else {
        return "F";
    }
}
