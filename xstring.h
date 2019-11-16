#ifndef _XSTRING_H_
#define _XSTRING_H__

#include <stdio.h>
#include <vector>
#include <string>
#include <string.h>


#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

extern int xstrcmp( char *p1,int n1, char *p2,int n2);                                              ///字符串长度比较
extern std::vector<std::string> xsplit(char *src,const int src_len,char *sep,const int sep_len);    ///字符串分割

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _XSTRING_H_
