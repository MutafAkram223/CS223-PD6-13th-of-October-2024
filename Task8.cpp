#include <iostream>
#include <cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int home_weekends);

int main() {
    string yearType;
    int holidays, home_weekends;
    
    cout << "Enter year type (leap/normal): ";
    cin >> yearType;
    
    cout << "Enter no of holidays (excluding weekends): ";
    cin >> holidays;
    
    cout << "Enter no of weekends Vladimir travels to home: ";
    cin >> home_weekends;
    
    int totalGames = calculateVolleyballGames(yearType, holidays, home_weekends);
    cout << "Total volleyball games Vladimir played: " << totalGames << endl;
}

int calculateVolleyballGames(string yearType, int holidays, int home_weekends) {
    int totalWeekends = 48;
    int sofiaWeekends = totalWeekends - home_weekends;
    int free_sofia_weekends = floor((3.0 * sofiaWeekends) / 4);
    int holidayVolleyball = floor((2.0 * holidays) / 3);
    int totalVolleyball = free_sofia_weekends + home_weekends + holidayVolleyball;
    
    if (yearType == "leap") {
        totalVolleyball = floor(totalVolleyball * 1.15);
    }
    
    return totalVolleyball;
}