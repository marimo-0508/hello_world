#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  int age;
  cout << "名前を記入してください" << endl;
  cin >> name; //入力された文章をnameに代入
  cout << name + "さん，宜しくお願い致します" << endl;
  cout << "年齢をお願いいたします(半角)" << endl;
  cin >> age;
  cout << age << "歳ですね．" << endl;
  cout << "わたしは2歳のPCです" << endl;
}
