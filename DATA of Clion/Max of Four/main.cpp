
#include <iostream>
    using namespace std;

    int max_of_four(int x,int y,int z, int t){

        if(x>y){
            if (x>z){
                if (x>t)
                    return x;
                else if (t>x)
                    return t;
            }
            else if (z>x){
                if (z>t)
                    return z;
                else if (t>z)
                    return t;
            }
        }
        else if (y>x){
            if (y>z) {
                if (y > t)
                    return y;
                else if (t > y)
                    return t;
            }
            else if (z>y){
                    if (z>t)
                        return z;
                     if (t>z)
                        return t;
        }
        }
        return 0;
    }

    int main() {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int ans = max_of_four(a, b, c, d);
        cout<<ans;

        return 0;
    }

