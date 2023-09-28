#pragma once

class MyString {
private:
    char* str;
    int length;


    static int objectCount;

public:
    MyString();
    MyString(int len);  // ���������� ������������ � ����������
    MyString(const char* input);  // ���������� ������������ � ����������

    ~MyString(); // ���������� �����������

    int getLength() const;  // ���������� ������ ��� ��������� ����� ������
    static int getObjectCount();  // ���������� ������������ ������ ��� ��������� ���������� ��������� ��������
};