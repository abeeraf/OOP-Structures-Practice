
struct Account
{
	private:
	float balance;
	
	public:
	Account()
	{balance=0;}
	Account(float b)
	{balance=b;}
	void deposit(float dep)
	{
		balance+=dep;
	}
	bool withdraw(float wtd)
	{
		if(wtd>balance)
		{balance-=5;return 0;}
		//don't need else beacuse returning. 
		balance-=wtd;return 1;
	}
	float inquire ()
	{
		return balance;
	}
};
