#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    printf("Hello_World");

    vector<int> i = {1,2,3,4,5};

    for(auto a : i){
        printf("i : %i\n",a);
    }

    return 0;
}
