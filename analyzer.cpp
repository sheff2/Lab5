//
// Created by Shaun Heffernan on 10/4/24.
//
#include <iostream>

#include "StringData.h"
//works
int binarySearch(std::vector<std::string> arr, std::string target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

    }
    return(-1);
}


int linearSearch(std::vector<std::string> arr, std::string target) {
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return(-1);

}



int main() {

    std::vector<std::string> stringData = getStringData();
    long long startTimeLinear = systemTimeNanoseconds();
    int linearAnswer = linearSearch(stringData, "mzzzz");
    long long endTimeLinear = systemTimeNanoseconds();
    long long differenceLinear = endTimeLinear - startTimeLinear;
    std::string differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding mzzzz: Linear Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(linearAnswer) << "\n";

    startTimeLinear = systemTimeNanoseconds();
    int binaryAnswer = binarySearch(stringData, "mzzzz");
    endTimeLinear = systemTimeNanoseconds();
    differenceLinear = endTimeLinear - startTimeLinear;
    differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding mzzzz: Binary Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(binaryAnswer) << "\n\n";






    startTimeLinear = systemTimeNanoseconds();
    linearAnswer = linearSearch(stringData, "aaaaa");
    endTimeLinear = systemTimeNanoseconds();
    differenceLinear = endTimeLinear - startTimeLinear;
    differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding aaaaa: Linear Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(linearAnswer) << "\n";

    startTimeLinear = systemTimeNanoseconds();
    binaryAnswer = binarySearch(stringData, "aaaaa");
    endTimeLinear = systemTimeNanoseconds();
    differenceLinear = endTimeLinear - startTimeLinear;
    differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding aaaaa: Binary Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(binaryAnswer) << "\n\n";




    startTimeLinear = systemTimeNanoseconds();
    linearAnswer = linearSearch(stringData, "not_here");
    endTimeLinear = systemTimeNanoseconds();
    differenceLinear = endTimeLinear - startTimeLinear;
    differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding not_here: Linear Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(linearAnswer) << "\n";

    startTimeLinear = systemTimeNanoseconds();
    binaryAnswer = binarySearch(stringData, "not_here");
    endTimeLinear = systemTimeNanoseconds();
    differenceLinear = endTimeLinear - startTimeLinear;
    differenceStrLinear = std::to_string(differenceLinear);
    std::cout << "Finding not_here: Binary Search time: " << differenceStrLinear << " nanoseconds, Index found: " << std::to_string(binaryAnswer) << "\n\n";

    //std::cout << std::to_string(binarySearch(stringData, "mzzzz")) << std::endl;


    return 0;
}






