#include "LevenshteinDistance.hh"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

static void test_distanceLevenshtein() {
    typedef pair<string,string> StrPair;
    vector<StrPair> vec;
    vec.push_back(StrPair("",""));
    vec.push_back(StrPair("","a"));
    vec.push_back(StrPair("b",""));
    vec.push_back(StrPair("abc","def"));
    vec.push_back(StrPair("abc","daef"));
    vec.push_back(StrPair("aba","bab"));
    vec.push_back(StrPair("a","a0"));
    vec.push_back(StrPair("a_vld","b_valid"));
    vec.push_back(StrPair("a_sop","b_eop"));
    vec.push_back(StrPair("a_nxt","b_next"));
    for( unsigned i = 0; i < vec.size(); ++i) {
        const StrPair& pair = vec[i];
        const string& s0 = pair.first;
        const string& s1 = pair.second;
        cout << "dist(\"" << s0 << "\", \"" << s1 << "\") : " << distanceLevenshtein(s0,s1) << endl;
    }
}

int main(int argc, char **argv) {
    test_distanceLevenshtein();
    return 0;
}
