#include <iostream>
#include <map>
using namespace std;

void anaPalin(string s1) {
        map<char, int> m1;
        int odd_cnt = 0;

        for (int i = 0; i < s1.size(); i++) {
                if (m1.find(s1[i]) != m1.end()) {
                        m1[s1[i]] += 1;
                } else {
                        m1[s1[i]] = 1;
                }
        }

        for(map<char, int>::iterator it = m1.begin();
                       it != m1.end(); it++) {
                if ((it->second)%2 == 1) {
                        odd_cnt += 1;
                }
        }
        if ((odd_cnt == 0) || ((s1.size())%2 == 1 && odd_cnt == 1))
                cout << "Yes\n";
        else
                cout << "No\n";
}

int main()
{
        int t;
        cout << "Enter Number of trials: ";
        cin >> t;
        getchar();

        while (t--) {
                cout << "Enter the word: ";
                string s;
                getline(cin, s);
                anaPalin(s);
        }
}
