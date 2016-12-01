#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
//MOST of what you'll see will end up to here. This is the recommended amount of libraries you should add
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sstream>
#include <deque>
#include <set>
#include <queue>
#include <map>
//This is typically for Gold and Higher, and you still need to select carefully. They will use weirder data structures as seen here
//WARNING: Only select what you need - too many #include will slow the compiler - slowing your code. Only add necessary libraries. You should not add every single library here and expect to remove some if not needed.

using namespace std; //If you have conflicting methods, remove this
int main() {
    ofstream fout ("FILE INPUT.out");
    ifstream fin ("FILE OUTPUT.in");
    int i1;
    fin >> i1;
    vector<int> someArray(i1);
    for(int start = 0; start < i1; start++){
        // int a, b; Only if you have couple spaces in the same line of input
        //fin >> a >> b; match with above
        int a;
        fin >> a;
        someArray[start] = a;
    }

    fout << answer << endl;

    fout.close();
    return 0;
}
