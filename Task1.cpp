#include<iostream>
using namespace std;

string condition(string temp, string humidity);

int main()
{
    string temp, humidity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (humid or dry): ";
    cin >> humidity;
    string result = condition(temp, humidity);
    cout << "Mutaf, You should " << result << endl;
    return 0;
}

string condition(string temp, string humidity)
{
    if (temp == "warm" && humidity == "dry"){
        return "play tennis";
    }
    else if (temp == "warm" && humidity == "humid"){
        return "swim";
    }
    else if (temp == "cold" && humidity == "dry"){
        return "play Basketball";
    }
    else if (temp == "cold" && humidity == "humid"){
        return "play tennis";
    }
}