// Time complexities for hashmaps (unordered_map):
// Insertion, Updation and Deletion == O(1)
// Search == avg - O(1), worst - O(n)

// We are using unordered_map because map has higher time complexities than unordered_map.
// In unordered_map the pairs inserted have no order (even if we insert in a certain order, it doesn't matter).

#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string, int> m1; // key, value types can be anything

    // Insertion & Updation
    m1.insert({"three",2}); // key = "three" and value = 2 ... this takes only one argument of pair type
    m1.insert_or_assign("three", 3); // this will insert if key is already not available and update if available ... this takes three arguments of key and then value
    m1["nine"] = 9; // same as insert_or_assign()

    // Searching
    cout << m1.at("three") << endl;
    cout << m1["three"] << endl;
    cout << m1["zero"] << endl; // Since the key "zero" is not already present -> a new key "zero" will be made with value = 0
    cout << m1.at("zero") << endl; // Unlike m1["zero"] this doesn't make a new key if not already present, so if you put this line before line-16 then it will give an error

    // Check if a key is present or not
    cout << m1.count("three") << endl; // will give 1
    cout << m1.count("bruh") << endl; // will give 0
    if(m1.count("bruh")){
        cout << "This can also be used with conditional statements." << endl;
    }

    // Deletion/Erase
    m1.erase("zero"); // Deletes the key "zero" and its value from hashmap
    m1.erase("bruh"); // Does nothing since bruh is not present in hashmap

    // Traversing
    for(auto i:m1){ // Using for loop ... i will pick pairs from hashmap
        cout << i.first << " : " << i.second << endl;
    }
    unordered_map<string, int> :: iterator i = m1.begin(); // Using iterator ... i will be a pointer to pairs in hashmap
    while(i != m1.end()){
        cout << i->first << " : " << i->second << endl;
        i++;
    }


    return 0;
}