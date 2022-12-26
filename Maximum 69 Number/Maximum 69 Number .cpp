class Solution {
public:
    int maximum69Number (int num) {
        int flag = 1;
        int b = num , multi=1 ;
        while (b>9){
            b = b / multi;
            multi=multi*10;

        }
        int n=0;
        while (multi!=0){
            if (num/multi==6 && flag){
                n=n + 9*multi;
                flag=0;
            }
            else{
                n=n+(num/multi)*multi;
            }
            num=num%multi;
            multi=multi/10;
            cout << n <<'/' << num << '/' << multi << '|' ;
                      
        }
        return n;
    }
};
