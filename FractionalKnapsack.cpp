#include <bits/stdc++.h>

using namespace std;

struct Item {
   int value;
   int weight;
};
class Solution {
   public:
      bool static comp(Item a, Item b) {
         double x = (double) a.value / (double) a.weight;
         double y = (double) b.value / (double) b.weight;
         return x > y;
      }
   double Knapsack(int W, Item arr[], int n) {

      sort(arr, arr + n, comp);

      int curWt = 0;
      double finalval = 0.0;

      for (int i = 0; i < n; i++) {

         if (curWt + arr[i].weight <= W) {
            curWt += arr[i].weight;
            finalval += arr[i].value;
         } else {
            int remain = W - curWt;
            finalval += (arr[i].value / (double) arr[i].weight) * (double) remain;
            break;
         }
      }

      return finalval;

   }
};
int main() {
   int n = 3, weight = 50;
   Item arr[n] = { {100,20},{60,10},{120,30} };
   Solution obj;
   double ans = obj.Knapsack(weight, arr, n);
   cout << "The maximum value is " << setprecision(2) << fixed << ans;
   return 0;
}
