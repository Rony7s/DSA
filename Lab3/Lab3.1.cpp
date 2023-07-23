//Rony Ahmmed [2002035]
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter Array Size: " <<endl;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cout <<"Enter element of index " << i<<endl;
        cin >> a[i];
    }

    cout <<"Main array is " <<endl;
    for(int i=0; i<n; i++){
        cout << a[i]<<"  ";
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1])
                {
                //swap
                a[j] = a[j]+a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j]-a[j+1];
            }
        }
    }

    cout <<endl<<"Sort array is " <<endl;
    for(int i=0; i<n; i++){
        cout << a[i]<<"  ";
    }


    return 0;
}
