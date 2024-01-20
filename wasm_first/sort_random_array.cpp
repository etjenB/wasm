#include <iostream>
#include <stdlib.h>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

int main(){

    srand(time(NULL));

    auto start = chrono::high_resolution_clock::now();

    const int len = 10000000;
    vector<int> arr(len);
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % len;
    }
    
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Array generated in " << duration << " ms" << endl;

    start = chrono::high_resolution_clock::now();
    
    sort(arr.begin(), arr.end());

    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Array sorted in " << duration << " ms" << endl;

    return 0;
}