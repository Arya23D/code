class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair< int,int > > v;
        vector<vector<int> >res;
        for(auto i: buildings)
        {
            v.push_back({i[0], -i[2]});
            v.push_back({i[1], i[2]});
        }
        int prev=0,cur=0;
        sort(v.begin(),v.end());
        multiset<int> m;
        m.insert(0);
        for(auto i: v)
        {
            if(i.second<0)
            {
                m.insert(-i.second);
            }
            else
            {
                m.erase(m.find(i.second));
            }
            cur = *m.rbegin();
            if(prev!=cur)
            {
                res.push_back({i.first, cur});
                prev=cur;
            }
        }
        return res;
    }
};