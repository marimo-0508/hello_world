#include <iostream>
#include <string>

using namespace std;

class Cat{
  string name;
public:
  Cat (string);//string sとなっていたが，sを省略できるので省略
  void cry() const;
};

Cat::Cat(string s) : name(s){}
//入力された文字sをs=nameとして，nameに代入．
//Cat::Catと2回書くことに注意

  void Cat::cry() const{//Catクラスのcryという関数を定義
    cout << "にゃー．名前は" << name << "にゃ" << endl;
}

int main()
{
  Cat dora("ねこねこ");
  dora.cry();
}
