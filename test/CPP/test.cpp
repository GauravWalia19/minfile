#include <iostream>
using namespace std;
class thing
{
	int price;
	int quan;
	int b;
	public:
	thing()
	{
		price=0;
		quan=0;
		b=0;
	}
	void get_data()
	{
		cout << "enter the price of the item"<<endl;
		cin >> price;
		cout << "enter the quantity of the item"<<endl;	
		cin >> quan;
	}
	int bill()
	{
		b=price*quan;
		return b;
	}
	void display()
	{
		cout << "price: "<<price<<endl;
		cout << "quanity: "<<quan<<endl;
		cout << "bill: "<<b<<endl;
	}
};
int main()
{
	int n;
	cout <<"Enter the number of items" << endl;	
	cin >> n;
	thing T[n];
	int total=0;
	register int i=0;
	for(i=0;i<n;i++)
	{
		T[i].get_data();
		total = total + T[i].bill();
		T[i].display();
	}
	cout << "total: "<<total<<endl;
}