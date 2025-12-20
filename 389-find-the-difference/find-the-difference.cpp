class Solution {
public:
    // linear search to count occurrences
    int linearsearch(char key, string str) {
        int count = 0;
        for (auto ch : str) {
            if (key == ch) count++;
        }
        return count;
    }

    char findTheDifference(string str, string temp) {

        for (auto ch : temp) {
            // ONLY linear search used
            if (linearsearch(ch, temp) > linearsearch(ch, str))
                return ch;
        }
        return 0;
    }
};