#include<bits/stdc++.h>
using namespace std;

void print(int n){
    /*
        hypothesis -> fn print(n) prints numbers from 1 to n
        induction -> call the function for n-1 and do the work i.e. printing n
        base condition -> when n has highest invalid value, exit function
    */
    if(n==0)
        return;
    print(n-1);
    cout<<n<<" ";
}

int main() {
    int n = 0;
    cin>>n;
    print(n);
    return 0;
}
