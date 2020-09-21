#include "cpplib.h"
#include "limits"

// Question 1
// Please create your functions here.
// You should write 4 functions

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
void CPPLib::SwapByRefernce(int &input1, int &input2){
    // Please fill up this function.
}
void CPPLib::SwapByPointer(int *input1, int *input2){
    // Please fill up this function.
}

// Question 4
void CPPLib::UniqeVectorNotBySet(std::vector<int> &input){
    // Please fill up this function.
}
void CPPLib::UniqeVectorBySet(std::vector<int> &input){
    // Please fill up this function.
}
void CPPLib::ReverseVector(std::vector<int> &input){
    // Please fill up this function.
}
void CPPLib::OddVector(std::vector<int> &input){
    // Please fill up this function.
}
std::vector<int> CPPLib::UnionVectors(std::vector<int> &input1, std::vector<int> &input2){
    // Please fill up this function.
}

// Question 5

//q5_0

// implement constructor that takes 2 numbers as input parameters

// implement a copy constructor



//q5_1 complex++

//q5_2 --complex

//q5_3 complex1 > complex2

//q5_4 complex * (an float number)

//q5_5 complex1 += complex2

//q5_6 complex2 -= complex2

// Question 6
bool CPPLib::canBePalindrome(const std::string &str)
{
    // Please fill up this function.
    return true;
}

// Question 7 
std::map<char,char> CPPLib::Mappable(const std::string& from, const std::string& to)
{
    // Please fill up this function.
}

// Question 8
void CPPLib::kthPeek(std::vector<int> &input, int k)
{
    // Please fill up this function.
}
