#include "Set.h"
#include <iostream>
using namespace std;

Set::Set()
{
    len = 0;
}

int Set::find(char ch)
{
    int i;
    for(i = 0; i < len; i++)
        if(members[i] == ch)
            return i;
    return -1;
}

void Set::showset()
{
    cout << "{";

    for(int i = 0; i < len; i++)
        cout << members[i] << " ";

    cout << "}\n";
}

bool Set::isMember(char ch)
{
    if(find(ch) != -1)
    {
        cout << "is a member" << endl;
        return true;
    }
    cout << "isn't a member" << endl;
    return false;
}

bool Set::compare(Set b)
{
    int l = 0;
    for (int i = 0; i < this->len; i++)
    {
        for (int j = 0; j < b.len; j++)
        {
            if (this->members[i] == b.members[j])
            {
                l++;
                continue;
            }
        }
    }
    if (l == this->len)
        return true;
    else
        return false;
}

Set Set::operator +(char ch)
{
    Set newset;

    if(len == MaxSize)
    {
        cout<< "Overstack error" << endl;
        return *this;
    }

    newset = *this;

    if(find(ch)  == -1)
    {
        newset.members[newset.len] = ch;
        newset.len++;
    }
    return newset;
}

Set Set::operator -(char ch)
{
    Set newset;
    int i = find(ch);

    for(int j = 0; j < len; j++)
        if(j != i)
            newset = newset + members[j];

    return newset;
}

Set Set::operator+(Set ob2)
{
    Set newset = *this;

    for(int i = 0; i < ob2.len; i++)
        newset = newset + ob2.members[i];

    return newset;
}

Set Set::operator -(Set ob2)
{
    Set newset = *this;

    for(int i = 0; i < ob2.len; i++)
        newset = newset - ob2.members[i];

    return newset;
}