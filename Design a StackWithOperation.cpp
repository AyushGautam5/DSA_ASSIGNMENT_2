public:
    int n;
    vector<int> s;
    CustomStack(int maxSize) {
        n=(maxSize);
    }
    
    void push(int x) {
        if(s.size()<n){
            s.push_back(x);
        }
    }
    
    int pop() {
        if(s.size()==0)
            return -1;
        int temp = s.back();
        s.pop_back();
        return temp;
    }
    
    void increment(int k, int val) {
        int i=0;
        while(k-- && i<s.size()){
            
            s[i]=s[i]+val;
            i++;
        }
    }