#include <iostream>
#include <string>
#include <random>
#include <cmath>

using namespace std;

//theoretical average percentile after x rounds of research, assuming uniform distribution of values
//efficacy represents the average percentile a random 'successful'(better than all before) research will yield, rounds is just rounds of research
//see README for detailed explanation on equation
double percentile_calculator(double efficacy, int rounds) {
  if (rounds == 0) {
    return 0;
  } else if (rounds == 1) {
    return 0.5;
  } else {
    double prev = percentile_calculator(efficacy, (rounds - 1));
    double percentile = prev + (efficacy * pow(1 - prev, 2));
    return percentile;
  }
}

//simulated percentile based on "random" pulling from distribution
double percentile_sim(normal_distribution<double> distribution, double efficacy, int rounds) {
  return 0;
}

int main() {
  cout << "Enter normal distribution parameters (mean, stdev)" << endl;
  double mean, stdev;
  cin >> mean >> stdev;
  return 0;
}


/* General pseudocode outline:

- Import random and normal dist and some other math requirements
- Main body to run entire sim
- Function for distribution selection 
- Function for research efficacy
- Total probability function per research
- Research and opportunity cost options
- Learning based on research to improve/change distribution (WIP)
- Final display function for main body

General optimization target logic is as follows: if simulations for P(r-1) and P(r+1) are consistently worse, then we know our formula actually checks out

*/