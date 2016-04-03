/*|-----------------------------------------------------------------<TEMPLATES>--------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

/* 			<CONSTANTS>  			*/
#define PI 3.141592653589793
#define mod  (long long int)(1e9+7)
#define INF (int)1e9


/* 			<TYPEDEFS>  			*/

 #define tt typedef  // <typedef>
tt long long int ll;
tt unsigned long long int ull;
tt vector<ll> vll;
#define pb push_back
tt map<int ,int > mii;
tt pair<int, int > pii;
#define mp make_pair
tt vector<int> vi; // < vector<int> >
tt  vector<bool> vb;
#define sz(a) int(a.size())

/* 							<I/O>                      */

 #define pn(x) printf("%d\n",x)  // < printf with new line >
 #define p(x) printf("%d ",x)  // < printf > 
 #define pl(x) printf("%lld ",x)  // < printf >
 #define pf(x) printf("%lf ",x)  // < printf > 
#define s(n)  scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define sl(n) scanf("%lld",&n)
#define sf(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define nl(n) printf("\n");
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);


/* 						<Containers> 										*/

#define tr(x,itr) for( typeof(x.begin()) itr  = x.begin(); itr!= x.end(); itr++) //traverse all elements 
#define dc(itr, x) typeof(x) itr //exactly like auto but without initialization
#define all(x) x.begin(),x.end()  // < all container elements >
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define in(a,b)( (b).find(a) != (b).end())
#define mm(a,x) memset(a,x,sizeof(a))

/* 						<tricks> 										*/

#define t(x) printf("test : %d\n", x)


/* 					<optimizations>										*/


#define iosf ios_base::sync_with_stdio(false)
