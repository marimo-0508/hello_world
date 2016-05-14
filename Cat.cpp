#include <iostream>
#include <string>
using namespace std;

class Cat{
private:
  string name;
public:
  Cat(string s){
    name = s;
  }
  void cry(){
    cout << "にゃー．名前は" << name << "にゃ" << endl;
  }
};
