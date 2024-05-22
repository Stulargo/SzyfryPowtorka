#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
string deszyfrZMatury(string w,string k){
    string wynik="";
    int  j =0 ;
    for(int i =0;i<w.length();i++){
        if((int)w[i]-((int)k[j])+64<65){
            wynik+=(char)((int)w[i]-((int)k[j])+64+26);
        }
        else{
            wynik+=(char)((int)w[i]-((int)k[j])+64);
        }
        j++;
        if(j==k.length()){
            j=0;
        }

    }
    return wynik;
}
string szyfrZMatury(string w,string k){
    string wynik="";
    int  j =0 ;
    for(int i =0;i<w.length();i++){
        if(((int)w[i]+((int)k[j])-64)>90){
            wynik+=(char)((int)w[i]+((int)k[j])-64-26);
        }
        else{
            wynik+=(char)((int)w[i]+((int)k[j])-64);
        }
        j++;
        if(j==k.length()){
            j=0;
        }

    }
    return wynik;
}

string szyfrKwadratowy(string a)
{
    int r;
    r=ceil(sqrt(a.length()));
    char tab[r][r];
    int k=0;
    string b="";
    for(int i = 0 ; i < r;i++){
        for(int j = 0 ; j < r ; j++){
            if(k<a.length()){
                tab[i][j]=a[k];
            }
            else{
                tab[i][j]='_';
            }

            k++;
            cout << tab[i][j] <<" ";
        }
        cout << endl;
    }
    for(int i = 0 ; i < r;i++){
        for(int j=0;j<r;j++){
            b+=tab[j][i];
        }
    }
    return b;
}

string szyfr2(string s,int k){
    string wyraz = "";
    int j = 0;
    while(wyraz.length()!=s.length()){
        for(int i = j; i < s.length();i+=k){
            wyraz+=s[i];
        }
        j++;
    }
    return wyraz;
}

string szyfr(string s){
    string wyraz = "";
    for(int i = 0 ; i < s.length();i+=2){
        if(i==s.length()-1){
            wyraz+=s[i];
            return wyraz;
        }
        wyraz+=s[i+1];
        wyraz+=s[i];
    }
    return wyraz;
}
string Cezar(string w, int k)
{
    k=k%26;
    string szyfr = "";
    for(int i=0;i<w.length();i++)
    {
        if(w[i]+k>122)
        {
            szyfr+=w[i]+k-26;
        }
        else
        {
            szyfr+=w[i]+k;
        }
    }
    return szyfr;
}

string DeszyfrCezara(string w, int k)
{
    k=k%26;
    string szyfr = "";
    for(int i=0;i<w.length();i++)
    {
        if(w[i]-k<97)
        {
            szyfr+=w[i]-k+26;
        }
        else
        {
            szyfr+=w[i]-k;
        }
    }
    return szyfr;
}

string SzyfrPolowa(string w){
    string c1="";
    string c2="";
    for(int i=0;i<w.length()/2;i++){
          c1+=w[i] ;

    }
        for(int j=w.length()/2;j<w.length();j++){
            c2+=w[j];
        }
    string zaszyfrowane=c1+c2;
    return zaszyfrowane;
}


int main(){
  
}
