#ifndef ZACHEEET_SET_H
#define ZACHEEET_SET_H

const int MaxSize = 100;

class Set{
    int len;
    char members[MaxSize];
    int find(char ch);
public:
    Set();
    void showset();
    bool isMember(char ch);
    bool compare(Set b);
    Set operator +(char ch);
    Set operator -(char ch);
    Set operator +(Set ob2);
    Set operator -(Set ob2);
};


#endif //ZACHEEET_SET_H
