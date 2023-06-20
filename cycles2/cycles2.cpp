//#include <iostream>
//using namespace std;
//int main()
//{
//	int number1, number2, number3, same, resN, temp;
//	resN = 0;
//	for (int i = 100; i <= 999; i++)
//	{
//		same = 0;
//		number3 = i % 10;
//		temp = i / 10;
//		number2 = temp % 10;
//		number1 = temp / 10;
//
//		if ((number1 == number2) &&
//			(number1 != number3) &&
//			(number2 != number3))
//		{
//			same++;
//		}
//		if ((number1 != number2) &&
//			(number1 == number3) &&
//			(number2 != number3))
//		{
//			same++;
//		}
//		if ((number1 != number2) &&
//			(number1 != number3) &&
//			(number2 == number3))
//		{
//			same++;
//		}
//		if (same == 1)
//		{
//			cout << i << "\n";
//			resN++;
//		}
//	}
//	cout << "#of numbers with 2 identical digits:"
//		<< resN;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//		int number1, number2, number3, same, resN, temp;
//	resN = 0;
//
//	for (int i = 100; i <= 999; i++)
//	{
//		same = 0;
//		number3 = i % 10;
//		temp = i / 10;
//		number2 = temp % 10;
//		number1 = temp / 10;
//		if ((number1 != number2) &&
//			(number1 != number3) &&
//			(number2 != number3))
//		{
//			resN++;
//		}
//	}
//	cout << "amount of numbers with different digits:";
//	cout << resN;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int number, digit, i, newNumber;
//	cout << "Please, enter your number:\n";
//	cin >> number;
//	i = 0;	
//		newNumber = 0;
//	while (number > 0)
//	{
//		digit = number % 10;
//		if ((digit != 3) && (digit != 6))
//		{
//			newNumber = newNumber + digit * pow(10, i);
//			i++;
//		}
//
//		number = number / 10;
//	}
//	cout << "Your new number: " << newNumber;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int A, B;
//	cout << "Please, enter your number:\n";
//	cin >> A;
//	for (int i = A - 1; i > 1; i--)
//	{
//		B = i;
//		if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
//		{
//			cout << B << "\n";
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//#include <iostream>
//
//int main() {
//    int number;
//    std::cout << "Enter an integer: ";
//    std::cin >> number;
//
//    std::cout << "Integers that " << number << " is divisible by without a remainder: ";
//    for (int i = 1; i <= number; i++) {
//        if (number % i == 0) {
//            std::cout << i << " ";
//        }
//    }
//
//    return 0;
//}

#include <iostream>

int main() {
    int number1, number2;
    std::cout << "Enter the first integer: ";
    std::cin >> number1;
    std::cout << "Enter the second integer: ";
    std::cin >> number2;

    std::cout << "Integers that both numbers are divisible by without a remainder: ";
    for (int i = 1; i <= std::min(number1, number2); i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}