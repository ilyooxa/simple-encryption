#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main(){

    std::string phrase, key, key1;
    cout<<"enter phrase\n";
    std::getline(cin, phrase);
    cout<<"enter key\n";
    std::getline(cin,key);

    std::string encrypted = phrase;

    for( int i=0 ;i < phrase.length();i++)
    {
        encrypted[i] = phrase[i] ^  key[i % key.length()];

    }
    
    cout<<"enter key again"<<encrypted<<'\n';
     std::getline(cin,key1);
    for( int i=0 ;i < phrase.length();i++)
    {
        phrase[i] = encrypted[i] ^  key1[i % key1.length()];

    }

    cout<<phrase<<'\n';
    
}
