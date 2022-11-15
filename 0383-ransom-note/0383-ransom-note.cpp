class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> mp;
        for (int i=0;i<mag.length();i++){
            mp[mag[i]]++;
        }
        bool flag = true ;
        for (int i=0 ; i <ran.length();i++){
            if (mp[ran[i]]>0){
                mp[ran[i]]--;
            }
            else {
                flag=false;
                break;
            }
        }
        
        return flag;
    }
};