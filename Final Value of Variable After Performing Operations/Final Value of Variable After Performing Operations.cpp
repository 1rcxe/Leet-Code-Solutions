class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0 ; i<operations.size();i++){
            cout << operations[i];
            if ((operations[i][0]=='+') || (operations[i][1]=='+')){
                x+=1;
            }
            else{
                x-=1;
            }
            cout << x << endl;

        }
        return x;
    }
};
