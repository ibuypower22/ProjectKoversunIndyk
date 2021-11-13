#include "Exceptions.h"
using namespace System::Windows::Forms;
Exceptions::Exceptions(int error)
{
    switch (error) {
    case 1: MessageBox::Show("У цьому профілі немає повідомлень.");  break;
    case 2: MessageBox::Show("Введіть повідомлення."); break;
    case 3: MessageBox::Show("Ви не ввели повідомлення, яке потрібно знайти."); break;
    case 4: MessageBox::Show("Ви ввели повідомлення, затримка якого перевищує максимально допустиме значення (999)."); break;
    case 5: MessageBox::Show("Ви не заповнили всі поля, спробуйте ще раз."); break;
    case 6: MessageBox::Show("Введіть ім'я та прізвище, використовуючи тільки кирилицю, а логін, використовуючи тільки англійськи літери."); break;
    case 7: MessageBox::Show("Ділення на нуль."); break;
    case 8: MessageBox::Show("Логін не може перевищувати 224 символи."); break;
    default: break;
    }
};
