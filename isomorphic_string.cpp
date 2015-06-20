/*Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two 
characters may map to the same character but a character may map to itself.*/

/*run time: too long...... forget it*/

bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    
    std::multimap<char, int> mapS;
    std::multimap<char, int> mapT;
    for (int i = 0; i < s.size(); ++i) {
        mapS.insert(std::pair<char, int>(s[i], i));
        mapT.insert(std::pair<char, int>(t[i], i));
    }
    for (int i = 0; i < s.size(); ++i) {
        if (mapS.find(s[i]) != mapS.end()) {
            if (mapT.find(t[i]) == mapT.end() || mapT.find(t[i])->second != mapS.find(s[i])->second) {
                return false;
            }
        }
        else {
            if (mapT.find(t[i]) != mapT.end()) {
                return false;
            }
        }
    }
    return true;
}
