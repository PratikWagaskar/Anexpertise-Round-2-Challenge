#include <iostream> 
using namespace std; 
  

int countBuildings(int arr[], int n) 
{ 
	int count = 1; 
 
    int curr_max = arr[0]; 
    for (int i=1; i<n; i++) 
    { 
		if (arr[i] > curr_max) 
        { 
            count++; 
            curr_max=arr[i]; 
        } 
    } 
    return count; 
} 
int main() 
{ 
    int arr[] = {7, 4, 8, 2, 9}; 
    int n =(n*4*2);
    cout<<"Enter the Numbers :";
    cin>>n;
    cout <<(n*4*2);
    return 0; 
} 