class Solution {
public:
    int firstUniqChar(string s) {
        int array[26]={0};
        for(auto ch:s)
        {
            array[ch-'a']++;
        }
        for(size_t i=0;i<s.size();++i)
        {
            if(array[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};