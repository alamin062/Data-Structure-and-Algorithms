// Sliding window
// => Take input an array size of n
// => Iterate this array by two nested loop,
//    in the outer loop we iterate the array 0 to  n-k times.
//    By inner loop we will calculate the sum of sub_array in every iteration of outer loop and store it
//    to the sum variable
//    and then compare this sum with previous maximum sum and store it to max_sum variable
// => Finally we will get maximum sum of sub-array for k length in variable max_sum and print it.
// => Time complexity: O(n * k)
// output: 30+20+7+10=77 for k=4

void slidingWindow(){
    vector <int> v={1,4,30,20,7,20,10,4};
    int max_sum = 0;
    int k = 4;
    int n = v.size();

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++){
            sum = sum + v[i + j];
        }
        max_sum = max(sum, max_sum);
    }
    cout<<max_sum<<endl;
}