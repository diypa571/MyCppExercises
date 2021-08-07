// Searching for elements exist inside a vector.
#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
  
  // ALt 1. Using the count function)
    vector<int> v = { 0, 1, 2, 3, 4, 5};
    int KeyWord = 6;
    // the count function
    if (count(v.begin(), v.end(), KeyWord)) {
       cout << "Element with the same KeyWord is found...";
    }
    else {
       cout << "No element is found";
    }
  
  
  
  // ALt 2. Using the find function
 vector<int> v = { 1, 2, 3, 4, 5, 6 };
    int key = 5;
      // finde()
    if (std::find(v.begin(), v.end(), key) != v.end()) {
       cout << "Element found";
    }
    else {
       cout << "Element not found";
    }


  
  
  /*
  More options
  find_if function ();
  any_of function();
  none_of function();
    */
  
  
  
 
    return 0;
}
