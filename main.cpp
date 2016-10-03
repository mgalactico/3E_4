#include "../std_lib_facilities.h"

int main() {
    vector<double> distanceBetweenCities;

    //collect user input
    for (double distance; cin >> distance;)
        distanceBetweenCities.push_back(distance);

    //calculate sum of all entered values
    double sum = 0;
    for(double x : distanceBetweenCities)
        sum += x;

    ///identidy largest and smallest distance
    double min, max;
    min = max = distanceBetweenCities[0];
    for (int i = 1; i < distanceBetweenCities.size(); ++i)
        if (min > distanceBetweenCities[i])
            min = distanceBetweenCities[i];
        else if (max < distanceBetweenCities[i])
            max = distanceBetweenCities[i];

    sort(distanceBetweenCities);
    double meanDistance = distanceBetweenCities[distanceBetweenCities.size()/2];

    cout << "Sum of values entered: " << sum << endl;
    cout << "Smallest value entered: " << min << endl;
    cout << "Largest value entered: " << max << endl;
    cout << "Mean distance: " << meanDistance << endl;

    return 0;
}