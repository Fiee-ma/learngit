#include <iostream>
#include <vector>

using namespace std;
class A
{
public:
    int i;
    int j;
    A(int n):i(n),j(n) { }
};
int main()
{
    A a(100);
    int &r = reinterpret_cast<int&>(a); //强行让 r 引用 a
    r = 200;  //把 a.i 变成了 200
    cout << a.i << "," << a.j << endl;  // 输出 200,100
    double n = 300;
    A *pa = reinterpret_cast<A*> ( & n); //强行让 pa 指向 n
    pa->i = 400;  // n 变成 400
    pa->j = 500;  //此条语句不安全，很可能导致程序崩溃
    cout << "n=" << n << "sizeof(A)=" << sizeof(A)<< endl;  // 输出 400
    cout << "pa->i=" << pa->i << "pa-j=" << pa->j << endl;
    long long la = 0x12345678abcdLL;
    pa = reinterpret_cast<A*>(la); //la太长，只取低32位0x5678abcd拷贝给pa
//    unsigned int u = reinterpret_cast<unsigned int>(pa);//pa逐个比特拷贝到u
 //   cout << hex << u << endl;  //输出 5678abcd
    typedef void (* PF1) (int);
    typedef int (* PF2) (int,char *);
    PF1 pf1;  PF2 pf2;
    pf2 = reinterpret_cast<PF2>(pf1); //两个不同类型的函数指针之间可以互相转换
    double d = 12.1;
    char* p = reinterpret_cast<char*>(&d); // 将d以二进制（位模式）方式解释为char，并赋给*p
    double* q = reinterpret_cast<double*>(p);
    std::cout << *q;
}
