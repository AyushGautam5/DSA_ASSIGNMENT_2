class BrowserHistory {
public:
    vector<string>str;
    int pt,size;
    BrowserHistory(string homepage) {
        str.push_back(homepage);
        pt=0;
        size=1;
    }
    
    void visit(string url) {
        if(pt+1==str.size()){
           str.push_back(url);
           pt++;
           size=pt+1;
           return;
        }
        pt++;
        str[pt]=url;
        size=pt+1;
    }
    
    string back(int steps) {
        pt-=steps;
        if(pt<0){
            pt=0;
        }
        return str[pt];
    }
    
    string forward(int steps) {
        pt+=steps;
        if(pt>=size){
            pt=size-1;
        }
        return str[pt];
    }
};
