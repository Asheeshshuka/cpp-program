class solution{
    public:
    int bitwisecomplement(int n){
        if(n==0)
        return 1;
        int ans=0,rem; 
        int mul=1;
        while(n){
            rem=n/2;
            rem=rem^1;
            n=n/2;
            ans=ans+mul*rem;
            mul=mul*2;
        }
        return ans;

    }
};