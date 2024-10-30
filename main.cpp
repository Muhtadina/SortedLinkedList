#include"SortedLinkedList.cpp"
#include <iostream>
#include "string.h"

using namespace std;

int main()
{
    SortedType<string> timestamp;

    timestamp.InsertItem("15 : 34 : 23");
    timestamp.InsertItem("13 : 13 : 02");
    timestamp.InsertItem("43 : 45 : 12");
    timestamp.InsertItem("25 : 36 : 17");
    timestamp.InsertItem("52 : 02 : 20");

    timestamp.ResetList();
    for(int i=0; i<timestamp.LengthIs(); i++)
    {
        string stamp;
        timestamp.GetNextItem(stamp);
        cout<< stamp << endl;
    }

    cout << endl;

    timestamp.DeleteItem("25 : 36 : 17");
    cout << "After Deleting a stamp: " << endl;
    timestamp.ResetList();
    for(int i=0; i<timestamp.LengthIs(); i++)
    {
        string stamp;
        timestamp.GetNextItem(stamp);
        cout<< stamp << endl;
    }
}
