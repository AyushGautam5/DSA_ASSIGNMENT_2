class RandomizedSet {
public:
    unordered_map<int, int> mp;
    RandomizedSet() {
        ios_base::sync_with_stdio(false);
    }
    
    bool insert(int val) {
        return mp.insert({val, 0}).second;
    }
    
    bool remove(int val) {
        return mp.erase(val);
    }
    
    int getRandom() {
        return next(mp.begin(), rand()%mp.size())->first;
    }
};

