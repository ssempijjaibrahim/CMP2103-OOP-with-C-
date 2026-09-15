Suppose there are eight students and ten questions, and the answers are stored in a twodimensional
list. Each row records a student’s answers to the questions, as shown in the
following illustration

## Students’ Answers to the Questions

| Student   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-----------|---|---|---|---|---|---|---|---|---|---|
| Student 0 | A | B | A | C | C | D | E | E | A | D |
| Student 1 | D | B | A | B | C | A | E | E | A | D |
| Student 2 | E | D | D | A | C | B | E | E | A | D |
| Student 3 | C | B | A | E | D | C | E | E | A | D |
| Student 4 | A | B | D | C | C | D | E | E | A | D |
| Student 5 | B | B | E | C | C | D | E | E | A | D |
| Student 6 | B | B | A | C | C | D | E | E | A | D |
| Student 7 | E | B | E | C | C | D | E | E | A | D |


The key is stored in a one-dimensional list:
### Key to the Questions

| Key   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|-------|---|---|---|---|---|---|---|---|---|---|
| Answer| D | B | D | C | C | D | A | E | A | D |

Write a program that grades the test and displays the result. To do this, the program compares each
student’s answers with the key, counts the number of correct answers, and displays it.
GRADING CODE ATTEMPT WHERE I ENTER A STUDENT INDIVIDUALLY TO BE GRADED EACH I ALSO ADDED A GRADING CHECK FOR VALID PASS OR FAIL
#include <iostream>
using namespace std;

int main()
{
    // Pre-generated answer key according to our instructions
    char correctanswers[10] = {
        'D', 'B', 'D', 'C', 'C',
        'D', 'A', 'E', 'A', 'D'
    };
 char studentanswer;
    int score = 0;
cout << "MULTIPLE CHOICE TEST\n";
for (int i = 0; i < 10; i++)
    {
        cout << "Question " << i + 1 << " answer (A/B/C/D): ";
        cin >> studentanswer;
// Converting lowercase to uppercase for flexibility
        if (studentanswer >= 'a' && studentanswer <= 'z')
        {
            studentanswer = studentanswer - 32;
        }
// Compare student's answer with answer key as guided from the assgnt
        if (studentanswer == correctanswers[i])
        {
            score++;
        }
    }
double percentage = (score / 10.0) * 100;
cout << "\results\n";
    cout << "Correct answers: " << score << "/10\n";
    cout << "Wrong answers: " << 10 - score << "/10\n";
    cout << "Percentage: " << percentage << "%\n";
if (percentage >= 50)
    {
        cout << "Result: PASS\n";
    }
    else
    {
        cout << "Result: FAIL\n";
    }
return 0;
}
