#include <iostream>

using namespace std;


int main()
{
    //variables declared before hand
    char chOptions = 0;
    int inBatteryLife = '\0';
    int inUserMark = 0; 
    int inTotalMark = 0;
    double dblUserPercetage = 0.0;

    
    //User manu prompt and selection
    cout << "************ Choose an option below: (Type 'A' or 'B') ************ " << endl;
    cout << "A - Battery Status Feedback Message" << endl << "B - Semester Mark Feedback Message " << endl;
    cin >> chOptions; 
    chOptions = toupper(chOptions); //user character is converted to uppercase and restored

    // User option process and calculation
    switch (chOptions)       
    {
    case 'A' :  // option A: checks battery life and assigns message

        cout << "Enter your car battery life (0-100): ";    // gets battery level
        cin >> inBatteryLife;

        //evaluation and assigning sutable message for feedback
        if (inBatteryLife >= 0 && inBatteryLife <=15){
            cout << "Charging required! You may get stuck on the road." << endl;

        }

        else if( inBatteryLife > 15 && inBatteryLife <= 35){
            cout << "Barely enough power remaining. Use the shortest route." << endl;

        }

        else if(inBatteryLife > 35 && inBatteryLife <= 75){
            cout << "There should be enough battery power to last you the entire trip." << endl;
        }
        else if (inBatteryLife > 75 && inBatteryLife <= 100){
            cout << "The battery is sufficiently charged. Happy driving!" << endl;
        }
        else{
            cerr << "Please enter a valid number." << endl;  //Invalid battery level input feedback
        }
        break;

    case 'B': //Option B: Checks & calculates users mark and assign a message

        cout << "Enter your Semester Test mark: ";  // Getting user mark
        cin >> inUserMark;

        cout << "Enter the total possible mark for the Semester Test: ";    //Getting total test mark
        cin >> inTotalMark;
        
        dblUserPercetage = static_cast<double>(inUserMark)  / inTotalMark * 100;  //convert to double and 

        (dblUserPercetage < 50 ) ? cout << "You need to invest more time in your schoolwork." : cout << "Keep it up" << endl;

    break;
    default:
        cerr << "############# Please enter either 'A' or 'B' #############" << endl;
    }



  return 0;
}