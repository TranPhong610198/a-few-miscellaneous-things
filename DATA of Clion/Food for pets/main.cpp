#include <iostream>
using namespace std;


int main() {

   int t,a,b,c,x,y;

   cout<<" Input packs of dogs, cats,universal\n";
   cin>>a>>b>>c;

   cout<<"Input dogs, cats\n";
   cin>>x>>y;

   if(x>a+c || y>b+c || 2*x+y > 2*a+b+c ){

       cout<<"No";

   }
   else if(x<=a+c && y<=b+c || x<=a && y<=b ){

       cout<<"Yes";

   }

    return 0;
}
