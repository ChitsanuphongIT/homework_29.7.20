#include <iostream>
using namespace std;
int main() {
  
  float quizz1, quizz2, quizz3;
  float mTerm, Final;
  float quizzTotal, scoreTotal;

  cout << "==========QUIZZ=========" << endl;

  cout << "Enter first quizz (10) : ";
  cin >> quizz1;

  cout << "Enter second quizz (10) : ";
  cin >> quizz2;

  cout << "Enter third quizz (10) : ";
  cin >> quizz3;

  cout << "=========MID-TERM=========" << endl;
  cout << "Enter mid-term (40): ";
  cin >> mTerm;

  cout << "=========FINAL=========" << endl;
  cout << "Enter final (50): ";
  cin >> Final;

  quizzTotal = (quizz1 + quizz2 + quizz3) / 3;
  scoreTotal = quizzTotal + mTerm + Final;

  cout << "Quizz Total : " << quizzTotal << endl;
  cout << "Mid term : " << mTerm << endl;
  cout << "Final : " << Final << endl;
  cout << "Total : " << scoreTotal << endl;
  cout << "Your score is " << (scoreTotal >= 50 ? "PASS" : "FAILED");

  system("pause");
  return 0;
}