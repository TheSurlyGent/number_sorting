//Eduardo Aparicio
//PID:5645176
#include <iostream>
#include <chrono>
#include <fstream>
#include "eduardoaparicio_bubblesort.h"
#include "eduardoaparicio_insertionsort.h"
#include "eduardoaparicio_selectionsort.h"
#include "eduardoaparicio_displayarray.h"

using namespace std;

int main()
{

    //int arr[] = { 78,15,14,54,1,2544,7,98,423,65,91,25 };
    
    string file1 = "1000Random.txt";
    string file2 = "1000Reverse.txt";
    string file3 = "1000Sorted.txt";
    string file4 = "4000Random.txt";
    string file5 = "4000Reverse.txt";
    string file6 = "4000Sorted.txt";
    string file7 = "8000Random.txt";//missing//found it! it was mislabelled as 9000.txt 
    string file8 = "8000Reverse.txt";
    string file9 = "8000Sorted.txt";
    string file10 = "10000Random.txt";
    string file11 = "10000Reverse.txt";
    string file12 = "10000Sorted.txt";
    string file13 = "40000Random.txt";
    string file14 = "40000Reverse.txt";
    string file15 = "40000Sorted.txt";
    string file16 = "80000Random.txt";
    string file17 = "80000Reverse.txt";
    string file18 = "80000Sorted.txt";
    string file19 = "100000Random.txt";
    string file20 = "100000Reverse.txt";
    string file21 = "100000Sorted.txt";
    string file22 = "400000Random.txt";//switched to int* arr = new int[max];//array on stack finally broke here
    string file23 = "400000Reverse.txt";
    string file24 = "400000Sorted.txt";
    string file25 = "800000Random.txt";
    string file26 = "800000Reverse.txt";
    string file27 = "1000000Sorted.txt";
    string file28 = "1000000Random.txt";
    string file29 = "1000000Reverse.txt";
    string file30 = "1000000Sorted.txt";




    ifstream myFile(file1);
    static const int max = 1000;//change max according to file size

    int* arr = new int[max]; // prev int arr[max] = {}

    if (myFile.fail())
    {
        cout << "wasnt found\n";
        return 1;
    }
    else if(myFile.is_open())
    {
        for (int i = 0; i < max; i++)
        {
            myFile >> arr[i];
        }
    }
    myFile.close();
    
 
    int size = max;//previously { sizeof(arr) / sizeof(arr[0]) };

    cout << "Original Array\n\n";
   // cout << "Original Array takes too long to print (can uncomment) \n\n"; // when sorting the bigger files printing array before takes too long
   displayArray(arr, size);
    cout << endl;

    cout << "Time begin\n";
    auto start = chrono::steady_clock::now();

    
    SelectionSort(arr, size);
    //BubbleSort(arr, size);
    //InsertionSort(arr, size);

    auto end = chrono::steady_clock::now();
    cout << "Time end\n\n";
    double elapsed_time = double(chrono::duration_cast <chrono::nanoseconds>(end - start).count());
    cout << "Elapsed time in miliseconds: " << elapsed_time / 1e6 << endl; // 
    
    cout << "Sorted Array\n\n";

    displayArray(arr, size);

    cout << "Elapsed time in miliseconds: " << elapsed_time / 1e6 << endl;
    
}

