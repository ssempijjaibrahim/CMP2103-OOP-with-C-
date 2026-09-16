#include <iostream>
using namespace std;

int main()
{
    // Pre-generated answer key according to our instructions
    char correctAnswers[10] = {
        'D', 'B', 'D', 'C', 'C',
        'D', 'A', 'E', 'A', 'D'
    };

    char studentAnswer;
    int score = 0;

    cout << "MULTIPLE CHOICE TEST\n\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Question " << i + 1 << " answer (A/B/C/D): ";
        cin >> studentAnswer;

        // Converting lowercase to uppercase for flexibility
        if (studentAnswer >= 'a' && studentAnswer <= 'z')
        {
            studentAnswer = studentAnswer - 32;
        }

        // Compare student's answer with answer key as guided from the assgnt
        if (studentAnswer == correctAnswers[i])
        {
            score++;
        }
    }

    double percentage = (score / 10.0) * 100;

    cout << "\nRESULTS\n";
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
