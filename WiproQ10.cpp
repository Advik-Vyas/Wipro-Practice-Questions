#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float totalMilesPerDay,costPerGallon,avgMilesPerGallon,parkingFees,tollsPerDay;

    cin>>totalMilesPerDay>>costPerGallon>>avgMilesPerGallon>>parkingFees>>tollsPerDay;

    float dailyDrivingCost = ((totalMilesPerDay / avgMilesPerGallon) * costPerGallon) + parkingFees + tollsPerDay;

    cout<< setprecision(2) << fixed;
    cout<<"Cost: "<<dailyDrivingCost;
    return 0;
}