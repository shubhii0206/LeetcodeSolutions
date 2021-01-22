class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size() != word2.size())
            return false;
        unordered_set<char> s1, s2;
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        
        for(char ch: word1)
        {s1.insert(ch);
    
        }
        
        for(char ch: word2)
        { s2.insert(ch);
    }
        if(s1 != s2)
            return false;
        int cnt = 1, fnt = 1;
        
        vector<int> x, y;
        
        for(int i =0; i < word1.size(); i++)
        {
            if(word1[i] == word1[i+1])
                cnt++;
            else if(i == word1.size() - 1 || word1[i] != word1[i+1]){
                x.push_back(cnt);
             cnt = 1; }
        }
        
        for(int i =0; i < word2.size(); i++)
        {
            if(word2[i] == word2[i+1])
                fnt++;
            else if(i == word2.size() - 1 || word2[i] != word2[i+1]){
                y.push_back(fnt);
             fnt = 1; }
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        
        for(int xx: x)
            cout<<xx;
        cout<<endl;
        for(int xx: y)
            cout<<xx;
        if(x != y)return false;
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
            
        
        
    }
};
