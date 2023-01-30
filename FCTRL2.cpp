// Vidur Goel

//Codeforcees Handle: Vidurcodviz

#include<iostream>
#include<string>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<stack>
#include<chrono>
#include<random>
#include<cassert>
#include<array>
#include<bitset>
#include<complex>
#include<cstring>
#include<functional>
#include<iomanip>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<utility>
#include<string_view>
#include<deque>
#include<iterator>

void solve_array();
void solve_single();
void solve_mul();

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;

#define make_it_fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define MOD 1000000007
#define MOD1 998244353
#define sor(x) sort(all(x))
#define vec vector<ll>
#define nn endl

using namespace std;
using namespace chrono;
ll seiv[1000001]={0};

ll fact(ll n){
    if(n==1 || n==2){
        return n;
    }
    else{
        ll prod=1;
        for(ll i=2;i<=n;i++){
            prod*=i;
        }
        return prod;
    }
}

void solve_mul(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        solve_single();
    }
}

void solve_single(){
    ll n;
    cin>>n;
    cout<<fact(n)<<nn;
}

void solve_array(){
    ll n;
    cin>>n;
    ll * arr=new ll[n];
    //read_array(arr,n);
}

int main(){
    make_it_fast();
    //seive();
    solve_mul();
    //solve_array();
    //solve_single();
    return 0;
}