#include <iostream>

using namespace std;
void insertionSort(int arr[], int length);
void printArray(int array[], int size);
int main() 
{
    int array[6] = {5, 1, 6, 2, 4, 3};
    insertionSort(array, 6);
    return 0;
}

void insertionSort(int arr[], int length) 
{
    int i, j, key;
    for (i = 1; i < length; i++) 
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] >key) 
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j +1] = key;
        
    }
    cout << "Sorted Array: ";
    printArray(arr, length);
}
void printArray(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}
//  ..........................................................................................//

//pseudo code

//   INSERTION-SORT(A)
//    for i = 1 to n
//    	key ← A [i]
//     	j ← i – 1
//   	 while j > = 0 and A[j] > key
//    		A[j+1] ← A[j]
//    		j ← j – 1
//    	End while 
//    	A[j+1] ← key
//   End for 

//Algorithms

// Algorithm 
/*

To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, 
compare it to the elements before. Move the greater elements 
one position up to make space for the swapped element. 

*/


// Worst Case Time Complexity [ Big-O ]: O(n2)

// Best Case Time Complexity [Big-omega]: O(n)

// Average Time Complexity [Big-theta]: O(n2)