#include <bits/stdc++.h>

using namespace std;


int main()
{
    int hh, mm, ss;
    string s;
    char ch;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    scanf("%c%c", &s[0], &s[1]);

    if(s[0]=='A' && hh==12) hh=0;
    else if(s[0]=='P' && hh<12) hh+=12;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}

