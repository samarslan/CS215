#include <iostream> 
#include <string> 
using namespace std; 

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            // Perform manual swap without using swap function
            string temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() 
{ 
    const int NUM_NAMES = 20; 
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", 
                           "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                           "Taylor, Terri", "Johnson, Jill", 
                           "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                           "James, Jean", "Weaver, Jim", "Pore, Bob",  
                           "Rutherford, Greg", "Javens, Renee",   
                           "Harrison, Rose", "Setzer, Cathy",  
                           "Pike, Gordon", "Holland, Beth" };  

    selectionSort(names, NUM_NAMES);

    cout << "Sorted names:" << endl;
    for (int i = 0; i < NUM_NAMES; i++) {
        cout << names[i] << endl;
    }
    
    return 0; 
} 
