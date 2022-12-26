class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        for (int i = 0 ; i < sentence.size() ; i++){
            mp[sentence[i]]++;
        }
        bool flag = true;
        for(char i = 'a' ; i <= 'z' ; i++){
            cout << i << mp[i];
            if (mp[i]==0){
                flag = false;
            }

        }
        return flag ;
    }
    
