class MinStack {
public:
    stack<int> help;
    stack<int> temp;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    void push(int x) {
        help.push(x);
        if(temp.empty() || (x <= temp.top()))// "=" must be added
            temp.push(x);
    }
    
    void pop() {
        if(!help.empty()){
            int tmp = help.top();
            help.pop();
            if(tmp == temp.top())
                temp.pop();
        }
    }
    
    int top() {
        if(!help.empty())
            return help.top();
        else
            return NULL;
    }
    
    int getMin() {
        if(!temp.empty())
            return temp.top();
        else 
            return NULL;
    }
};
