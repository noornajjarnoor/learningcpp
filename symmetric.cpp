#include <iostream>
using namespace std;
int symmetric(int length,int arr[]){
    int sum{0};
    int j{0};
    int h{0};
    for (int i=0;i<length/2;i++){
        h=i;
        j=length-i-1;
        i=h;
        if (arr[i]==arr[j]){
            sum=sum+1;
        }
    }
    return sum;
}
int main(){
    cout << "inter the array size";
    int length{0};
    cin >>length;
    int arr[length];
    for (int i=0;i<length ;i++){
        cin >> arr[i];
    }
    if (symmetric(length,arr)==length/2){
        cout <<"the array is symmetric";
    }
    else {
        cout << "nothing";
    }
    
    
}