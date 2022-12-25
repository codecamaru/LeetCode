class Solution {
public:
    Solution(double radius, double x_center, double y_center) {
        _r=radius;
        _xc=x_center;
        _yc=y_center;
    }
    vector<double> randPoint() {
        bool ok = false;
        double rx = 0.0;
        double ry = 0.0;
        while(!ok){
            double const f1 = (double)rand() / RAND_MAX;
            double const f2 = (double)rand() / RAND_MAX;
            rx = (_xc - _r) + f1 * (2 * _r);
            ry = (_yc - _r) + f2 * (2 * _r);
            if(sqrt(pow((rx - _xc),2) + pow((ry - _yc),2)) < _r){
                ok = true;
            }
        }
        vector<double> const result{ rx,ry };
        return result;
    }

    double _r, _xc, _yc;
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
