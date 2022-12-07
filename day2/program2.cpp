#include <bits/stdc++.h>
using namespace std;

// #define FOR(i, j, k, in) for (int i = j; i < k; i += in)
// #define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
// #define REP(i, j) FOR(i, 0, j, 1)
// #define RREP(i, j) RFOR(i, j, 0, 1)

// #define INF (int)1e9
// #define PI 3.1415926535897932384626433832795
// #define MOD 1000000007
// `
// typedef long long ll;
// typedef unsigned long long ull;

// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// typedef vector<char> vc;
// typedef vector<vc> vvc;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef map<int, int> mii;
// typedef unordered_map<int, int> umap_ii;
// typedef unordered_map<string, int> umap_si;

/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
*/

void solve(int test_case)
{

    char opponent, res;
    int score=0;
    
    while(cin>>opponent>>res){
      int opp =0, ress=0;
      opp= (opponent-'A');
    ress=(res-'X');
    int elf=0;
    if(ress==0){
      ress=(opp+2)%3+0;
    }
    else if(ress==1){
      ress=opp+3;
    }
    else{
      ress=(opp+1)%3+6;
    }
    score+=(ress+1);
  }
      cout<<score;
  }
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, t1 = 0;
    t=1;
    while (t1 < t)
    {
        solve(t1 + 1);
        t1++;
    }
}
