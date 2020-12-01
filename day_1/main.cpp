#include <iostream>
#define MAXLEN 10000
#define TARGET_VAL 2020

using namespace std;

int solve();
int get_ipt(int a[]);
int solve2();

int main()
{
    cout << solve2() << '\n';
    return 0;
}

//Day one part 1
int solve()
{
    int a[MAXLEN], i, j;
    int num_vals = get_ipt(a);

    for(i = 0; i < num_vals; i++) {
        for(j = num_vals; j > 0; j--) {
            if(a[i] + a[j] == TARGET_VAL) {
                return a[i] * a[j];
            }
        }
    }

    return 0;
}


//Day 1 part 2
int solve2() 
{
    int a[MAXLEN], i, j, k;
    int num_vals = get_ipt(a);

    for(i = 0; i < num_vals; i++) {
        for(j = num_vals; j > 0; j--) {
            for(k = 0; k < num_vals; k++) {
                if(a[i] + a[j] + a[k] == TARGET_VAL)
                    return a[i] * a[j] * a[k];
            }
        }
    }

    return 0;
}

int get_ipt(int a[])
{
    int i;
    string line;
    for (i = 0; getline(cin, line); i++)
    {
        a[i] = stoi(line);
    }
    a[i + 1] = '\0';

    return i;
}