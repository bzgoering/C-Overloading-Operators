#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using std::string;
using namespace std;

class Matrix
{
    public:
        int myArray[3][3];
        int size;
        Matrix();
        string toString();

        //operator overloading
        bool operator==(const Matrix& obj) const;
        Matrix operator* (const Matrix& obj) const;      
};
#endif
