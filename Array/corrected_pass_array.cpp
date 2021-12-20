/*
A simple function for passing the array 
*/


#include <iostream> 
using namespace std ;


void print_array(int arr[] , int n ){
    cout<<"In Function "<<sizeof(arr)<<endl;
    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<endl;
        // what happens here is that the address is passed and the size of that is 8 
        // so 8/4 = 2 so only 2 elements are printed 
    }

    //print 8 cause in the fuction we only have the addeess of the array 

}

int main()
{
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(int);
    cout<<"in Main "<<sizeof(arr)<<endl;
    // prints 24 cause in the main we have the array itself 
        for(int i = 0; i <n ; i++){
        cout<<arr[i]<<endl;
        // meanwhile here the value of n is 6*4 / 4 which is 6 so all the 6 elements are printed
    }
    print_array(arr, n );

}