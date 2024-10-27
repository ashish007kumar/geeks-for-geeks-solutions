class Solution
{
    public:
    bool isAnagram(string arr, string brr){
        
        // Your code here
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        return arr==brr;
    }

};
