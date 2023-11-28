#include <cmath>
#include <iostream>
#include <string>
using namespace std;
/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
                      to be clearer, you can implement them. However if you
                      dont know how to use funtion in programming, dont worry, 
                      you dont have to implement them, and you just add a comment 
                      in each of them.
*******************************************************************************/
int move(string moves)
{
    /*TODO: add your code here*/
    int length = moves.length();
    int x = 0;
    int y = 0;
    int step[10000];
    for (int i = 0; i < length; i ++){
        if (moves[i] == '1'){
            step[i] = 1;
        }
        if (moves[i] == '2'){
            step[i] = 2;
        }
        if (moves[i] == '3'){
            step[i] = 3;
        }
        if (moves[i] == '4'){
            step[i] = 4;
        }
        if (moves[i] == '5'){
            step[i] = 5;
        }
        if (moves[i] == '6'){
            step[i] = 6;
        }
        if (moves[i] == '7'){
            step[i] = 7;
        }
        if (moves[i] == '8'){
            step[i] = 8;
        }
        if (moves[i] == '9'){
            step[i] = 9;
        } else {
            continue;
        }
    }
    for (int i = 0; i < length; i ++){
        if (moves[i] == 'U'){
            y += step[i+1];
        } 
        if (moves[i] == 'D'){
            y -= step[i+1];
        } 
        if (moves[i] == 'L'){
            x -= step[i+1];
        } 
        if (moves[i] == 'R'){
            x += step[i+1];
        } else {
            continue;
        }
    }
    double dis = sqrt((x * x) + (y * y));
    return round(dis);
}

bool isPrime(int n)
{
    /*TODO: add your code here*/
    if (n == 1 || n == 0){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool isSquared(int n)
{
    /*TODO: add your code here*/
    for (int i = 1; i <= sqrt(n); i ++){
        if (i * i == n){
            return true;
        }
    }
    return false;
}

int main()
{
    string moves;
    int distance;
    bool primality, squared;
    /// =======================================================
    /*
        The following code initializes variable `moves`
    */
    /// BEGIN   TESTCASE
    cin >> moves;
    /// END     TESTCASE
    /*---------------------------------
        * Calculate the distance
        * Remember to assign calculated value to variable `distance`
    */
    /*TODO: add your code here*/
    distance = move(moves);
    
    /*---------------------------------*/
    cout << "The distance the vehicle has moved from the origin to the current point is: "<< distance << '\n';

    /*---------------------------------
        * Check if distance is prime
        * Remember to assign appropriate value to variable `primality`
    */
    /*TODO: add your code here*/
    
    
    /*---------------------------------*/
    /*---------------------------------
        * Check if distance is squared
        * Remember to assign appropriate value to variable `squared`
    */
    /*TODO: add your code here*/
    primality = isPrime(distance);
    squared = isSquared(distance);
    /*---------------------------------*/
    if (primality) {
        cout << "Number " << distance << " is prime number\n";
    }
    if (squared) {
        cout << "Number " << distance << " is square number\n";
    }
    return 0;
}