class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>ch;
        vector<char>ch2;
        for(int i=0;i<s.length();i++){
            ch.push_back(int(s[i]));
        }
        for(int i=0;i<t.length();i++){
            ch2.push_back(int(t[i]));
        }
        sort(ch.begin(),ch.end());
        sort(ch2.begin(),ch2.end());
        int i=0;
        int j=0;
        while(i<ch.size()&&j<ch2.size()){
            if(ch[i]==ch2[j]){
                i++;
                j++;
            }
            else{
                return false;
            }
        }
        if(ch.size()<ch2.size()||ch.size()>ch2.size()){
            return false;
        }
        return true;
    }
};