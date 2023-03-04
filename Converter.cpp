#include <iostream>

using namespace std;

int main()
{
    //Distance traveled each day in (Km)
    
    int int_mon = 83;
    int int_tue = 12;
    int int_wed = 33;
    int int_thu = 49;
    int int_fri = 76;
    int int_sat = 52;
    int int_sun = 58;
    
    //Days of the week traveled
    
    const string str_mon = "Monday";
    const string str_tue = "Tuesday";
    const string str_wed = "Wednesday";
    const string str_thu = "Thursday";
    const string str_fri = "Friday";
    const string str_sat = "Saturday";
    const string str_sun = "Sunday";

    //avarage distance traveled in km :- add all / no of days
    
    double average_distance = (int_mon + int_tue + int_wed + int_thu + int_fri + int_sat + int_sun) / 6;
    
    // Convertion factor form km - miles

    const double conversion_factor = 0.621371;

    // converting from km to miles

    double average_miles = average_distance  * conversion_factor;

    //out putting the weekly distance covered

    cout << "**********Weekly travelled distance in (km)**********************" << endl<<
        int_mon << "\t" <<
        int_tue << "\t" <<
        int_wed << "\t" <<
        int_thu << "\t" <<
        int_fri << "\t" <<
        int_sat << "\t" <<
        int_sun << endl << endl;

    cout <<"**************Average distance in (km)**************" << endl 
        << average_distance << " km" << endl << endl;

    cout << "**************Average distance in (miles)**************" << endl 
        <<average_miles << " miles" << endl << endl;

    return 0;
}

