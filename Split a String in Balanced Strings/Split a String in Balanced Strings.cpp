class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int nb=0;
        while(n--){
            int nl=0 , nr=0;
            for (int i = 0 ; i<=n ; i++){
                if (s[i]=='R'){
                    nr++;
                }
                else{
                    nl++;
                }
            }
            if (nl==nr){
                nb++;
            }


        }
        return nb;
    }
};
