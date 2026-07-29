class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >=0 && s[i] == ' ')
        {
            i--;
        }
        int count = 0;
        while (i >= 0 && s[i] != ' ')
        {
            count++;
            i--;
        }
        return count;
    }
};


/*

1. Given String 
2. go to string.size() - 1 // last element.
3. loop through the word till space occurs and increase the counter when space found print the counter -1 (space)
*/