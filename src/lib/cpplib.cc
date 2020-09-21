#include "cpplib.h"
#include "limits"

// Question 2
std::set<std::set<int>> twoSum(std::vector<int>& input, int sum){
    std::set<std::set<int>> res = {};
    std::unordered_map<int, int> hashmap;
    for(auto i: input){
        if(hashmap.find(sum-i) != hashmap.end()){
            hashmap[sum-i] = i;
            std::set<int> temp = {i, sum-i};
            res.insert(temp);
        }
        else{
            hashmap[sum-i] = 0;
        }
    }
    return res;
}

// Question 3
//one example
SinglyLinkedList::SinglyLinkedList() {
    //write you code
}
//move on for other methods

// Question 4



// Question 5

//q5_0

// implement constructor that takes 2 numbers as input parameters

// implement a copy constructor

// implement an assignment operator


//q5_1 complex++

//q5_2 --complex

//q5_3 complex1 > complex2

//q5_4 complex * (an float number)

//q5_5 complex1 += complex2

//q5_6 complex2 -= complex2

// Question 6

