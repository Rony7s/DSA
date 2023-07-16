//Rony Ahmmed [2002035]
#include<iostream>
using namespace std;

int main()
{
    int marks[100],n1;
 cout <<" PLease Enter elements of array \n";
 cin>>n1;
 cout <<" PLease Enter elements of array \n";
    for(int x=0; x<n1; x++)
    {
        cin >> marks[x];
    }


    int item, k;  // n position
    cout << "Enter Replace Value and index\n";
    cin >> item;
    cin >> k;



    int i;

    for(i=n1; i>=k; i--)
    {
        marks[i]=marks[i-1];
    }
    marks[i]=item;
cout << "Final Array\n";
    for(i=0; i<= n1; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}
