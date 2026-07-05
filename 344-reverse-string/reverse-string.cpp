class Solution {
public:
    void reverseString(vector<char>& num) {
        int n=num.size();  //total size
        int s=0;   //start pointer
        int e=n-1;  //end pointer
        while(s<e){    //until they cross
            swap(num[s],num[e]);  //swap and increment
            s++;
            e--;
        }
    }
};