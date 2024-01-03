#include <bits/stdc++.h>
#include <cstring>

using namespace std;

string pangrams(string s) {
    int arr[26]={0};
    int size = s.length();
    char ch;
    for(int i=0; i<size; i++){
        ch = s[i];
        if(ch>='a' && ch<='z'){
            arr[ch-'a']=1;
        }else if(ch>='A' && ch<='Z'){
            arr[ch-'A']=1;
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]==0){
            return "not pangram";
        }
    }

    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
