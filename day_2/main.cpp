#include <iostream>
#include <string.h>
#define MAXLEN 10000
#define TARGET_VAL 0

using namespace std;

int solve();
int get_ipt(string a[]);
int solve2();

int main()
{
    cout << solve2() << '\n';
    return 0;
}

int solve()
{
    string a[MAXLEN];
    int num_vals = get_ipt(a);
    int i, j, k;

    int num_valids = 0;


    for(i = 0; i < num_vals; i++) {
        string p = a[i];
        int from, to;
        char target;
        string str;

        bool to_is_set = false;

        for(j = 0; j < p.length(); j++) {
            if(p[j] == '-') {
                from = stoi(p.substr(0, j));
                for(k = j; p[k]!= ' '; k++)
                    ;
                to = stoi(p.substr(j + 1, k));
            }

            if(p[j] == ':') {
                target = p[j - 1];
                str = p.substr(j + 2, p.length());
            }
        }

        int nc = 0;
        for(k = 0; k < str.length(); k++) {
            if(str[k] == target) {
                nc++;
            }
        }

        if(nc <= to && nc >= from) {
            num_valids++;
        }
        
    }

    return num_valids;
}

int solve2()
{
    string a[MAXLEN];
    int num_vals = get_ipt(a);
    int i, j, k, l = 0;

    int num_valids = 0;

    for(i = 0; i < num_vals; i++) {
        string p = a[i];
        int from, to;
        char target;
        string str;

        for(j = 0; j < p.length(); j++) {
            if(p[j] == '-') {
                from = stoi(p.substr(0, j));
                for(k = j; p[k]!= ' '; k++)
                    ;
                to = stoi(p.substr(j + 1, k));
            }

            if(p[j] == ':') {
                target = p[j - 1];
                str = p.substr(j + 2, p.length());
            }
        }

        if((str[from - 1] == target || str[to - 1] == target) && str[from - 1]!=str[to - 1])
                num_valids++;
    }

    return num_valids;
}

int get_ipt(string a[])
{
    int i;
    string line;

    for (i = 0; getline(cin, line); i++)
    {
        a[i] = line;
    }
    a[i + 1] = '\0';

    return i;
}