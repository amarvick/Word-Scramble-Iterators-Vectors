#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{cout << "GUESS THE WORD!" << endl << endl;
    string guess;
    int retries = 0;
    
    vector<string> alex;
    alex.push_back("A");
    alex.push_back("l");
    alex.push_back("e");
    alex.push_back("x");
    string Alex = "Alex";
    vector<string>::iterator itea;
    
    vector<string> michael;
    michael.push_back("M");
    michael.push_back("i");
    michael.push_back("c");
    michael.push_back("h");
    michael.push_back("a");
    michael.push_back("e");
    michael.push_back("l");
    string Michael = "Michael";
    vector<string>::iterator item;
    
    vector<string> lorenzo;
    lorenzo.push_back("L");
    lorenzo.push_back("o");
    lorenzo.push_back("r");
    lorenzo.push_back("e");
    lorenzo.push_back("n");
    lorenzo.push_back("z");
    lorenzo.push_back("o");
    string Lorenzo = "Lorenzo";
    vector<string>::iterator itel;
    
    vector<string> nicholas;
    nicholas.push_back("N");
    nicholas.push_back("i");
    nicholas.push_back("c");
    nicholas.push_back("h");
    nicholas.push_back("o");
    nicholas.push_back("l");
    nicholas.push_back("a");
    nicholas.push_back("s");
    string Nicholas = "Nicholas";
    vector<string>::iterator iten;
    
    srand(static_cast<unsigned int>(time(0)));
    int rando = rand() % 4 + 1;
    
    if (rando == 1)
    {random_shuffle(alex.begin(), alex.end());
        cout << "The shuffle is: ";
        for (itea = alex.begin(); itea != alex.end(); ++itea)
        {cout << *itea;}
        cout << endl << endl;
        
        do
        {cout << "Guess: ";
            cin >> guess;
            if (guess != Alex)
            {++retries;
                cout << endl << "Guess again. For reference, the shuffle is: ";
                for (itea = alex.begin(); itea != alex.end(); ++itea)
                {cout << *itea;}
                cout << endl << endl;}
            else
            {cout << endl << "Correct!" << endl;}
        } while (guess != Alex);}
    
    else if (rando == 2)
    {random_shuffle(michael.begin(), michael.end());
        cout << "The shuffle is: ";
        for (item = michael.begin(); item != michael.end(); ++item)
        {cout << *item;}
        cout << endl << endl;
        
        do
        {cout << "Guess: ";
            cin >> guess;
            if (guess != Michael)
            {++retries;
                cout << endl << "Guess again. For reference, the shuffle is: ";
                for (item = michael.begin(); item != michael.end(); ++item)
                {cout << *item;}
                cout << endl << endl;}
            else
            {cout << endl << "Correct!" << endl;}
        } while (guess != Michael);}
    
    else if (rando == 3)
    {random_shuffle(lorenzo.begin(), lorenzo.end());
        cout << "The shuffle is: ";
        for (itel = lorenzo.begin(); itel != lorenzo.end(); ++itel)
        {cout << *itel;}
        cout << endl << endl;
        
        do
        {cout << "Guess: ";
            cin >> guess;
            if (guess != Lorenzo)
            {++retries;
                cout << endl << "Guess again. For reference, the shuffle is: ";
                for (itel = lorenzo.begin(); itel != lorenzo.end(); ++itel)
                {cout << *itel;}
                cout << endl << endl;}
            else
            {cout << endl << "Correct!" << endl;}
        } while (guess != Lorenzo);}
    
    else if (rando == 4)
    {random_shuffle(nicholas.begin(), nicholas.end());
        cout << "The shuffle is: ";
        for (iten = nicholas.begin(); iten != nicholas.end(); ++iten)
        {cout << *iten;}
        cout << endl << endl;
        
        do
        {cout << "Guess: ";
            cin >> guess;
            if (guess != Nicholas)
            {++retries;
                cout << endl << "Guess again. For reference, the shuffle is: ";
                for (iten = nicholas.begin(); iten != nicholas.end(); ++iten)
                {cout << *iten;}
                cout << endl << endl;}
            else
            {cout << endl << "Correct!" << endl;}
        } while (guess != Nicholas);}
    
    cout << endl << "Retries: " << retries << endl;
    
}