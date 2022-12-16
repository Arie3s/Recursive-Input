/*
Author : Arie3s
    Write a recursive function which will take input from the user until a special character  (also selected by the user) is not entered.
    Then print all the input in reverse.
    Sample Input:
    Enter Special Character: !

    Enter Character: A
    Enter Character: B
    Enter Character: C
    Enter Character: !
    Sample Output: C B A
*/

#include <iostream>
using namespace std;

char func(char s){
    char a;
    cout<<"Enter Character :";cin>>a;
    if(a==s){return ' ';}
    else{
        func(s);
        cout<<a<<endl;
        return ' ';
    }

}

int main()
{
    cout<<"Enter Special Character : ";
    char character;
    cin>>character;
    func(character);
    return 0;
}
