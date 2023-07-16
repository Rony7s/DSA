//Rony Ahmmed [2002035]
#include<iostream>
using namespace std;

int main()
{

    int marks[] = {1,3,2,4,5,6,9,8,7,0};

    int arrSize = sizeof(marks)/sizeof(marks[0]);

    int n = 3; // n index will be delete

    int i;

    for(i=n; i<arrSize-1; i++){
        marks[i]=marks[i+1];
    }


    for(i=0; i<arrSize-1; i++){
        cout << marks[i] << endl;
    }

    return 0;
}
