class Solution {
public:
    string defangIPaddr(string s) {
        int flag=1;
        string str;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='.'){
	            if(!flag){
	                str+="[.]";
	            }
                continue;
	        }
            else {
	            flag=0;
	            str+=s[i];


        }
    }
    return str;
};
};
