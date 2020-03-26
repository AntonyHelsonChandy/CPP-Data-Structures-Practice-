
#include<iostream>
#include<vector>
#include<map>

using namespace std;
int main()
{
	int sum=0;
	cout<<"Enter the sum to Achieve:\n";
	cin>>sum;
vector<int> num;
char o;
int i;
do{
	cout<<"Enter the element into Array:\n";
	cin>>i;
	num.push_back(i);
	cout<<"Do you want to continue adding element (Y/N):\n";
	cin>>o;
}while(o=='Y'||o=='y');

cout<<"{";
  for (auto it = num.begin(); it != num.end(); ++it) 
        cout << ' ' << *it<<","; 

cout<<"}\n";
cout<<"\n";
cout<<"PAIR:\n";
for(int i=0;i<=num.size();i++)
{
for(int j=(i+1);j<=num.size();j++)
{

if(num[i]+num[j]==sum)

{
cout<<' '<<num[j]<<','<<num[i]<<"\n";



}



	
}

}
return 0;


}
