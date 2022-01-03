class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int GCD=__gcd(str1.size(),str2.size());
       
        
        string ns1=str1+str2,ns2=str2+str1;
        
        if(ns1==ns2)
            return str1.substr(0,GCD);
        return "";
    }
};


