#include <iostream> 

using namespace std; 

int main()
{
    int a[10];
    // what this does is it has all the garbage values 
    // for(int i = 0 ; i <10 ; i++){
    //     cout<<a[i]<<endl;
    // }
    // to not get the initial garbage value we can initialize with the initialization list 

    int b[10]= {0};
    // this initialize the array with first element 0 and all the other element 0 
    int c[10]= {1,2,3};
    // this initialize the array with the first 3 element with the 1 2 3 and all the other with zero 
    for (int i = 0 ; i <9 ; i++){
        cout<<c[i]<<endl;
    }
    
}