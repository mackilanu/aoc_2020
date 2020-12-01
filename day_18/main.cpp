#include <iostream>
#define MAXLEN 10000
#define TARGET_VAL 0

using namespace std;

int solve();
int get_ipt(int a[]);
int solve2();

int main()
{
    cout << solve() << '\n';
    return 0;
}

int solve()
{
    int a[MAXLEN], i, j;
    int num_vals = get_ipt(a);

    return 0;
}


int solve2() 
{
    int a[MAXLEN], i, j, k;
    int num_vals = get_ipt(a);
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