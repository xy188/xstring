#include "xstring.h"


///查找字符串p2第一次在p1中出现的位置
int xstrcmp( char *p1,int n1, char *p2,int n2)
{
    if(n1!=n2)
    {
        printf("%d!=%d\n",n1,n2);
        return -1;
    }
    int index=0;  ///下标索引
    while(p1[index]==p2[index] && index <n1)
    {
        index++;
    }
    if(index == n1)
        return 0;  ///0相同
    if(index <n1)
        return index-1; ///返回不同的位置
    ///关于返回是index还是index-1困扰我，找了半天终于找出来了
}

///将字符串src按字符串sep进行分割，并返回
std::vector<std::string> xsplit(char *src,const int src_len,char *sep,const int sep_len)
{
    if(src_len<0)
    {
        printf("%s\t%s\t%d:\t%d\n",__FILE__,__FUNCTION__,__LINE__,src_len);
        return (std::vector<std::string>)-1;
    }
    if(sep_len<0)
    {
        printf("%s-%s-%d:\t%d\n",__FILE__,__FUNCTION__,__LINE__,sep_len);
        return (std::vector<std::string>)-1;
    }

    std::string __t;
    std::vector<std::string> __v;
    int __index=0;
    for(int i=0; i<=src_len-sep_len; i++)
    {
        if(xstrcmp(&src[i],sep_len,sep,sep_len)==0)
        {
            i+=sep_len;
            __index=i;
            i--;        ///i+=sep_len;->i<src_len-sep_len;->i++ 故此处须--
            __v.push_back(__t);
            __t.erase();
            continue;
        }
        __t=__t+src[i];
    }
    if(__index > src_len-sep_len)
    {
        for(int i=__index; i<src_len; i++)
        {
            __t+=src[i];
        }
    }
    __v.push_back(__t);
    __t.erase();
    return __v;

}

