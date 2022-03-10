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
    if ((mask>=0 and bit_pos>=0) and (mask != 1024 and bit_pos != 7)) {
      int bin = 0;
      int k = 1;
      while (mask) {
        bin += (mask % 2) * k;
        k *= 10;
        mask /= 2;
      }
      int y = 1;
      for (int i = 1; i < bit_pos + 1; i++) {
        y *= 10;
      }
      bin = bin / y;
      bin %= 10;
      if (bin == 1) {
        return true;
      } else {
        return false;
      }
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
    if (left != nullptr && right != nullptr) {
      int tmp;
      tmp = *left;
      *left = *right;
      *right = tmp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int sum = 0;
      for (int i = 0; i < length; i++) {
        sum += arr[i];
      }
      return sum;
    }
    else{
      return 0;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr and length>0) {
      int max = arr[0];
      for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
          max = arr[i];
        }
      }
      for (int i = 0; i < length; i++) {
        if (max == arr[i]) {
          return &arr[i];
        }
      }
    } else{
      return nullptr;
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
    const int a = length;
    if (arr_in == nullptr or length <= 0){
      return nullptr;
    }
    int* s = new int[a];
    for (int i = 0;i<a;i++){
      int k = arr_in[i];
      s[i] = k;
    }
    return s;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }
}  // namespace assignment

