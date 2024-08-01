class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(st1.size()>1)
        {
            st2.push(st1.top());
            st1.pop();
        }
       int val= st1.top();
       st1.pop();
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    int peek() {
         while(st1.size()>1)
        {
            st2.push(st1.top());
            st1.pop();
        }
       int val= st1.top();
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return val;
    }
    
    bool empty() {
        return st1.empty();
    }
};
