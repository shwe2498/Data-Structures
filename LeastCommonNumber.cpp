int find_least_common_number(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
  //1. get min ele from first vector
  //2. check if same is in second vector
  //2.1 not in second vec goto 1 find the next min goto 2
  //3. check if same is in third vector
  //3.1 not in third vector start from 1 to get next min
  int found = -1;
  auto itArr1 = arr1.begin();
  
  bool isSame = false;
  while(!isSame && itArr1 != arr1.end()){
      int firstMin = *min_element(itArr1, arr1.end());
      
      //find the firstMin in arr2
      auto it = find(arr2.begin(), arr2.end(), firstMin);
      if(it != arr2.end()){
          //find the firstMin in arr3
          auto it = find(arr3.begin(), arr3.end(), firstMin);
          if(it != arr3.end()){
               found = firstMin;
               isSame = true;
          }
      }
      if(!isSame){
          itArr1++;
      }
  }
  return found;
}

int main() {
    vector<int> v1 = {6, 7, 10, 25, 30, 63, 64};
  vector<int> v2 = {1, 4, 5, 6, 7, 8, 50};
  vector<int> v3 = {1, 6, 10, 14};
  int result = find_least_common_number(v1, v2, v3);
  cout << "Least Common Number: " <<result;
    return 0;
}