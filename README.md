
# HW3 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For submission, please push your answers to Github before the deadline.
- Deadline: Monday, September 28st by 23:59 pm
- Total: 130 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Please compare pros and cons of the following options:

- Passing parameters by value
- Passing parameters using pointers
- Passing parameters using references
- Passing parameters using const references

Please mention when each item is preferred.

Answer:

## Question 2 (20 Points. Easy)

Given a vector of integer *input*, and an integer *sum*, return a set with some inner sets, which are the numbers in *input* such that they can add up to sum. Function is defined as ```std::set<std::set<int>> twoSum(std::vector<int>& input, int sum)```

- you may assume the vector input doesn't contain duplicated numbers.
- you can only use numbers in vector once.
- if there is no answer, the output should return an empty set.
- you may return **all** results in the input vector if there are multiple answers.
- Hint: you may try unordered_map.
Examples:

- input = {2,3,4,5}, sum = 7, output = {{2,5},{3,4}}
- input = {2,3,-2,5,0}, sum = 0, output = {{2,-2}}
- input = {1,5,4,10}, sum = 200, output = {}

Write several tests using GTest for your function in [tests/q2_student_test.cc](tests/q2_student_test.cc).
Please create your test cases and run the following command to verify the functionality of your program.
Please analyze the time complexity of your implementation.
```
bazel test tests:q2_student_test
```

Answer:

## Question 3 (50 Points. Medium)

Implement the following class for a Linked List of integer values in your [cpplib.cc](src/lib/cpplib.cc) file.

```c++
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
  //if i is negative or greater than input size, the last item's next is nullptr
  //else creates a linked list out of vector "input" and connects the last item's next to i(th) item in the list
  SinglyLinkedList(vector<int> &input, int i);
  
  ~SinglyLinkedList(); //destructor, cleans up

  bool empty();//checks if empty

  int size(); //returns size

  void push_back(int i);//inserts at the back

  void push_front(int i);//inserts at the front

  void insert_after(ListNode* p, int i);//inserts value i after p

  void erase(ListNode* p);//erases node p

  void pop_front();//remove the first item

  void pop_back();//remove the last item

  ListNode* GetBackPointer();//returns the pointer to the last item

  ListNode* GetIthPointer(int i);//returns pointer to ith element

  void reverse(); // reverse the linked list in-place

  void print();//prints the list: ex. Empty list: { }. List with Items: {1, 2, 3}

  ListNode *head_;//Pointer to the first element

};
```

You can assume that the Linked List is **acyclic** except for the constructor ```SinglyLinkedList(vector<int> &input, int i);```.

All functions except for print() require a GTest.

Write several tests using GTest for your function in [tests/q3_student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.

Please analyze the time complexity of each function.

```c++
bazel test tests:q3_student_test
```

Answer:

## Question 4 (10 Points. Easy)

Write 2 classes to practice how to use the constructor, copy constructor, assign operators and destructor and compare the deep copy with shallow copy.

Both of the Student_shallow and Student_deep has one member integer pointer id.

- Student_shallow
  - Write a **default constructor** to initialize id to 0
  - Write a **parameterized constructor** to initialize id
  - Write a **destructor** to print "Delete Student_shallow!"

- Student_deep
  - Write a **default constructor** to initialize id to 0
  - Write a **parameterized constructor** to initialize id
  - Write a **destructor** to print "Delete Student_deep!"
  - Write a **copy constructor** with **deep copy**
  - Write a **assign operators** with **deep copy** 

```c++
class Student_shallow
{
public:
    int* id;
    Student_shallow();
    Student_shallow(int);
    ~Student_shallow();
};
class Student_deep
{
public:
    int* id;
    Student_deep();
    Student_deep(int);
    ~Student_deep();
    Student_deep(const Student_deep&);
    Student_deep& operator=(const Student_deep&);
};
```

Eaxmple:
```
Student_shallow a;
Student_shallow b = a;
Student_shallow c;
c = a;
cout << *a.id << *b.id << *c.id << endl;
*c.id = 1;
cout << *a.id << *b.id << *c.id << endl;

Student_deep a;
Student_deep b = a;
Student_deep c;
c = a;
cout << *a.id << *b.id << *c.id << endl;
*c.id = 1;
cout << *a.id << *b.id << *c.id << endl;
```
Exepcted output:
```
000
111
000
001
Delete Student_deep!
Delete Student_deep!
Delete Student_deep!
Delete Student_shallow!
Delete Student_shallow!
Delete Student_shallow!
```

Write several tests using GTest for your function in [tests/q4student_test.cc](tests/q4_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q4_student_test
```

## Question 5 (20 Points. Medium)
Write a class to implement how complex number works in mathematics. A complex number can be expressed 
as **a+bi**, where a and b are real numbers. You are given an incomplete class `Complex`
```c++
class Complex{
 public:

  Complex():real(0), ima(0){};
  float real;
  float ima;
```
Tasks:
- implement a constructor that takes the initial real and imaginary number as 2 parameters.
- implement a copy constructor.
- implement an assignment constructor.
- the class will support '++' (as postfix) and '--' (as prefix) operators.
  - `complex++` should increase the real part by 1. 
  - `--complex` should decrease the real part by 1.
    - Example: `c=Complex(1,2); c++;`, *c=2+2i*
    - Example: `c=Complex(1,2); --c;`, *c=0+2i*
- the class will support '>' operator, which return a boolean data:
  - if both real and imaginary part of left hand side is larger than the right hand side, the answer will be true, otherwise, the answer is false.
    - Example: (1+2i) > (0+3i) -> *false*
- the class will support '*' operator, which multiplies a real number:
  - the function returns a Complex object, which is multiplied both the real and imaginary parts.
    - Example: `c=Complex(1,2); d=Complex(); d=c*2;`, *d=2+4i*
- the class will support '+=' operator on either float number and Complex object:
  - data type before '+=' must be a Complex object.
    - Example: `c=Complex(1,2); d=Complex(3,4); c+=d;`, *c=4+6i*
    - Example: `c=Complex(1,2); float d=2; c+=d;`, *c=3+2i*


Write a test using GTest for your finction in [tests/q5_student_test.cc](tests/q5_student_test.cc).
```
bazel test tests:q5_student_test
```

## Question 6 (20 Points. Medium)
Given an expression string, find if the input has valid brackets (i.e. { } or [ ] or ( ) ).

An input expression is valid if:

Open brackets are closed by the same type of brackets.
Open brackets must be closed in the correct order.
An empty string is also considered valid.

You should only check for the validity of brackets based on the above rules, i.e. ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’, not the rest of the expression.

👉Hint: Iterate the input from beginning to end and use a std:stack.

Example 1:
Input: "(a+b)"
Output: true

Example 2:
Input: "(a+b)[c*d]{5g+h}"
Output: true

Example 3:
Input: "(a+b]"
Output: false

Example 4:
Input: "(7h+[5c)+7]"
Output: false

Example 5:
Input: "{2k+[5j]}"
Output: true

Example 6:
Input: "{2k++[5--*j]}"
Output: true
