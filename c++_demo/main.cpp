#include <iostream>
#include "fact.h"
#include "combination.h"

using std::cout;
using std::endl;

/*
  C(n, k) = n!/k! * (n-k)!
*/

int main(int argc, char *argv[])
{
    cout << "hello world" << endl;
    for (int i = 1; i < 10; ++i) {
	cout << i << ":" << fact(i) << endl;
    }

    cout << combination(5, 3) << endl;
    return 0;
}
