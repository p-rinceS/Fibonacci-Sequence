#include <iostream>
using namespace std;


// created by Prince
// number will eventually become negative with this program because  it will go over the 32-bit threshold.


  int calcNthTerm(int num){

    long long int start = 0;

    long long int second = 1;

    long long int nthNum = 0;
    long int counter = 0;
    // fetch number term to find.

    for (int i= 0; i < num; i++){


      cout << "Term #" << counter << ":"<<start << endl;
      counter++;
      nthNum = start + second;
      start = second;
      second = nthNum;
      
    }

    return nthNum;
    
  }

  int inputNum(){
    int num = 0;

    cout << "Enter the number term you would like to find for the fibonacci sequence" << endl << "Enter '-1' to exit program." << endl;
   cin >> num;
   if (cin.fail()){
          cin.clear();
          cout << "Entry failed, try an integer." << endl;
          cin.ignore(100,'\n'); // it will ignore 100 characters or get to the end of the line.
      }
      
    return num;
  
  }



int main() {

  // Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13...


  // input number
  int value = 0;
  while (value != -1){
    value = inputNum();
    calcNthTerm(value);
    }

  
  return 0;
}
