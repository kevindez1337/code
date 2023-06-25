# code
using System;

class Calculator
{
    static void Main()
    {
        double num1, num2, result;
        char operatorSymbol;

        Console.WriteLine("Простой калькулятор");
        Console.WriteLine("-------------------");

        Console.Write("Введите первое число: ");
        num1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Введите оператор (+, -, *, /): ");
        operatorSymbol = Convert.ToChar(Console.ReadLine());

        Console.Write("Введите второе число: ");
        num2 = Convert.ToDouble(Console.ReadLine());

        switch (operatorSymbol)
        {
            case '+':
                result = num1 + num2;
                Console.WriteLine("Результат: " + result);
                break;
            case '-':
                result = num1 - num2;
                Console.WriteLine("Результат: " + result);
                break;
            case '*':
                result = num1 * num2;
                Console.WriteLine("Результат: " + result);
                break;
            case '/':
                if (num2 != 0)
                {
                    result = num1 / num2;
                    Console.WriteLine("Результат: " + result);
                }
                else
                {
                    Console.WriteLine("Ошибка: деление на ноль");
                }
                break;
            default:
                Console.WriteLine("Ошибка: недопустимый оператор");
                break;
        }

        Console.ReadLine();
    }
}
