class Solution {
public:
    int romanToInt(string s) {
    map<char,int> a;
    a['I']=1;
    a['V']=5;
    a['X']=10;
    a['L']=50;
    a['C']=100;
    a['D']=500;
    a['M']=1000;
    int i = s.length()-1;
    int sum = a[s[i]];
    i--;
    while (i>=0){
        if (a[s[i]]<a[s[i+1]]){
            sum-=a[s[i]];
            }
        else {
            sum+=a[s[i]];
            }
        i--;
        }
    return sum;

};};