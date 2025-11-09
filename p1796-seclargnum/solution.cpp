#include <bits/stdc++.h>
using namespace std;

int secondHighest(string s) {
    int found = 0;
    int foundFound = 0;
    char ch1 = '+';
    char ch2 = '+';
    for (int i = 0; i < s.length(); i++) {
        if ((s.at(i) >= '0') && (s.at(i) <= '9')) {
            found = 1;
            if (s[i] > ch1) {
                ch1 = s[i];
            }
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if ((s.at(i) >= '0') && (s.at(i) <= '9') && (s.at(i) < ch1)) {
            foundFound = 1;
            if (s[i] > ch2) {
                ch2 = s[i];
            }
        }
    }
    if (foundFound) {
        return (1 + ch2 - '1');
    }
    else {
        return -1;
    }
}