#include "xstring.h"

using namespace std;

int main(int argc,char **argv)
{
    vector<string> v;
    char *p="1232312323"; ///char *p="qwer12asdf12zx\0c12""023416789111"
    int pl=strlen(p);
    char *s="23";
    int sl=strlen(s);
    v=xsplit(p,pl,s,sl);
    for(int i=0; i<v.size(); i++)
    {
        printf("%s\n",v[i].c_str());
    }
    printf("v.size:\t%d\n",v.size());
    return 0;
}
