#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <iostream>
/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q1
  // Please create your functions here.

  //q2
  std::set<std::set<int>> twoSum(std::vector<int>& input, int sum);
  //q3
  void SwapByRefernce(int &input1, int &input2);
  void SwapByPointer(int *input1, int *input2);

  //q4
  void UniqeVectorNotBySet(std::vector<int> &input);
  void UniqeVectorBySet(std::vector<int> &input);
  void ReverseVector(std::vector<int> &input);
  void OddVector(std::vector<int> &input);
  std::vector<int> UnionVectors(std::vector<int> &input1, std::vector<int> &input2);

  


  //q6 
  bool canBePalindrome(const std::string &str);

  //q7
  std::map<char, char> Mappable(const std::string& from, const std::string& to);

  //q8
  void kthPeek(std::vector<int> &input, int k);

  private : 
};

//q5
class Complex{
 public:

  // default constructor
  Complex():real(0), ima(0){};
  // implement constructor that takes 2 numbers as input parameters

  // implement a copy constructor

  // implement an assignment operator
  
  // define real and imaginary part
  float real;
  float ima;

  // below here, we assume complex1, complex2 are instances of Complex.
  // define your functions to enable operator overloading.

  //q5_1 complex++

  //q5_2 --complex

  //q5_3 complex1 > complex2

  //q5_4 complex * (an float number)

  //q5_5 complex1 += complex2

  //q5_6 complex2 += (an float number)
  
};

#endif
