#include "Exceptions.h"
using namespace System::Windows::Forms;
Exceptions::Exceptions(int error)
{
    switch (error) {
    case 1: MessageBox::Show("� ����� ������ ���� ����������.");  break;
    case 2: MessageBox::Show("������ �����������."); break;
    case 3: MessageBox::Show("�� �� ����� �����������, ��� ������� ������."); break;
    case 4: MessageBox::Show("�� ����� �����������, �������� ����� �������� ����������� ��������� �������� (999)."); break;
    case 5: MessageBox::Show("�� �� ��������� �� ����, ��������� �� ���."); break;
    case 6: MessageBox::Show("������ ��'� �� �������, �������������� ����� ��������, � ����, �������������� ����� ��������� �����."); break;
    case 7: MessageBox::Show("ĳ����� �� ����."); break;
    case 8: MessageBox::Show("���� �� ���� ������������ 224 �������."); break;
    default: break;
    }
};
