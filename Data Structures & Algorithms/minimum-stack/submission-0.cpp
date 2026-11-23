class MinStack {
    private:
    vector <pair<int,int>> v;
public:
    MinStack() {
    }

    void push(int val) {
        if(v.empty()){
            v.push_back({val,val});
        }
        else{
            int curr_min = min(val,v.back().second);
            v.push_back({val,curr_min});
        }
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};
