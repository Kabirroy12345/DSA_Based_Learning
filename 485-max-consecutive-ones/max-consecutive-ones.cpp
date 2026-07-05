// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& arr) {
//         int totalOnes = 0;
//         int maxOnes = 0;

//         for(int i = 0; i < arr.size(); i++) {
//             if(arr[i] == 1) {
//                 totalOnes += 1;
//             }
//             if(arr[i] == 0) {
//                 if(totalOnes > maxOnes) {
//                     maxOnes = totalOnes;
//                 }
//                 totalOnes = 0;
//             }
//         }

//         return max(maxOnes, totalOnes);
//     }
// };
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int max_count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
                max_count=max(max_count,count);

            }
            else{
                count=0;
            }
        }
        return max_count;
    }
};