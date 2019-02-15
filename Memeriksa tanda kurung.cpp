#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <vector>
  
using namespace std;
 
int main () {
    int a=0,b=0,c=0,d=0,n;
    char sim[1000];
     
    scanf("%s",sim);
    n=strlen(sim);
    for(int i=0; i<n;i++) {
        if (sim[i]=='{') a++;
        else if (sim[i]=='}') a--;
        else if (sim[i]=='(') b++;
        else if (sim[i]==')') b--;
        else if (sim[i]=='<') c++;
        else if (sim[i]=='>') c--;
        else if (sim[i]=='[') d++;
        else if (sim[i]==']') d--;
    }
     
    if(a==0 && b==0 && c==0 && d==0) cout <<"VALID"<<"\n";
    else cout <<"TIDAK VALID"<<"\n";
     
}
