//Rony Ahmmed [2002035]
//Binary Searching
#include<iostream>
using namespace std;

int main(){
    int roll[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    int searchKey = 100;
    int low = 0, high = 10, mid;

    while(low < high){
        mid = low + (high-low)/2;
        cout << mid <<" mid\n";
        if(searchKey == roll[mid]){
            cout << "Here";
            break;
        }else if(searchKey > roll[mid]){
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    if(low >= high){
        cout << "Not Found";
    }


    return 0;
}

