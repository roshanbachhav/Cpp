#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class hello_world{
    public:
    void print(){
        // cout use for display the output.
        // endl use new line.

        cout<< "Hello world"<<endl;
    }
};

int main(){
    hello_world hw;
    cout<<"\n";
    hw.print();
    cout<<"\n";

    // use for show timing... 
    time_t mytime = time(NULL);
    cout<<("%s", ctime(&mytime));
    cout<<"\n";
}