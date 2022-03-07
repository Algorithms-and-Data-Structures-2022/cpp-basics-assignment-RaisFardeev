#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }
  // Task 2
  bool check_bit(int mask, int bit_pos) {
    int bin = 0;
    int k = 1;
    while (mask){
      bin += (mask%2)*k;
      k *= 10;
      mask /= 2;
    }
    int y = 1;
    for (int i = 1;i<bit_pos+1;i++){
      y *= 10;
    }
    bin = bin / y;
    bin %= 10;
    if (bin == 1) {
      return true;
    }else{
      return false;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max = 0;
    if (left>=middle and left>=right){
      max = left;
    }if(middle>=left and middle >= right){
      max = middle;
    }if(right >= left and right >= middle){
      max = right;
    }
    return max;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    int tmp;
    tmp = *left;
    *left = *right;
    *right = tmp;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int sum = 0;
    for (int i=0;i<length;i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int max = arr[0];
    int* maxx;
    for(int i = 1;i<length;i++){
      if (arr[i] > max){
        max = arr[i];
      }
    }
    for (int i = 0;i<length;i++){
      if (max == arr[i]){
        maxx = &arr[i];
      }
    }
    if (*arr == false or length<=0) {
      return nullptr;
    }else{
      return maxx;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    const int a = length;
    int b = init_value;
    if (a<=0){
      return nullptr;
    }
    int *r = new int[a];
    for (int i = 0;i<a;i++){
      r[i] = b;
    }
    return r;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }
}  // namespace assignment

