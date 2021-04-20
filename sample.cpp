#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <iomanip>
#include <limits>
#include <math.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(a) a.begin(),a.end()
#define P pair<int,int>
#define Pll pair<long,long>
#define mp make_pair
#define INF 1000000001
#define INFl 1000000000000000001
#define ll long long
using namespace std;

void wait_for_n(FILE *fp){
    char c;
    while((c=fgetc(fp))!='\n'){
        ;
    }
}

unsigned char D[2048][2048][3];
unsigned char C[16][16][128][128][3];

int main(void){
    FILE *fp,*ofp;
    time_t current = time(NULL);
    struct tm *tr = localtime(&current);
    
    char fine_name[256]="img/case1.ppm";
    
    if ((fp = fopen(fine_name, "rb")) == NULL) { /* ファイルがオープンできなければ？ */
        printf("The file named \"%s\" dose not exist.\n",fine_name);
        return 0;
    }
    char c;
    c=fgetc(fp);
    c=fgetc(fp);
    int H,W,a;
    fscanf(fp,"%d%d%d",&H,&W,&a);
    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++){
            fread(D[h][w], sizeof(unsigned char), 3, fp);
            //for(int i=0;i<3;i++)printf("%d",D[h][w][i]);
            if(D[h][w][0]>=128)printf("@");
            else printf(" ");
        }
        puts("");
    }

    fclose(fp);
}