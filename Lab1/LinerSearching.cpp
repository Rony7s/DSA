//Rony Ahmmed EdTech-BDU
//Liner Searching
#include<iostream>
using namespace std;

int main(){
    int roll[10] = {22,33,55,44,77,66,88,11,99, 7};

    int searchKey = 7;

    int i;
    for(i=0; i<10; i++){
        if(searchKey == roll[i]){
            break;
        }
    }

    if(i<10){
        printf("Here, The %d value index is %d\n", searchKey,  i);
    }else{
        printf("Not Found");
    }

    return 0;
}
