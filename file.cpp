#include<bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
 
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define endl            "\n"
#define mp              make_pair
#define pb              push_back
#define ins             insert
#define lb              lower_bound
#define ub              upper_bound
#define ff              first
#define ss              second
#define sz(x)           (int)(x).size()
#define vi              vector<int>
#define mii             map<int,int>
#define um              unordered_map<int,int>
#define pii             pair<int,int>  
#define maxpq           priority_queue<int>
#define minpq           priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define all(x)          x.begin(), x.end()
#define allr(x)         rbegin(x), rend(x)
#define w(x)            int x; cin>>x; while(x--)  
#define goog(tno)       cout << "Case #" << tno <<": "
#define trace(x)        cerr<<#x<<": "<<x<<" "<<endl;
 
typedef long double ld;
#define ll  long long int
#define ull unsigned ll
const int MOD = 1000000007;
const ll INF = 1e18;
const ld pi =3.14159265359; 
// const int mod = 1000003;
 
template <class T> ll maxpower(T a , T b){ll ans = 0;while(a > 0 && a % b == 0){ans++;a /= b;}return ans;}
template <class T> T mceil(T a, T b){if(a % b == 0) return a/b; else return a/b + 1;}
 
//---------------------------------------------------------------------------
// cin>> vector<T>
template <class T> istream &operator>>(istream &in, vector<T> &a){for (auto &i : a)cin >> i;return in;}
// cout << vector<T>
template <class T> ostream &operator<<(ostream &ostream, const vector<T> &c){for (auto &it : c) cout << it << " ";return ostream;}
//---------------------------------------------------------------------------
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif 

int main(){
    FIO;

    string s;
    cin >> s;

    int n = s.length();
    vector<int>prefa(n+1, 0),prefb(n+1, 0);

    for(int i = 1 ; i <= n ; i++){
        if(i == 1){
            if(s[i-1] == 'a'){
                prefa[i] = 1;
            }
            if(s[i-1] == 'b'){
                prefb[i] = 1;
            }
        }
        else{
            if(s[i-1] == 'a'){
                prefa[i] = prefa[i-1] + 1;
                prefb[i] += prefb[i-1];
            }
            else if(s[i-1] == 'b'){
                prefb[i] = prefb[i-1] + 1;
                prefa[i] += prefa[i-1];
            }
        }
    }

}

