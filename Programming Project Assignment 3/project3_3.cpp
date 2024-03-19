#include <iostream> 
#include <string> 
using namespace std; 

int binarySearch(const string arr[], int l, int r, const string& x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            l = mid + 1;

        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }

    // If we reach here, then the element was not present
    return -1;
}

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

string searchName = "Holland, Beth";
    int index = binarySearch(names, 0, NUM_NAMES - 1, searchName);

    // Print the result
    if (index != -1)
        cout << "Name found at index: " << index << endl;
    else
        cout << "Name not found" << endl;
    
    return 0; 
} 
