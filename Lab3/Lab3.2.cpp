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
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
                {
                //swap
                a[i] = a[i]+a[j];
                a[j] = a[i]-a[j];
                a[i] = a[i]-a[j];
            }
        }
    }

    cout <<endl<<"Sort array is " <<endl;
    for(int i=0; i<n; i++){
        cout << a[i]<<"  ";
    }


    return 0;
}
