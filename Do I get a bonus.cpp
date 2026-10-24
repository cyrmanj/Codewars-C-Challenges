// Kata: Do I get a bonus?
// Difficulty: 8 kyu
// Concepts: Conditional logic, Type Conversion, String Concatenation
// Platform: Codewars

#include<string>
using namespace std;


string bonus_time(int salary, bool bonus)
{
    if (bonus) 
      {
        int total = salary * 10;
        return "$" + std::to_string(total);
      }
    else
      {
        return "$" + std::to_string(salary);
      }
}