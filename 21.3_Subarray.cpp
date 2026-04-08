/**
** Given an array of integers arr of size N and a positive integer K, determine
** the total number of contiguous subarrays of length K that can be formed from
** the given array.

*? A subarray is defined as a contiguous part of an array.
*/

#include <bits/stdc++.h>
using namespace std;

int findSubarrayNumber(vector<int> &arr, int K) {
  int n = arr.size();

  // Edge case checks
  if (K <= 0 || K > n) {
    return 0;
  }

  return n - K + 1;
}

int main() {
  vector<int> arr = {4, 3, 7, 2};

  int subarray;
  cout << "Enter the subarray: ";
  cin >> subarray;

  cout << "Total Subarray: " << findSubarrayNumber(arr, subarray) << endl;

  return 0;
}