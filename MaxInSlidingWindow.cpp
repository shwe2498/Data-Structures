vector<int> find_max_sliding_window(vector<int>& v, int window_size) {
 vector<int> result;
 auto itStart = v.begin();
 while((itStart + window_size) <= v.end()){
    result.push_back(*max_element(itStart, itStart + window_size));
    ++itStart;
 }     
 return result;
}