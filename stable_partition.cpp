#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define f(i,a,b) for ( int i = a; i < b; i++)




//                  Syntax


//stable_partition(BiIter start, BiIter end, UnPred pfn);
// start:  the range of elements to reorder
// end:  the range of elements to reorder
// pfn:  User-defined predicate function object that 
// defines the condition to be satisfied if an element is to be classified.
// A predicate takes single argument and returns true or false.
// Return Value: 
// Returns an iterator to the beginning of the elements 
// for which the predicate is false.

//                  example 1

int main(){
    vector<int> v{ 6, 9, 0, 1, 2, 7, 5, 8, 0 };
    stable_partition(v.begin(), v.end(), [](int n) {return n>0; });
    for (int n : v) {
        cout << n << ' ';
    }
    cout << '\n';
    return 0;
}


//                      example 2

// bool odd(int i) { return (i % 2) == 1; }
  
// int main()
// {
//     std::vector<int> vct;
  
//     for (int i = 1; i < 10; ++i)
//         vct.push_back(i); // 1 2 3 4 5 6 7 8 9
  
//     std::vector<int>::iterator bound;
//     bound = std::stable_partition(vct.begin(), vct.end(), odd);
  
//     std::cout << "odd numbers:";
//     for (std::vector<int>::iterator it = vct.begin(); it != bound; ++it)
//         std::cout << ' ' << *it;
//     std::cout << '\n';
  
//     std::cout << "evennumbers:";
//     for (std::vector<int>::iterator it = bound; it != vct.end(); ++it)
//         std::cout << ' ' << *it;
//     std::cout << '\n';
  
//     return 0;
// }