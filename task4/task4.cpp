#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv){
    if (argc < 2) {
        cerr << "Введите названия файлов!" << endl;
        return 1;
    }
    vector<int> nums;
    ifstream file(argv[1]);
    if (file.is_open()){
        int x;
        while (file >> x) {
            nums.push_back(x);
        }
    }
    file.close();
    sort(begin(nums), end(nums));
    int mid = (nums.end() - nums.begin())/2;
    int count, temp;
    count = temp = 0;
    for(size_t i = 0; i < nums.size(); i++){
        temp = nums[i];
        while (temp!=mid)
        {
            if(temp < mid)
                temp++;
            else if(temp > mid)
                temp--;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}