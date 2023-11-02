#include<iostream>

using namespace std;

class addNum
{
int *arr;
int n;
int sum;
public:
addNum(int n)
{
sum = 0;
this->n = n;
arr = new int[n];
}

friend int operator ++ (addNum &obj);
friend ostream& operator << (ostream &output,addNum &obj);
friend istream& operator >> (istream &input,addNum &obj1);
};

int operator ++ (addNum &obj)
{
return obj.sum/obj.n;
}

istream& operator >> (istream &input,addNum &obj1)
{
for(int i = 0 ; i < obj1.n;i++)
{
cout<<"Enter a no = ";
input>>obj1.arr[i];
obj1.sum+=obj1.arr[i];
}
return input;
}

ostream& operator << (ostream &output,addNum &obj)
{
for(int i = 0 ; i < obj.n;i++)
{
output<<obj.arr[i]<<" ";
}
return output;
}

int main()
{
addNum obj(5);
cin>>obj;
cout<<obj;
cout<<"\nAverage of no is = "<<++obj<<endl;
return 0;
}
