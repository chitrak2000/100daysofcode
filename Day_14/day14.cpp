bool isPossible(vector<int> &arr, int n, int k, int mid){
    int boards = 0;
    int painterCount = 1;    
    for(int i = 0; i<n; i++){
        if(boards + arr[i] <= mid){
            boards += arr[i];
        }else{
            painterCount++;
            if(painterCount > k|| arr[i] > mid){
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int least = 0;
    int sum = 0;
    int n = boards.size();
    int ans;    
    for(int i = 0; i < n; i++){
        sum += boards[i];
    }
    int max = sum;
    int mid = least + ((max - least)>>1); 
    while(least <= max){
        if(isPossible(boards, n, k, mid)){
            int ans = mid;
            max = mid - 1;
        }else{
            least = mid + 1;
        }
        mid = least + ((max - least)>>1);
    }
}
