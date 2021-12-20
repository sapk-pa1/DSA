#include <iostream>
using namespace std ;


int linear_search(int arr[], int n, int k ){
    for (int i = 0; i<n; i++)
    {
        if(arr[i]==k){
            return i;
        }
    }
    return 101;

}

int main()
{
    int arr[] = {11, 16,17, 19 ,121, 141,963};
    int key = 121;
    int result = linear_search(arr, sizeof(arr)/sizeof(int), key);
    if(result!=101){
    cout<<"The Index of the Key "<<key<<" is "<<result;
    }
    else {
        cout<<key<<" is not Found in the array "<<endl; 
    }
    return 0;
}