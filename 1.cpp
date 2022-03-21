#include <iostream>
#include <string>
#include <stdlib.h>
#define SIZE 8
using namespace std;

class bitstring
{
    int a[SIZE];
public:
    bitstring()
    {
        for(int i=0; i<SIZE; i++)
        {
            a[i]=0;
        }
    }

    bitstring(string x)
    {
        for(int i=0; i<SIZE; i++)
        {
            a[i]= stoi(x.substr(i,1));
        }
    }

    bitstring AND(const bitstring &x)
    {
        bitstring res;
        for(int i=0; i<SIZE; i++)
        {
            res.a[i] = a[i] && x.a[i];
        }
        return res;
    }

    bitstring OR(const bitstring x)
    {
        bitstring res;
        for(int i=0; i<SIZE; i++)
        {
            res.a[i] = a[i]==1 || x.a[i];
        }
        return res;
    }

    bitstring NOT()
    {
        bitstring res;
        for(int i=0; i<SIZE; i++)
        {
            res.a[i] = !a[i];
        }
        return res;
    }

    bitstring XOR(const bitstring x)
    {
        bitstring res;
        for(int i=0; i<SIZE; i++)
        {
            res.a[i] = a[i]==x.a[i]? 0: 1;
        }
        return res;
    }

    bitstring Logic_shiftleft()
    {
        bitstring res;
        for(int i=0; i <SIZE-1; i++)
        {
            res.a[i]=a[i+1];
        }
        res.a[SIZE-1]=0;
        return res;
    }

    bitstring Logic_shiftright()
    {
        bitstring res;
        res.a[0]=0;
        for(int i=1; i <SIZE; i++)
        {
            res.a[i]=a[i-1];
        }
        return res;
    }

    bitstring Circ_shiftleft()
    {
        bitstring res;
        res.a[SIZE-1]=a[0];
        for(int i=0; i <SIZE-1; i++)
        {
            res.a[i]=a[i+1];
        }
        return res;
    }

    bitstring Circ_shiftright()
    {
        bitstring res;
        res.a[0]=a[SIZE-1];
        for(int i=1; i <SIZE; i++)
        {
            res.a[i]=a[i-1];
        }
        return res;
    }

    bitstring Ari_shiftright()
    {
        bitstring res;
        res.a[0]=a[0];
        for(int i=1; i<SIZE; i++)
        {
            res.a[i]=a[i-1];
        }
        return res;
    }

    bitstring Ari_shiftleft()
    {
        return Logic_shiftleft();
    }

    void print() const
    {
        for(int i=0; i<SIZE; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
};


int main()
{
    bitstring A("11100101"), B("10011110"), C;
    C = A.AND(B);
    C.print();
    C = A.OR(B);
    C.print();
    C = A.XOR(B);
    C.print();
    C = A.NOT();
    C.print();
    C = A.Logic_shiftleft();
    C.print();
    C = A.Logic_shiftright();
    C.print();
    C = A.Circ_shiftleft();
    C.print();
    C = A.Circ_shiftright();
    C.print();
    C = A.Ari_shiftleft();
    C.print();
    C = A.Ari_shiftright();
    C.print();
    return 0;
}
