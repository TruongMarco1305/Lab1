// Phần include và khai báo sử dụng thư viện
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Khai báo và nhập vào các giá trị đầu vào
    double bmi, kg, h;	
    cin >> kg>> h;
    //BEGIN TODO
    bmi = kg/(h*h);
    if (bmi < 18.5){ //If your BMI is less than 18.5. You are Thin and the risk of disease is Low.
        cout << "You are Thin and the risk of disease is Low";
    } else if (bmi >= 18.5 && bmi <= 25.0){ //If your BMI is greater than or equal to 18.5 and less than or equal to 25.0. You are Normal and the risk of disease is Medium.
        cout << "You are Normal and the risk of disease is Medium";
    } else if (bmi > 25 && bmi <= 30.0){ //If your BMI is greater than 25 and less than or equal to 30.0. You are Overweight and the risk of disease is High.
        cout << "You are Overweight and the risk of disease is High";
    } else if (bmi > 30.0 && bmi <= 35.0){//If your BMI is greater than 30.0 and less than or equal to 35.0. You are Class 1 Obese and the risk of disease is High.
        cout << "You are Class 1 Obese and the risk of disease is High";
    } else if (bmi > 35.0 && bmi <= 40.0){//If your BMI is greater than 35.0 and less than or equal to 40.0. You are Class 2 Obese and the risk of disease is Very High.
        cout << "You are Class 2 Obese and the risk of disease is Very High";
    } else if (bmi > 40.0){ //If your BMI is greater than 40.0. You are Class 3 Obese and the risk of disease is Extremely High.
        cout << "You are Class 3 Obese and the risk of disease is Extremely High";
    }
    //END TODO
    return 0;
}