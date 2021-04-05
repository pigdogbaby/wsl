#include<iostream>
using namespace std;
int main()
{
    int val;
    int sum = 0;//之前居然忘了初始化为0？？？
    while(cin>>val)//正常读入时返回1，否则返回0
    {
        sum += val;
    }
    cout<<sum<<endl;
    return 0;
}