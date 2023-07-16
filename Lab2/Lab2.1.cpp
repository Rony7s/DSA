//Rony Ahmmed [2002035]
#include<iostream>
using namespace std;

int main()
{

    int marks[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter values Roll %d \n", i+1);
        scanf("%d", &marks[i]);

    }

    for(i=0; i<=4; i++)
    {
        if(i%2==0)
        {
            printf("Enter values Roll %d and marks %d\n", i+1, marks[i]+1);
        }
        else
        {
            printf("Enter values Roll %d and marks %d\n", i+1, marks[i]+2);
        }


    }

    return 0;
}
