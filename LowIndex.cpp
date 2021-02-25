int find_low_index(vector<int>& arr, int key) {
  //TODO: Write - Your - Code
  int index = -1;
  auto it = find(arr.begin(), arr.end(),key);
  if(it != arr.end()){
    index = it - arr.begin();
  }
  return index;
}

int find_high_index(vector<int>& arr, int key) {
  //TODO: Write - Your - Code
  int highIndex = 0;
  
  int lowIndex = find_low_index(arr, key);
  if(lowIndex != -1){
    highIndex = lowIndex+1;
    while(arr[lowIndex] == arr[highIndex]){
      highIndex++;
    }
  }
  
  return highIndex-1;
}

int main(int argc, char* argv[]) {
  {
    vector<int> arr = {1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6};
    int key = 5;
    int low = find_low_index(arr, key);
    int high = find_high_index(arr, key);
    cout << "Low Index of " << key << ": " << low <<endl;
    cout << "High Index of " << key << ": "<< high <<endl;
    
    key = -2;
    low = find_low_index(arr, key);
    high = find_high_index(arr, key);
    cout << "Low Index of " << key << ": "<< low <<endl;
    cout << "High Index of " << key << ": "<< high <<endl;
  }
} 