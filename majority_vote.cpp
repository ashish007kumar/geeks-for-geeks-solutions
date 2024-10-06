/**
* Problem Statement :-
    You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return -1. 
    Note: The answer should be returned in an increasing format.
    
* Author:- ashish5kmax

* Time Complexity :- O(NlogN)
* Space Complexity :- O(N)

* Approch :-
  1) At first we create a map which stores frequency of characters.
  2) In second for loop we chcek if the frequency of character > n/3 times then we push it into resultant vector.
  3) Finally we return the res vector.

  Note:- we use map to keep maintain the order of elements.

* Thank you happy to help.
* Happy Coding!!.

*/

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int>res;
        int cnt = 0;
        int n = arr.size();
        
        // to map character frequency
        map<int,int>m;
        
        for(int i=0;i<n;i++) {
            m[arr[i]]++;
        }
        
        for(auto i:m) {
            // if character frequency > n/3 we select that vote/element.
            if(i.second > n/3) {
                res.push_back(i.first);
            }
        }
        
        if(res.size()==0) return {-1};
        return res;
    }
};
