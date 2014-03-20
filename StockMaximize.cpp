#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    // check # of subprobems
    if (scanf("%i", &n) == 0){}
    
    int days, portfolio;
    long profit;
    //intital problem loop
    for (int x = 1; x<=n; x++){
        days = 0;
        portfolio = 0;
        profit = 0;
        
        // check # of days to read
        if (scanf ("%i", &days) == 0){printf("Error");}
        
        //check if only 1 day, autoanswer
        if (days == 1){
            printf("%i", 0);
            continue;
        }
        
        else{
            long prices[days];
            
            // populate array of prices
            for (int c = 0; c<days;c++){
                if (scanf("%li", &prices[c]) == 0){}}
            
            long max = 0;
            
            for (int x = days-1; x>-1;x--){
                if (prices[x] > max)
                    max = prices[x];
                
                if (prices[x] <= max)
                    profit += max - prices[x];
            }
            printf("%li \n", profit);
           

            /*for (int x = 0; x<days; x++){
                if (prices[x] > max)
                    max = prices[x];
            }
            
            for (int curr=0; curr<days;curr++){
                //check if last day -- sell
                if (curr == days-1){
                    profit += portfolio*prices[curr];
                    printf("%li \n",profit);
                }
                //check if price lower than max -- buy
                else if (prices[curr] < max){
                        profit -= prices[curr];
                        portfolio++;
                    }
                
                //check if price is max -- dump
                else{
                    profit += portfolio*prices[curr];
                    portfolio = 0;
                    for (int x = curr+1; x<days; x++){
                        if (prices[x] > max)
                            max = prices[x];
                    }
                }
            } */           
        }
    }
    return 0;
}