#include <bits/stdc++.h>
using namespace std;
namespace Slongod{
template<typename T>
string its(T x)
{
    string re = "";
    vector <int> v;
    while(x) {
        v.push_back(x % 10);
        x /= 10;
    }
    while(!v.empty()) {
        re += char('0' + v.back());
        v.pop_back();
    }
    return re;
}
string getname(string pre , int k , string back)
{
    return pre + its(k) + back;
}
string getname(string pre , string back)
{
    return pre + back;
}

void main()
{
    string prob_name , in_name , out_name , ans_name; int n;
    cout << "problem_name: "; cin >> prob_name;
    cout << "in_name: "; cin >> in_name;
    cout << "out_name: "; cin >> out_name;
    cout << "ans_name: "; cin >> ans_name;
    cout << "Enter the number of testdatas: "; cin >> n;

    for (int i = 1; i <= n; i++) {
        system(("mv " + getname(prob_name , i , in_name) + " " + getname(prob_name , in_name)).c_str());
        cout << "Test #" << i << ": ";
        system(("time ./" + prob_name).c_str());
        if (system(("diff ./" + getname(prob_name , out_name) + " " + getname(prob_name , i , ans_name) + " -B -b -q").c_str())) {
            cout << "\033[31m Unaccepted \033[0m \n\n";
        } else {
            cout << "\033[32m Accepted \033[0m \n\n";
        }
        system(("mv " + getname(prob_name , in_name) + " " + getname(prob_name , i , in_name)).c_str());
    } system("exit");
}
}int main(){return Slongod :: main(),0;}