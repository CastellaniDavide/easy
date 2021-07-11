/**
 * @file easy1.cpp
 *
 * @version 01.01 2020-10-19
 *
 * @brief https://training.olinfo.it/#/task/easy1/statement
 *
 * @ingroup easy
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N, temp;
int max_value = INT_MIN;

// Main code
int main()
{
  // Cncomment the following lines if you want to read/write from files
  freopen("input3.txt", "r", stdin);
  freopen("output3.txt", "w", stdout);

  // Input
  cin >> N;

  for (size_t i = 0; i < N; ++i)
  {
      cin >> temp;
      if (temp > max_value)
        max_value = temp;
  }

  // Output
  cout << max_value << endl;

  // End
  return 0;
}
