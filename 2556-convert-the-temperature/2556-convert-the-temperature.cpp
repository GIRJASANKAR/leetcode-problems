class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double x=celsius+273.15;
        double y=(celsius * 1.80) + 32.00;
        ans.push_back(x);
        ans.push_back(y);

        return ans;
    }
};