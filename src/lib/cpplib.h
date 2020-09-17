#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q1
  // Please create your functions here.
  //q3
  void SwapByRefernce(int &input1, int &input2);
  void SwapByPointer(int *input1, int *input2);

  //q4
  void UniqeVectorNotBySet(std::vector<int> &input);
  void UniqeVectorBySet(std::vector<int> &input);
  void ReverseVector(std::vector<int> &input);
  void OddVector(std::vector<int> &input);
  std::vector<int> UnionVectors(std::vector<int> &input1, std::vector<int> &input2);

  //q5
  void ReverseString(std::string &input);
  std::vector<int> ReverseVector_1(std::vector<int> input);
  void ToLower(std::string& input);

  //q6 
  bool canBePalindrome(const std::string &str);

  //q7
  std::map<char, char> Mappable(const std::string& from, const std::string& to);

  //q8
  void kthPeek(std::vector<int> &input, int k);

  private : 
};

#endif
