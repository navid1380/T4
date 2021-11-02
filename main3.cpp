#include <iostream>
using namespace std;

int main(int argc, char** argv)
 {
    int a, b, B1, B2, temp, KMM;
    cout<<"adad avval = ";
    cin>>a;
    cout<<"adad dovvom = ";
    cin>>b;
    B1 = a;
    B2 = b;

    while(true)
    {
        if(b == 0) break;

        temp = a%b;
        a = b;
        b = temp;
    }

    KMM = (B1 * B2) / a;
    cout<<"K.M.M = "<<KMM;

    return 0;
}
