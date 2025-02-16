#include <bits/stdc++.h>
#include <cctype>
using namespace std;

typedef long long int ll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
typedef map<ll, ll> mll;
typedef map<char, ll> mcl;
typedef unordered_map<ll, ll> umll;
typedef unordered_map<char, ll> umcl;
typedef set<ll> sll;
typedef pair<ll, ll> pll;
typedef queue<ll> qll;
typedef deque<ll> dqll;
typedef priority_queue<ll> pqll;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Krishna cout.tie(NULL);
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define nope cout << -1 << endl;
#define ZZ cout << 0 << "\n";
#define cspace cout << "\n";
#define endl '\n'
#define inarr(a,n) for(ll i=0; i<n; i++) cin >> a[i];
#define outarr(a,n) for(ll i=0; i<n; i++) cout << a[i] << " "; cout << endl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (ll)(v.size())
#define fl(i, n) for(ll i = 0; i < n; i++)
#define f(i, x, n) for(ll i = x; i < n; i++)
#define rf(i, n) for(ll i = n - 1; i >= 0; i--)
#define RR return;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pf push_front

void solve() {
    ll n;
    cin>>n;
    ll totalSum = (n * (n + 1)) / 2;

    if (totalSum % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> set1, set2;
    long long target = totalSum / 2, currentSum = 0;

    for (int i = n; i > 0; i--) {
        if (currentSum + i <= target) {
            set1.push_back(i);
            currentSum += i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (int num : set1) cout << num << " ";
    cout << "\n";

    cout << set2.size() << "\n";
    for (int num : set2) cout << num << " ";
    cout << "\n";
}


int main() {
    Jay Shree Krishna
    
    solve();
    
    return 0;
}