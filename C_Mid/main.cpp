#include <iostream>
#include <windows.h>
#include <fstream>
#include<tchar.h>
#include "LinkedList.h"
#include "LinkedList.cpp"

#define DIV 1048576
#define WIDTH 7

using namespace std;
void Q0();
void Q1();
void print_pages();
int main() {

    Q1();
    print_pages();
    return 0;
}
void print_pages()
{
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);
    _tprintf(TEXT("There are %*I64d total Mbytes of physical memory.\n"), WIDTH, statex.ullTotalPhys / DIV);
}
void Q0()
{
    ///Question0///
    LinkedList<size_t> myList1, myList2;
    myList1.pushback(1);
    myList1.pushback(4);
    myList1.pushback(3);
    myList2.pushback(1);
    myList2.pushback(4);
    myList2.pushback(3);
    cout << "ls1:"; myList1.print(); cout << endl;
    cout << "ls2:"; myList2.print(); cout << endl;
    ///Question0///
}
void Q1()
{
    ///Question1///
    LinkedList<size_t> myList1;
    myList1.pushback(1);
    myList1.pushback(4);
    myList1.pushback(3);
    myList1.pushback(1);

    LinkedList<size_t> myList2 = myList1;
    myList1.pushback(5);

    cout << "ls1:"; myList1.print(); cout << endl;
    cout << "ls2:"; myList2.print(); cout << endl;
    cout << "1s1.getFirstPtr() = " << myList1.getfirstptr() << endl;
    cout << "ls2.getFirstPtr() = " << myList2.getfirstptr() << endl;
    ///Question1///
}
