#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <iostream>

using namespace std;
/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q1
  // Please create your functions here.

  //q2
  std::set<std::set<int>> twoSum(std::vector<int>& input, int sum);

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

//q3
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) { }
};

class SinglyLinkedList {
public:
  // default constructor
  SinglyLinkedList();

  //constructor creates a cyclic or acyclic linked list based on the value of i
  SinglyLinkedList(vector<int> &input, int i);
  
  //destructor, cleans up
  ~SinglyLinkedList();

  bool empty();//checks if empty

  int size(); //returns size

  void push_back(int i);//inserts at the back

  void push_front(int i);//inserts at the front

  void insert_after(ListNode *p, int i);//inserts value i after p

  void erase(ListNode *p);//erases node p

  void pop_front();//remove the first item

  void pop_back();//remove the last item

  int back();//returns the value of last item

  int front();//returns the value of first item

  ListNode* GetBackPointer();//returns the pointer to the last item

  ListNode* GetIthPointer(int i);//returns pointer to ith element

  void print();//prints the list: ex. Empty list: { }. List with Items: {1, 2, 3}

  ListNode *head_;//Pointer to the first element

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
