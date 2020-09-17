
# HW2 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For submission, please push your answers to Github before the deadline.
- Deadline: Monday, September 21st by 23:59 pm
- Total: 130 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Write several functions with the same name ```myfunction``` in [cpplib.cc](src/lib/cpplib.cc). And using function overloading to satisfy the following requirements:

- All three functions take 2 parameters as the input.
- If both inputs are integers perform multiplication and return the result.
- If both inputs are string, concatenate both the strings and return the output.
- If the first input is an integer and the second input is a string or vice-versa your code should return a string that will hold the concatenated value of both the inputs.

Examples:

- input: (3, 5), output: 15
- input: (“abc”, “efg”), output: “abcdefg”
- input: (“EE”, 599), output: “EE599”

Write several tests using GTest for your function in [tests/q1_student_test.cc](tests/q1_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (10 Points. Easy)

How would you find the size of a non-dynamic array? (We are asking about an array, not a vector). Provide the example and outputs of your run for:

- An array of integers
- An array of chars
- An array of floats

Answer:

## Question 3 (10 Points. Easy)

Write a function swap that will swap the values of the inputs (two integers).
Implement this using

- **pass by references**

  ```void CPPLib::SwapByRefernce(int &input1, int &input2);```
- **pass by pointers**

  ```void CPPLib::SwapByPointer(int *input1, int *input2);```

Example :\
Before: x = 20, y = 30 \
We call Swap(x,y) \
After: x = 30, y = 20

Write several tests using GTest for your function in [tests/q3_student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q3_student_test
```

## Question 4 (20 Points. Easy)

- Write a function that takes a vector of integers as input. The output is the same vector where all duplicates are removed. Note that the output is the same vector means the function's return type should be void and do the modifications on the input vector.
  - Example: before: v=[1, 2, 2, 4], after : v=[1, 2, 4]
  - Solve this for the following cases:
    - You cannot use std::set
  
    ```void CPPLib::UniqeVectorNotBySet(std::vector<int> &input)```
    - You can use std::set

    ```void CPPLib::UniqeVectorBySet(std::vector<int> &input)```
- Write a function ```void CPPLib::ReverseVector(std::vector<int> &input)``` that takes a vector of integers as input. The output is the same vector but in the reversed order:
  - Example: before: [1, 2, 3], after:  [3, 2, 1]
- Write a function ```void CPPLib::OddVector(std::vector<int> &input)``` that takes a vector of integers as input. The output should be the same vector where all even numbers are removed.
  - Example: before: [1, 2, 3], after: [1, 3]
- Write a function ```std::vector<int> CPPLib::UnionVectors(std::vector<int> &input1, std::vector<int> &input2)``` that takes two vectors v1 and v2 and returns a new vector that is the **union** of the values in v1 and v2. All the value in return vector should be unique.
  - Example: input: (v1=[1, 2, 2, 3], v2=[3, 4, 4, 5]), output = [1, 2, 3, 4, 5]

Write several tests using GTest for your function in [tests/q4student_test.cc](tests/q4_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q4_student_test
```

## Question 5 (15 Points. Easy)

- Write a function that takes a string as an input and **reverses** its value. The function has no output. It changes the value of the input parameter. Write a simple function ```void CPPLib::ReverseString(std::string &input)``` in [cpplib.cc](src/lib/cpplib.cc). *You are welcomed to call existing STL functions*.

  - Example: Input: “EE599”, Output: “995EE”, string is stricted to be alphanumeric.
  - You cannot use any new local variable of type *string or vector or array*, but you can create extra O(1) space, such as *int*. The reverse should happen **in place** (i.e. on the input string).

- Write a function that takes a vector as an input and **reverses** its value. Write a simple function ```std::vector<int> CPPLib::ReverseVector_1(std::vector<int> input)``` in [cpplib.cc](src/lib/cpplib.cc)

  - Example: Input: {1,2,3,4}, Output: {4,3,2,1}. 
  - Use of [stack](https://en.cppreference.com/w/cpp/container/stack) is needed.

- Write a function that converts a string to lower case. Write a simple function ```void CPPLib::ToLower(std::string& )``` in [cpplib.cc](src/lib/cpplib.cc). The input string is strictly alphanumeric.
  - Example: input: “EE599”, output: “ee599”
  - Use of [transform](http://www.cplusplus.com/reference/algorithm/transform/) is recommended but not a must.

For all of the three questions, write a test using GTest for your finction in [tests/q5_student_test.cc](tests/q5_student_test.cc).
```
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

A palindrome is a word, phrase, or other sequences of characters that reads the same backward as forward, such as **madam**, **racecar**, or the number **10801**.

 Write a function ```bool canBePalindrome(const std::string &str)``` in [cpplib.cc](src/lib/cpplib.cc) that returns true if the permutation of the input could form a palindrome. and false if it is not.


Example:\
Input: str = "code".\
Output: false.\
Input: str = "aab".\
Output: true.

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```

## Question 7 (20 Points. Medium)

Write a function ```std::map<char, char> CPPLib::Mappable(const std::string& from, const std::string& to)``` in [cpplib.cc](src/lib/cpplib.cc).
Write a function that takes two strings from and to and determines if they are mappable.

- Two strings are mappable if the characters in from can be replaced to get to.
- You can assume characters are strictly lower cases.  
- Each character can only map to itself.
- The output should be a map:
  - Empty map if the mapping is not possible
  - The actual map if the mapping was possible

Example 1:
Input: from = "add", to = "egg”
Output: {(a->e), (d->g)}

Example 2:
Input: from = "extreme", to = "egg”
Output: { }

Example 3:
Input: from = "harder", to = "waiter”
Output: { }, because you cannot map 'r' to 'i' and 'r' at the same time!

Example 4:
Input: from = "aabbrr", to = "ddeekk”
Output: {(a->d),(b->e), (r->k)}

Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```

## Question 8 (20 Points. Medium)

 Write a function ```void kthPeek(std::vector<int> &input, int k);``` in [cpplib.cc](src/lib/cpplib.cc) that

- Finds the kth smallest value of the vector, called target(the vector is not sorted)
- It then rearranges the vector in such a way that it will have all the values lower than the target on the left side in ascending order and all the greater than the target value on the right side in descending order.

Example:\
Input: {637, 231, 123, 69, 43, 900, 10, 7, 21, 99, 0, 500}, k = 6.\
Output: Output:{0, 7, 10, 21, 43, 69, 900, 637, 500, 231, 123, 99 }. (target = 69)

Write several tests using GTest for your function in [tests/q8_student_test.cc](tests/q8_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q8_student_test
```
