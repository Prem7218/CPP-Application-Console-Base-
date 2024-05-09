#include <iostream>  
#include <windows.h>
#include <cstdlib>
using namespace std;

class Bankapplication
{
	public :
	class NewUser 
	{
		private : 
		string fname,mname,lname,email, addre, city, state, country, password, phoneno, pincode,actype;
			// After All Focus On Him.
		public : 
			void setfname(string fname)   {	this->fname = fname;	  	}
			void setmname(string mname)   {	this->mname = mname;	  	}
			void setlname(string lname)   { this->lname = lname;		}
			void setemail(string email)   {	this->email = email;		}  
			void setaddre(string addre)   {	this->addre = addre;    	}
			void   setcity(string city)   {	this->city  = city ;	  	}
			void setcntry(string country) { this->country = country;	}
			void setphono(string phoneno) {	this->phoneno = phoneno;	}
			void setpcode(string pincode) { this->pincode = pincode;	}
			void setstate(string state )  { this->state   = state; 		}
			void setpass(string password) { this->password = password;	}
			void setactyp(string actyp)   { this->actype  = actyp;		}
				
			string getfname()	{	return fname;	}
			string getmname()	{	return mname;	}
			string getlname()	{	return lname;	}
			string getemail()	{	return email;	}
			string getaddre()	{	return addre;	}
			string  getcity()	{	return city;	}
			string getcntry()	{	return country;	}
			string getphoneno() { 	return phoneno; }
			string getpcode()	{ 	return pincode; }	
			string getstate()	{ 	return state;	}
			string getpassw()	{	return password;}
			string getactyp()   {	return actype;	}
	};
		
	public :
	class AccountCreation
	{
	  	string aadhar, pancard, SocialSecureId, dob, motherName, occupation, SourceOfFund, impQusAns, AcPin, accountno;

		public :
			void setaadhar(string aadhar) 		 {	this->aadhar = aadhar;			}
			void setpancard(string pancard)		 {	this->pancard = pancard;		}
			void setSecureId(string SecureId)	 { 	this->SocialSecureId = SecureId;}
			void setdob(string dob)     		 {	this->dob = dob;				}	  
			void setmotherName(string motherName){	this->motherName = motherName;	}
			void setoccupation(string occupation){	this->occupation  = occupation;	}
			void setSrcOfFund(string SrcOfFund)  { 	this->SourceOfFund = SrcOfFund;	}
			void setimpQusAns(string impQusAns)  {	this->impQusAns = impQusAns;	}
			void setAcPin(string AcPin) 		 {  this->AcPin     = AcPin;		}
			void setaccountno(string account) 	 {	this->accountno = account;		}
		
			string getaadhar()	  {	return aadhar;			}
			string getpancard()	  {	return pancard;			}
			string getSecureId()  {	return SocialSecureId;	}
			string getdob()		  {	return dob;				}
			string getmotherName(){	return motherName;		}
			string getoccupation(){	return occupation;		}
			string getSrcOfFund() {	return SourceOfFund;	}
			string getimpQusAns() { return impQusAns; 		}
			string getAcPin() 	  { return AcPin;			}
			string getaccountno() { return accountno;		}
		//	protected : 		
	};
		
	public : 
	class BalanceDetails
	{
		string balanceHistory, ConsumerName, ConsumerCity,billConsumerNo,History[100];
		long long accountBalance, investBalance, savingBalance, fundTranferAmount, withdrawAmount, depositAmount,sendAmount, billAmount;	
		int totalWithdraw,  totalTransaction, totalDeposit, p, totalFundTransaction, withdrawTax;
		
		public : 
			void setAcbal(long long ac) 			 {	this->accountBalance = ac;		}
			void setinvest(long long invest)		 {	this->investBalance = invest;	}
			void setsavebal(long long saveBal)		 { 	this->savingBalance = saveBal;	}	
			void setfta(long long fta)     		 	 {	this->fundTranferAmount = fta;	}	  
			void setwidraw(long long widraw)	 	 {	this->withdrawAmount = widraw;	}
			void setttwidraw(int ttwidraw)	 		 {	this->totalWithdraw  = ttwidraw;}		
			void settransac(int ttransac)   	 	 { 	this->totalTransaction = ttransac;}
			void settotdeposit(int  ttdeposit)   	 { 	this->totalDeposit = ttdeposit; }
			void setdepamount(long long depamount)	 {  this->depositAmount=depamount;	}
			void setbalHist(string balHist)   		 {	this->balanceHistory = balHist;	}
			void setBill(long long bill)			 {  this->billAmount     = bill;	}
			void setConsumer(string ConsumNo)		 {  this->billConsumerNo = ConsumNo;}
			void setsendAmt(long long amt)			 {  this->sendAmount     = amt;		}
			void setHistory(string come)			 {	this->History[p] = come; p+= 1; }
			void setttfundta(int fta)				 {  this->totalFundTransaction = fta;}
			void setwithdrawtax(int  amount)		 {  this->withdrawTax = amount;		}
		
			long long getAcbal()	  {	return accountBalance;	}
			long long getinvest()	  {	return investBalance;	}
			long long getsavebal()    {	return savingBalance;	}
			long long getfta()		  {	return fundTranferAmount;}
			long long getwidraw()	  {	return withdrawAmount;	}
				  int getttwidraw()   {	return totalWithdraw;	}
				  int gettransac()    {	return totalTransaction;}
				  int gettdeposit()   {	return totalDeposit;	}
			long long getdepamount()  { return depositAmount;	}
			   string getbalHist()	  {	return balanceHistory;	}
			   int    getBill()		  { return billAmount;		}
			   string getConsumBill() { return billConsumerNo;	}
			long long getsendAmt()	  {	return sendAmount;		}
			   string getHistory(int p){return History[p];		}	
			   int getttfundta()	  { return totalFundTransaction;}
			int getwithdrawtax()	  { return withdrawTax;		}
	};
};

class UsersHistory : private Bankapplication
{
	/*Deposit Related*/	string depositAmount[100], depositerName[100], depositDate[100], depositId[100];
	/*Fund Transfer's*/ string fundAmount[100],    funderName[100],    fundDate[100],    fundId[100];
	/*Bill Payment's*/  string billAmount[100],	   billerName[100],    billdate[100],    billId[100];
	int p;
	
	void sameAll(string name, string date, string id, string amount)
	{
		cout<<"\n\n\t\t\t[*]\t\tDeposited History\t\t[*]"
			<<"\n\n\t[*]\tName\t:- "<<name
			<<"\n\n\t[*]\tDate\t:- "<<date
			<<"\n\n\t[*]\tId No\t:- "<<id
			<<"\n\n\t[*]\tAmount\t:- "<<amount;
	}
	
	public :
		
		void  setdepositAmount(string amount) {	this->depositAmount[p] = amount; 		}
		void  setdepositerName(string name)   {	this->depositerName[p] = name;		 	}
		void  setdepositDate (string date) 	  {	this->depositDate[p]   = date;			}
		void  setdepositId (string id)		  {	this->depositId[p]	   = id;   p += 1;	}
		
		void  setfundAmount(string amount) 	{	this->fundAmount[p]    = amount; 		}
		void  setfunderName(string name)   	{	this->funderName[p]    = name;		 	}
		void  setfundDate (string date) 	{	this->fundDate[p]      = date;			}
		void  setfundId (string id)			{	this->fundId[p]	   	   = id;   p += 1;	}
		
		void  setbillAmount(string amount) 	{	this->billAmount[p]    = amount; 		}
		void  setbillerName(string name)   	{	this->billerName[p]    = name;		 	}
		void  setbillDate (string date) 	{	this->billdate[p]      = date;			}
		void  setbillId (string id)			{	this->billId[p]	   	   = id;   p += 1;	}
		
		void print(int change, int n)
		{
			switch(change)
			{
				case 0 :
					sameAll(depositerName[n],depositDate[n],depositId[n],depositAmount[n]);
					break;
				
				case 1 :
					sameAll(funderName[n],fundDate[n],fundId[n],fundAmount[n]);
					break;
				
				case 2 :
					sameAll(billerName[n],billdate[n],billId[n],billAmount[n]);
					break;
			}
		}
};

	void afterEnd()	
	{
		Sleep(500),	cout<<".",	Sleep(500),	cout<<".",	Sleep(500),	 cout<<".",	Sleep(500),	 cout<<".",  Sleep(500),
		cout<<".",  Sleep(500),	cout<<".",	Sleep(500),	cout<<".",  Sleep(500), cout<<"..";
	}
	
	void enterChoice(string& check1)
	{
		cout<<"\n\n\n\t\t\t\t\t[ * ] Select Your Choice = ";
		cin>>check1;
	}
	
	void checkName(string& check1, int f)
	{
		for(f = 0; f < check1.size(); f++)
		{
			if((check1[f] < 'A' || check1[f] > 'Z') && (check1[f] < 'a' || check1[f] > 'z'))
			{
				cout<<"\n\t\t\t\t[*]\tEnter Name is Wrong Re-enter Name..";	afterEnd(); check1[0] = '6';	
				break;
			}	
		} 
	}
	
	char checkNum(string& check1)
	{
		for(int f = 0; f < check1.size(); f++)
		{
			if(check1[f] < '0' || check1[f] > '9')	{	cout<<"\t\t\t\t\t[*]\tWrong Entering  Re-enter Again..";	afterEnd(); check1[0] = '6';	break;	}
		} 
		return check1[0];
	}
	
	void switchCase(string& check1, int& k)
	{
		switch(k) 
		{	case 3 :
				cout<<"\n\n\n[ * ] Enter Chocie From Below ::- "
					<<"\n\n\t\t[ a ] Try Again."
					<<"\n\t\t[ b ] New User Registration.";
					enterChoice(check1);
				switch(check1[0])
				{
					case 'a' : case 'A' : check1[0] = 'Y'; break;
					case 'b' : case 'B' : cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t.";	afterEnd();	 check1 = "NewUser";  break;
					default  : cout<<"\n\n\n\n\t\t\t\t\t[ * ] Enter Choice Not Present."; afterEnd(); check1[0] = 'C'; break;
				}
			break;
				
			default : 
				k += 1;
				check1[0] = 'Y';	
			break;	
		}
	}
	
	void checkAcandCurrncy(string& check1)
	{
		switch(check1[0])
		{
			case 'a' : case 'A' :	cout<<"\n\n\t\t\t\tDetails Saved.";	break;
			case 'b' : case 'B' :   cout<<"\n\n\t\t\t\tDetails Saved.";	break;
			default  : 	cout<<"\n\n\t\t\tEnter Choice Is Not valid Re-Enter Later...";	afterEnd();  check1[0] = '5';
		}
	}
	
	void currencycall(string& check1)
	{
		cout<<"\n[ * ]. Select Currency ::- \n\n\t[ a ]. USD\t\t[ b ]. IND"
			<<"\n\n\t\t\t\t\t[ * ]. Enter You Choice : - ";
		cin>>check1;
	}
	
	void fname(string& check1, Bankapplication::NewUser first[], int& i)
	{
		do
		{
			cout<<"\n\n\t[ * ]. First Name :- ";
			cin>>check1;
			checkName(check1,0);
		}while(check1[0] == '6');
		first[i].setfname(check1);
	}
	
	void mname(string& check1, Bankapplication::NewUser first[], int& i)
	{
		do
		{
			first[i].setfname(check1);
			cout<<"\n\t[ * ]. Middle Name :- ";
			cin>>check1;
			checkName(check1,0);
		}while(check1[0] == '6');
		first[i].setmname(check1);
	}
	
	void lname(string& check1, Bankapplication::NewUser first[], int& i)
	{
		do
		{
			first[i].setmname(check1);
			cout<<"\n\t[ * ]. Last Name :- " ;
			cin>>check1;
			checkName(check1,0);
		}while(check1[0] == '6');
		first[i].setlname(check1);
	}
	
	void reEnterNumber()
	{
		cout<<"\n\t\tEntered Number Not Correct..."
			<<"\n\n\n\t\tRe-enter Number ::- ";		Sleep(1000);
	}
	
	void phonevalid(string& check1, Bankapplication::NewUser first[], int& i, string& account ,int& j, string state1[])
	{
		phone :										
		cout<<"\n\t[ * ]. Mobile No:- ";
		cin>>check1;
		if(check1.size()-1 == 9)
		{	j = 0;
			if(check1[0] != '0')
			{
				for(; j < check1.size(); j++)
				{
					if(check1[j] < '0' || check1[j] > '9')	{	reEnterNumber();	goto phone;		}
				}
				if(j == 10)
				{
					first[i].setphono(check1);
					//	account NO ::-	
						account += check1[8];
						account += check1[9];
					//	account NO ::-
				}
			}
			else	{	reEnterNumber();	goto phone;		}
		}
		else	{	reEnterNumber();	goto phone;		}
	}
	
	void emailcall(string& check1, Bankapplication::NewUser first[], int& i, char& acType)
	{	
		cout<<"\n\t[ * ]. Email ID :- ";	
		cin>>check1;
		
		if(check1[check1.size()-4] != '.' && check1[check1.size()-10] != '@')
			check1 += "@gmail.com";
			
		char select = 0;
		for(int g = i-1; g >= 0; g--)
		{
			if(check1 == first[g].getemail())
			{	
				do
				{
					cout<<"\n\n\t\t[ * ]\t Suggested Email Below ::- "
						<<"\n\t\t\t\t\t[1] 1. "<<acType<<check1
						<<"\n\t\t\t\t\t[2] 2. "<<"PBS"<<acType<<check1
						<<"\n\t\t\t\t\t[3] 3. "<<"BankMy"<<acType<<check1
						<<"\n\n\t\t\t\t[*] Select Choice :- ";
					cin>>select;
					switch(select)
					{
						default  : cout<<"\n\n\t\t[*] Re-select Email-Id :- ";	select = 'N';	break;
						case '1' : case 'a' :	check1 = acType + check1;	cout<<"\n\t\t\t\t\t[*] Your Email = "<<check1;	
												first[i].setemail(check1);	select = '1';	break;
						case '2' : case 'b' :   check1 = acType + "PBS" + check1;	cout<<"\n\t\t\t\t\t[*] Your Email = "<<check1;   
												first[i].setemail(check1);	select = '1';	break;
						case '3' : case 'c' :   check1 = acType + "BankMy" + check1;	cout<<"\n\t\t\t\t\t[*] Your Email = "<<check1;	
												first[i].setemail(check1);	select = '1';	break;	 
					}
				}while(select == 'N');
				acType++;	break;
			}
		}
		if(select == 0)
		{ 	first[i].setemail(check1); 	}
	}
	
	void passvalid(string& check1, Bankapplication::NewUser first[], int& i, string& account ,int& j, string state1[])
	{
		do
		{
			cout<<"\n\t[ * ]. Enter PassWord :- ";
			cin>>check1;
			if(check1.size()-1 < 6)
			{
				cout<<"\n\n\t\t\tRe-Enter PassWord Its Very Small...";
				Sleep(1000);
				check1[0] = '-';													
			}
			else 
			{
				first[i].setpass(check1);
				//	account NO ::-	
				account += check1[4];
				account += check1[5];
				//	account NO ::-
			}
		}while(check1[0] == '-');
	}
	
	void countrycall(string& check1, Bankapplication::NewUser first[], int& i, string& account ,int& j, string state1[])
	{
		do
		{
			cout<<"\n\t[ * ]. Country :- ";
			cin>>check1;
			checkName(check1,0);
		}while(check1[0] == '6');
		
		first[i].setcntry(check1);
	}
	
	void statevalid(string& check1, Bankapplication::NewUser first[], int& i, string& account ,int& j, string state1[])
	{
		int res = 0;
		do
		{
			cout<<"\n\t[ * ]. State :- ";
			if(res == 0)
				getline(cin,check1,'\n');
				getline(cin,check1,'\n');
			res = 1;
			
			for(j = 0; j < 29; j++)  
			{									
				if(check1 == state1[j])	{	res = 0;	break;	}
			}
			if(res == 0)	first[i].setstate(check1);
			else
			{
				cout<<"\n\n\t\tEnter State Not Exist's In India."
					<<"\n\n\t\tPage Going To Re-Select.";
				afterEnd();
			}
		}while(res == 1);
	}
	
	void citycall(string& check1, Bankapplication::NewUser first[], int& i)
	{
		cout<<"\n\t[ * ]. City :- ";
		getline(cin,check1,'\n');
		first[i].setcity(check1);
	}
	
	void pincodevalid(string& check1, Bankapplication::NewUser first[], int j, int& i)
	{
		pcode :
		cout<<"\n\t[ * ]. Pincode :- ";
		cin>>check1;
		if(check1.size()-1 == 5)
		{	j = 0;
			for(; j < check1.size(); j++)
			{
				if(check1[j] < '0' || check1[j] > '9')	{	reEnterNumber();	goto pcode;		}
			}
			if(j == 6)	first[i].setpcode(check1);
		}
		else	{	reEnterNumber();	goto pcode;		}
	}
	
	void streetcall(string& check1, Bankapplication::NewUser first[], int& i)
	{
		cout<<"\n\t[ * ]. Street Address :- ";
			getline(cin,check1,'\n');
			getline(cin,check1,'\n');
			first[i].setaddre(check1);
	}
	
	void selectCity(Bankapplication::NewUser first[], string maharashtra[], string andhrapradesh[], string arunachalpradesh[], string bihar[], string assam[],
					string chattisgarh[], string goa[], string uttarakhand[], string himachalpradesh[], string westbengal[], string jharkhand[], string karnataka[],
					string kerela[], string gujrat[], string haryana[], string tamilnadu[], string odisha[], string rajstan[], string sikkim[], string meghalya[],
					string tripura[], string punjab[], string mizoram[], string madhyapradesh[], string uttarhpradesh[], string nagaland[], string manipur[],
					string& check1, int& i, int j, int res)
	{
		j = 0;
		     if(first[i].getstate() == "Maharashtra")       {   for(; j < 35; j++)  if(check1 == maharashtra[j])  	  res = 1;	}		
		else if(first[i].getstate() == "Andhra Pradesh") 	{   for(; j < 31; j++)  if(check1 == andhrapradesh[j]) 	  res = 1;	}	
		else if(first[i].getstate() == "Arunachal Pradesh") {   for(; j < 21; j++)  if(check1 == arunachalpradesh[j]) res = 1;	}	
		else if(first[i].getstate() == "Bihar") 			{   for(; j < 28; j++)  if(check1 == bihar[j])   	   	  res = 1;	}	
		else if(first[i].getstate() == "Assam") 			{   for(; j < 26; j++)  if(check1 == assam[j])   	   	  res = 1;	}	
		else if(first[i].getstate() == "Chhattisgarh") 	    {   for(; j < 11; j++)  if(check1 == chattisgarh[j])  	  res = 1;	}	
		else if(first[i].getstate() == "Goa") 			    {   for(; j < 11; j++)  if(check1 == goa[j])  		  	  res = 1;	}	
		else if(first[i].getstate() == "Uttarakhand")       {   for(; j < 31; j++)  if(check1 == uttarakhand[j])   	  res = 1;	}			    
	    else if(first[i].getstate() == "Himachal Pradesh")  {   for(; j < 11; j++)  if(check1 == himachalpradesh[j])  res = 1;	}	
		else if(first[i].getstate() == "West Bengal") 	    {   for(; j < 11; j++)  if(check1 == westbengal[j])    	  res = 1;	}	
		else if(first[i].getstate() == "Jharkhand") 		{   for(; j < 26; j++)  if(check1 == jharkhand[j])     	  res = 1;	}	
		else if(first[i].getstate() == "Karnataka") 		{   for(; j < 35; j++)  if(check1 == karnataka[j])     	  res = 1;	}    	
		else if(first[i].getstate() == "Kerala") 			{   for(; j < 34; j++)  if(check1 == kerela[j])        	  res = 1;	}	
		else if(first[i].getstate() == "Gujarat") 		    {   for(; j < 11; j++)  if(check1 == gujrat[j])   	   	  res = 1;	}	
		else if(first[i].getstate() == "Haryana") 		    {   for(; j < 11; j++)  if(check1 == haryana[j])       	  res = 1;	} 	
		else if(first[i].getstate() == "Tamil Nadu")        {   for(; j < 25; j++)  if(check1 == tamilnadu[j])     	  res = 1;	}	
		else if(first[i].getstate() == "Odisha")            {   for(; j < 11; j++)  if(check1 == odisha[j])        	  res = 1;	}	
		else if(first[i].getstate() == "Rajasthan")         {   for(; j < 21; j++)  if(check1 == rajstan[j])       	  res = 1;	}   
		else if(first[i].getstate() == "Sikkim")            {   for(; j < 16; j++)  if(check1 == sikkim[j])        	  res = 1;	}	
		else if(first[i].getstate() == "Meghalaya") 		{   for(; j < 17; j++)  if(check1 == meghalya[j])      	  res = 1;	}	
		else if(first[i].getstate() == "Tripura") 		    {   for(; j < 16; j++)  if(check1 == tripura[j])       	  res = 1;	}	
		else if(first[i].getstate() == "Punjab") 			{   for(; j < 21; j++)  if(check1 == punjab[j])           res = 1;	}	
		else if(first[i].getstate() == "Mizoram")           {   for(; j < 11; j++)  if(check1 == mizoram[j])       	  res = 1;	}	
		else if(first[i].getstate() == "Madhya Pradesh") 	{   for(; j < 32; j++)  if(check1 == madhyapradesh[j]) 	  res = 1;	}	
		else if(first[i].getstate() == "Uttar Pradesh") 	{   for(; j < 31; j++)  if(check1 == uttarhpradesh[j]) 	  res = 1;	}	
	    else if(first[i].getstate() == "Nagaland")          {   for(; j < 11; j++)  if(check1 == nagaland[j])      	  res = 1;	} 	 	           	
		else if(first[i].getstate() == "Manipur") 	        {   for(; j < 17; j++)  if(check1 == manipur[j])       	  res = 1;	}
		if(res == 1)	first[i].setcity(check1);
		else	cout<<"\t\tEnter City "<<check1<<" Not Exist's In "<<first[i].getstate()<<".";	
	}
	
	void submitcall(string& check1)
	{
		cout<<"\n\n\n\t\t\t\t\t\t[ * ]. Click (Y or y) To Submit  Form..."
			<<"\n\n\n\t\t\t\t\t\t\tSubmit Form = ";
		cin>>check1;
	}
	
	void someDetails(Bankapplication::AccountCreation check[], string& check1, int& i, Bankapplication::NewUser first[], int& j, string& account)
	{
		cout<<"\n\n\t\t\t\t***\tBank User Profile Details Filling\t***"
			<<"\n\t[ * ] Remeaning Details..."
			<<"\n\n\n\t[ a ] User Name\t\t:- "<<first[i].getfname()<<" "<<first[i].getmname()<<" "<<first[i].getlname()
			<<"\n\t[ b ] Phone No\t\t:- "<<first[i].getphoneno()
			<<"\n\t[ c ] Email ID\t\t:- "<<first[i].getemail()
			<<"\n\t[ d ] City \t\t:- "<<first[i].getcity()
			<<"\n\t[ e ] Pincode\t\t:- "<<first[i].getpcode();
	}
	
	void aadharvalid(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			aadharno :
			cout<<"\n\n\t[ f ] Aadhar No\t\t:- ";
			cin>>check1;
			if(check1.size()-1 == 11)
			{	j = 0;
				for(; j < check1.size(); j++)
				{
					if(check1[j] < '0' || check1[j] > '9')	{	reEnterNumber();	goto aadharno;		}
				}
				if(j == 12)
				{
					for(j = 0; j <= 99; j++)
					{
						if(check1 == check[j].getaadhar())
						{	if(i != j)	cout<<"\n\t\t\t\t\t\t[ * ]\tEnter Addhar Number Already Exist's...";	account[0] = '6';	}
					}
					if(j == 100)
					{	account[0] = 'P';
						check[i].setaadhar(check1);
						//	account NO ::-			
						account += check1[10];
						account += check1[11];
						//	account NO ::-
					}
				}
			}
			else	{	reEnterNumber();	goto aadharno;		}
		}while(account[0] == '6');
	}
		
	void pancardvalid(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			panno :
			cout<<"\n\t[ g ] Pancard No\t:- ";
			cin>>check1;
			if(check1.size()-1 == 13)
			{	j = 0;
				for(; j < check1.size(); j++)
				{
					if((check1[j] < '0' || check1[j] > '9') && (check1[j] < 'a' || check1[j] > 'z') && (check1[j] < 'A' || check1[j] > 'Z'))
					{	reEnterNumber();	goto panno;		}
				}
				if(j == 14)
				{
					for(j = 0; j <= 99; j++)
					{
						if(check1 == check[j].getpancard())
						{	if(i != j)	cout<<"\n\t\t\t\t\t\t[ * ]\tEnter Pan Card Already Exist's...";	account[0] = '6';	}
					}
					if(j == 100)
					{	account[0] = 'P';
							check[i].setpancard(check1);
						//	account NO ::-			
							account += check1[12];
							account += check1[13];
						//	account NO ::-
					}
				}
			}
			else	{	reEnterNumber();	goto panno;		}
		}while(account[0] == '6');
	}
	
	void ssnvalid(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			ssn :
			cout<<"\n\t[ h ] SocialSecureId\t:- ";
			cin>>check1;
			if(check1.size()-1 == 9)
			{	j = 0;
				for(; j < check1.size(); j++)
				{
					if((check1[j] < '0' || check1[j] > '9') && (check1[j] < 'a' || check1[j] > 'z'))	
					{	reEnterNumber();	goto ssn;		}
				}
				if(j == 10)
				{
					for(j = 0; j <= 99; j++)
					{
						if(check1 == check[j].getSecureId())
						{	if(i != j)	cout<<"\n\n\t\t\t\t[ * ]\tEnter SSN Number Already Exist's...";	account[0] = '6'; }
					}
					if(j == 100)
					{	account[0] = 'P';
						check[i].setSecureId(check1);
						//	account NO ::-			
							account += check1[8];
							account += check1[9];
						//	account NO ::-
					}					
				}
			}
			else	{	reEnterNumber();	goto ssn;		}
		}while(account[0] == '6');
	}
	
	void dateBirth(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{	
			if(j == 1)
				cout<<"\n\t[ * ] Todays Date\t:- ";
			else
				cout<<"\n\t[ i ] Date Of Birth\t:- ";
			cin>>check1;
			if((check1[2] != '/' && check1[1] != '/') || (check1[5] != '/' && check1[4] != '/') || (check1[6] > 50 || check1[7] > 51) ||
			  ((check1[6] < 49 && check1[7] < 57) && (check1[8] > 50 && check1[9] > 51)) || 
			  ((check1[3] < 49 || check1[3] > 49) || (check1[4] < 49 || check1[4] > 50)))
				{	cout<<"\t\t\t\t\t[ * ] DOB Ex :- 01/12/2002.	Note :- [ Year Is Between 1950 To 2023 Only Valid ].", check1[0] = '6';	}
		}while(check1[0] == '6');
		check[i].setdob(check1);
	}
	
	
	void motherName(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			cout<<"\n\t[ j ] motherName\t:- ";
			getline(cin,check1,'\n');
			getline(cin,check1,'\n');
			checkName(check1,0);
		}while(check1[0] == '6');
		check[i].setmotherName(check1);
	}
	
	void occupation(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			cout<<"\n\t[ k ] occupation\t:- ";
			getline(cin,check1,'\n');
			checkName(check1,0);
		}while(check1[0] == '6');
		check[i].setoccupation(check1);
	}
	
	void sourceoffund(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		do
		{
			cout<<"\n\t[ l ] SourceOfFund\t:- ";
			getline(cin,check1,'\n');
		}while(checkNum(check1) == '6');
		check[i].setSrcOfFund(check1);
	}
	
	void questionqns(Bankapplication::AccountCreation check[], string& check1, int& i,Bankapplication::NewUser first[], int& j, string& account)
	{
		cout<<"\n\t[ m ] Question For Security Perpose :- What is Your Bank Name ? ( Enter Ans of this Question below.)\t";
		getline(cin,check1,'\n');
		check[i].setimpQusAns(check1);
	}
	
	void switchPass(string& check1, Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], int& j, int& i, string& account, string state1[], char& acType)
	{
		acType = check1[0];
		switch(acType)
		{
			case 'a' : case 'A' : 	fname(check1,first,i);	break;
			case 'b' : case 'B' :	mname(check1,first,i);	break;
			case 'c' : case 'C' :	lname(check1,first,i);	break;
			case 'd' : case 'D' :	streetcall(check1,first,i);	break;
			case 'e' : case 'E' :	citycall(check1,first,i);	break;
			case 'f' : case 'F' :	pincodevalid(check1,first,j,i);					break;
			case 'g' : case 'G' :	countrycall(check1,first,i,account,j,state1);	break;
			case 'h' : case 'H' :	emailcall(check1,first,i,acType);				break;
			case 'i' : case 'I' :	phonevalid(check1,first,i,account,j,state1);	break;
			case 'j' : case 'J' :	aadharvalid(check,check1,i,first,j,account);	break;
			case 'k' : case 'K' :	pancardvalid(check,check1,i,first,j,account);	break;
			case 'l' : case  'L':	ssnvalid(check,check1,i,first,j,account);		break;
			case 'm' : case  'M':	sourceoffund(check,check1,i,first,j,account);	break;
			case 'n' : case  'N':	questionqns(check,check1,i,first,j,account);	break;
			case 'o':  case  'O':	occupation(check,check1,i,first,j,account);		break;
			default :  cout<<"\n\n\t\t\t\tEnter Choice Is Wrong Try Again.";	afterEnd();	break;
		}
		return ;
	}
	
	void infoUpdate(Bankapplication::AccountCreation check[], Bankapplication::NewUser first[], string& check1, string& account, string state1[], char& acType,
					int& j, int& i)
	{
		do
		{
			system("cls");
			cout<<"\n\t\t\t\t\tWelcome To Form Correction Page.."
				<<"\n\n[ * ] Select Choice and Correct Detail."
				<<"\n\n\t[a] First Name.\t\t[b] Middle Name.\t[c] Last Name."
				<<"\n\n\t[d] Home address.\t[e] Home City.\t\t[f] City Pin."
				<<"\n\n\t[g] Home Country.\t[h] Email ID.\t\t[i] Phone No."
				<<"\n\n\t[j] Aadhar Card.\t[k] PanCard No.\t\t[l] Social Secure ID."
				<<"\n\n\t[m] Source Of Fund.\t[n] Secure Key Answer.\t[o] Occupation.";
			enterChoice(check1);
			switchPass(check1,first,check,j,i,account,state1,acType);
			cout<<"\n\n[ * ] Press (Y/y) For Save And Review Details."
				<<"\n[ * ] Press (S) For Only Save and Go Next..."
				<<"\n[ * ] Press (C Or c) For Continue..";
			enterChoice(check1);	
			switch(check1[0])
			{
				case 'Y' : case 'y' : check1[0] = '~'; break;	
				case 'S' : case 's' : cout<<"\n\t\t\t\tYour Banking Profile Completed.";	afterEnd();		break;
				default : cout<<"\n\n\t\tRe-enter Choice.";  check1[0] = 'C';
			}		
		}while(check1[0] == 'C');
	}
	
	void seeDetails(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], int& i, char& acType)
	{
		system("cls");
		cout<<"\n\n\t\t\t***\t\tProgram Banking Sysyem\t\t***";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t[ * ] Banking Profile Details.";
		cout<<"\n\n\n\t[ a ] First Name\t::- "<<first[i].getfname();
		cout<<"\n\t[ b ] Middle Name\t::- "<<first[i].getmname();
		cout<<"\n\t[ c ] Last Name\t\t::- "<<first[i].getlname();
		if(acType == 'V' || acType == 'v')
			cout<<"\n\t[ * ] Account ID = \t::- "<<check[i].getaccountno();
		cout<<"\n\t[ d ] Home add\t\t::- "<<first[i].getaddre();
		cout<<"\n\n\t[ e ] Home State\t::- "<<first[i].getstate();
		cout<<"\n\t[ f ] Home city\t\t::- "<<first[i].getcity();
		cout<<"\t\t\t[ g ] City Pin\t::- "<<first[i].getpcode();
		cout<<"\n\t[ h ] Country\t\t::- "<<first[i].getcntry();
		cout<<"\n\t[ i ] Email ID\t\t::- "<<first[i].getemail();
		cout<<"\t\t[ j ] Phone No\t::- "<<first[i].getphoneno();
		cout<<"\n\t[ k ] Aadhar Id\t\t::- "<<check[i].getaadhar();
		cout<<"\t\t[ l ] PanCard Id::- "<<check[i].getpancard();
		cout<<"\n\t[ m ] Social Id\t\t::- "<<check[i].getSecureId();
		cout<<"\n\t[ n ] Occupation\t::- "<<check[i].getoccupation();
		cout<<"\n\t[ o ] Source Of Fund\t::- "<<check[i].getSrcOfFund();
		cout<<"\n\t[ p ] Secure Qns Ans\t::- "<<check[i].getimpQusAns();
		return ;
	}	
	
	void profileViewShow(char& acType, Bankapplication::NewUser first[], string& check1, Bankapplication::AccountCreation check[], string& account,
						 int& j, int& i, Bankapplication::BalanceDetails balance[], string state1[]) 
	{
		preme :
		do
		{
			system("cls");
			seeDetails(first,check,balance,i,acType);
			
			cout<<"\n\n\tIf above Detail Confirm Then Enter Y/y Else Press C/c :- ";
			cin>>check1;
										
			switch(check1[0])
			{
				default : break;
				
				case 'Y': case 'y':	 cout<<"\n\n\n\t\t\tYour Banking Profile Completed..";	break;
				
				case 'C': case 'c':
					infoUpdate(check,first,check1,account,state1,acType,j,i);
					break;
			}
		}while(check1[0] == '~');
	}
	
	string intTostring(Bankapplication::BalanceDetails balance[], int n, int& i, string& check1)
	{
		check1 = "";
		int num[10] = {48,49,50,51,52,53,54,55,56,57};
		int p = 0;
		long long bal = 0;
		
		switch(n)
		{
			case 1 :	bal = balance[i].getAcbal();		break;
			case 0 :	bal = balance[i].getdepamount();	break;
			case 2 :	bal = balance[i].getBill();			break;
			case 3 :	bal = balance[i].getsendAmt();		break;
			case 4 :	bal = balance[i].getwidraw();		break;
			case 5 : 	bal = balance[i].getwithdrawtax();	break;
			case 6 :  	bal = i;	break;
		}
		
		while(bal != 0)
		{
			int digit = bal%10;
			for(n = 0; n <= 9; n++) {
				if(digit == n)
				{
					check1 += num[n]; 
		//	if convert String To Number Then Get Use N = -1 Because The First Loop In Program Get Increament Value And Get n = 0 (Index Game.).
					break;
				}
			}
			bal /= 10;  
		}
		
		n = 0;
		p = check1.size()-1;
		
		while(n < p)
			swap(check1[n++],check1[p--]);
			
		return check1;
	}
	
	string intTostring1(int n, int& i, int ch[], string& check1)
	{
		check1 = "PBS";
		int num[10] = {48,49,50,51,52,53,54,55,56,57};
		int sto = ch[i];
		while(sto != 0)
		{
			int digit = sto%10;
			for(n = 0; n <= 9; n++) {
				if(digit == n)
				{
					check1 += num[n]; 
					n = 0;	//	if convert String To Number Then Get Use N = -1 Because The First Loop In Program Get Increament Value And Get n = 0 (Index Game.).
					break;
				}
			}
			sto /= 10;  
		}
		ch[i]++;
		return check1;
	}
	
	void amountChecker(string& check1)
	{
		for(int c = 0; c < check1.size(); c++)
		{
			if(check1[c] < '0' || check1[c] > '9')
			{
				cout<<"\n\n\t\t[ * ] Enter Number Not Correct Re-enter Number";	
				check1[0] = '1';
				break;
			}
		}
	}
	
	void stringToNum(string& check1, long long& amount, int& m, int& n)
	{
		m = 0;
		char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
		for(n = 0; n <= 9 && m < check1.size(); n++) {
		if(check1[m] == num[n])	{
			amount = (amount * 10) + n;
			m += 1;	n = -1;
			}
		}
	}
	
	void collectTransfer(Bankapplication::NewUser first[], string collectTransac[], string& check1, int& dhs, int& bhs, int& fths, int& ttfunds, int& i, int& res)
	{
		int g = 0;
		do
		{	system("cls");
			switch(res)
			{
				default : cout<<collectTransac[i];	break;
				case 1 : 	
					for(g = 0; g <= i; g++)
						cout<<collectTransac[g];
					
						cout<<"\n\n\n\t\t[ * ] Enter Sr. No Or Email Id Of User [ For ==> View Particular Users History ] :- "
							<<"\n\n\t\t\t[ a ] Press A / a For Use Serial No."
							<<"\n\n\t\t\t[ b ] Pres B / b For Use Email Adress."
							<<"\n\n\t\t\t[ * ] Enter Here ::- ";
						cin>>check1;
						switch(check1[0])
						{
							case 'A': case 'a':		cout<<"\n\n\t\t[*] Enter Serial Number :- ";	cin>>g; 
								for(int k = 0; k <= i; k++)
								{
									res = (k == g) ? 1 : 0;
									if(res)
									{	system("cls");
										cout<<collectTransac[k];	cout<<"\n\n\t\t\t\t\t[ * ] Enter Any Key To Continue ::- ";	cin>>check1;
										break;
									}
								}
							break;
							
							case 'B': case 'b':		cout<<"\n\n\t\t[*] Enter Email ID :- ";	cin>>check1;
								for(int k = 0; k <= i; k++)
								{
									res = (check1 == first[k].getemail()) ? 1 : 0;
									if(res)
									{	system("cls");
										cout<<collectTransac[k];	cout<<"\n\n\t\t\t\t\t[ * ] Enter Any Key To Continue ::- ";	cin>>check1;
										break;
									}
								}
							break;
						}
					break;
			}
			cout<<"\n\n\n\t\t\t[*] Do You Want To Re-Watch History (Y or y):- ";
			cin>>check1;
			switch(check1[0])
			{
				default : 	cout<<"\n\n\t\t[*] Enter Choice Is Wrong Goint To Main Menu...";   afterEnd();	check1[0] = 'Y'; break;
				case 'Y': case 'y' : 	cout<<"\n\n\t\tGo-Ing To Re-check...";   afterEnd();	check1[0] = '2';	break;	
			}
		}while(check1[0] == '2');
	}
	
	void fundTransfer(Bankapplication::NewUser first[], int j, Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], UsersHistory storeHistory[], string& check1, string& check3, string account, string transacNo[],
					 int& i, int& n, int ch[], int& k, long long amount, int& fths, string collectTransac[],int& ttfunds, int& m,int res = 0)
	{
		cout<<"\n\n\t\t\t\t\t\tPSB's Fund Trasfer Page";
		transacNo[k] = intTostring1(n,i,ch,check1);
		storeHistory[i].setfundId(check1);
		check3 = "\n\n\t[ * ] User No :- ";
		n = 6; 
		check3 += intTostring(balance,n,i,check1);
		check3 += "\n\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\t\t\t\t\t[ * ]\t{ * }\tFund Tranfer History\t{ * }\t[ * ]\n\n\n\t[ * ] Fund Transfer Re-cept No.\t:- "; 
		check3 += transacNo[k];
		cout<<"\n\n\t\t[ * ] Recipient's Bank Name\t:- ";
		cin.ignore();
		getline(cin,account);
		storeHistory[i].setfunderName(account);
		check3 += "\n\n\t[ * ] Bank Name (Recipient)\t:- ";
		check3 += account;
		do
		{
			cout<<"\n\n\t[ * ] Recipient's Bank Number\t:- ";
			getline(cin,check1,'\n');
			if((account[0] == check1[0]) && (account[1] == check1[1]) && (account[2] == check1[2]))
			{
				account = check1;
				check3 += "\n\n\t[ * ] Bank Number (Recipient)\t:- ";
				check3 += check1;
				do
				{
					cout<<"\n\n\t[ * ] Send Amount To (Recipient) :- ";
					cin>>check1;
					checkNum(check1);
				}while(check1[0] == '6');
				
				amount = 0;
				balance[i].setsendAmt(amount);
				stringToNum(check1,amount,m,n);
				check3 += "\n\n\t[ * ] Send Amount\t\t:- ";
				check3 += check1;
				check3 += "Rs.";
				//check1 = amount;
				storeHistory[i].setfundAmount(check1);
				j = 1;
				dateBirth(check,check1,i,first,j,account);
				string date = check1;
				storeHistory[i].setfundDate(check1);
				cout<<"\n\n\n\t\t\t[ * ]\tConfirm Transfer Press (Y) [Only] = ";
				cin>>check1;
				switch(check1[0])
				{
					default :	
						cout<<"\n\n\t\t\t[*]\tEnter Choice Is Wrong Transfer Will Be Cancel"
							<<"\n\n\n\t[*] Fund Transfer Cancelled Page Goes To Main Menu..";	afterEnd();
						check1[0] = 'Y';	break;
							
					case 'Y':		
						for(n = 0; n <= 99; n++)
						{	
							res = (account == check[n].getaccountno()) ? 1 : 0;
							if(res)
							{
								amount = amount + balance[n].getAcbal();
								balance[n].setAcbal(amount);
								cout<<"\n\t\t\t\t\t\tAccount Founded :- Name :- "<<first[n].getfname()<<" "<<first[n].getlname();
								break;
							}
						}
						cout<<"\n\n\t\t\t\t[*] Money Transer Sucessfull...";	afterEnd();	
						amount = balance[i].getAcbal() - amount;
						balance[i].setAcbal(amount);
						collectTransac[i] += check3;
						collectTransac[i] += "\n\n\t[ * ]\tDate\t\t:- ";
						collectTransac[i] += date;
						ttfunds += 1;		balance[i].setttfundta(ttfunds);
						fths += 1;			balance[i].settransac(fths);
						
						cout<<"\n\n\n\t\t\t\t[*] Page Goes To Main Menu..";	afterEnd();		break;
				}
			}
			else
			{
				cout<<"\n\n\t\t[ * ]\tEnter Bank Number Not Exist's Program Go To Re-enter..";	afterEnd(); check1[0] = '3';		
			}
		}while(check1[0] == '3');
	}
	
	void accountBalanceDetail(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], int& i)
	{
		system("cls");
		cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking Page\t\t***"
			<<"\n\n\t\t[*]\tAccount Holder\t::- "<<first[i].getfname()<<" "<<first[i].getlname()
			<<"\n\n\t\t[*]\tAccount No\t::- "<<check[i].getaccountno()
			<<"\n\n\t\t[*]\tMobile No\t::- "<<first[i].getphoneno()
			<<"\n\n\t\t[*]\tHome Country\t::- "<<first[i].getcntry()
			<<"\n\n\t\t[*]\tHome State\t::- "<<first[i].getstate()
			<<"\n\n\t\t[*]\tHome City\t::- "<<first[i].getcity()
			<<"\n\n\t\t[*]\tAccount Balance\t::- "<<balance[i].getAcbal()
			<<"\n\n\t\t[*]\tTotal Tansaction's::- "<<balance[i].getttfundta()
			<<"\n\n\t\t[*]\tTotal Withdraw's::- "<<balance[i].getttwidraw()
			<<"\n\n\t\t[*]\tWithdraw Amount\t::- "<<balance[i].getwidraw()
			<<"\n\n\t\t[*]\tInvest Amount\t::- "<<balance[i].getinvest()
			<<"\n\n\t\t[*]\tSaving Amount\t::- "<<balance[i].getsavebal()
			<<"\n\n\t\t[*]\tFund Tranfer\t::- "<<balance[i].gettransac();
	}
	
	void withdrawFund(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], string& check1,
					long long amount, int m, int& i, int& whs, int& ttfunds, string collectTransac[], string& check3, string transacNo[], int& k, int& n, int ch[], int k1 = 0)
	{
		int p = 0;
		do
		{
			system("cls");
			check3 = "\n\n\t[ * ] User No :- ";
			n = 6; 
			check3 += intTostring(balance,n,i,check1);
			transacNo[k] = intTostring1(n,i,ch,check1);
			check3 += "\n\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\t\t\t\t\t[ * ]\t{ * }\tWithdraw History\t{ * }\t[ * ]\n\n\n\t[ * ] Withdraw Re-cept No. :- "; 
			check3 += transacNo[k];
			cout<<"\n\n\t\t\t\t\t[ * ] Welcome To Withdraw Service";
			cout<<"\n\n\n\t[ * ]\tEnter Your Account Num\t:- ";
			cin>>check1;
			check3 += "\n\n\t[ * ] Account Number\t:- ";
			check3 += check1;
		
			for(m = 0; m <= 99; m++)
			{
				if(check1 == check[m].getaccountno())
					break;
			}
			if(m <= 99)
			{
				p = 0;
				cout<<"\n\n\t[ * ]\tEnter Account PassWord\t:- ";
				cin>>check1;
				check3 += "\n\n\t[ * ] Account Password\t:- ";
				check3 += check1;
				for(m = 0; m <= 99; m++)
				{
					if(check1 == check[m].getAcPin())
						break;
				}
				if(m <= 99)
				{
					reaaamount : 
						do
						{
							cout<<"\n\n\t[ * ]\tEnter Withdraw Amount\t:- ";
							cin>>check1;
							checkNum(check1);
						}while(check1[0] == '6');
						
						amount = 0;
						stringToNum(check1,amount,m,n);
						balance[i].setwidraw(amount);
						
						if(amount > 25000 || balance[i].getAcbal() < 5000)
						{
							cout<<"\n\n[ * ] Enter Amount Is Very Large For Pay Withdraw Re-enter Amount (Less Than 25000 [ OR ] Ac Balance Insufficient)..."; afterEnd();
							goto reaaamount;
						}
					
					check3 += "\n\n\t[ * ] Withdraw Amount\t:- ";
					check3 += check1;
					check3 += "Rs.";
					check3 += "\t\t\tCorrect Amount.";
					
					cout<<"\n\n\t[ * ] This Transaction Is Gets 2.1 % as Tax Do You Continue  Press (Y):- ";
					cin>>check1;
					
					switch(check1[0])
					{
						default : cout<<"\n\n\t\t[*] Withdraw Is Cancel...";	afterEnd();  check1[0] = 'Y';	break;
						case 'y': case 'Y': 
							cout<<"\n\n\t[*]\tWithdraw Amount ::- "<<amount;
							check3 += "\n\n\t[ * ] Amount Over Tax\t:- ";
							check3 += "2.1% Of Amount";
							cout<<"\n\n\t[*]\tWithdraw Tax Amount ::- "<<(amount * 0.021);
							check3 += "\n\n\t[ * ] Withdraw Tax Rs\t:- ";
							
							balance[i].setwithdrawtax(amount*0.021);
							n = 5;
							check3 += intTostring(balance,n,i,check1);
							amount = balance[i].getAcbal() - (amount + (amount * 0.021));
							
							check3 += "\n\n\t[ * ] Remening Balance\t:- ";
							balance[i].setAcbal(amount);
							n = 1;
							check3 += intTostring(balance,n,i,check1);
							check3 += "Rs.";
							collectTransac[i] += check3;
							cout<<"\n\n\t\t\t\t[*] "<<balance[i].getAcbal()<<" Rs Are Withdrawed...";
							check1[0] = 'Y';	
							whs += 1;	ttfunds += 1;
							balance[i].setttwidraw(whs);
							balance[i].setttfundta(ttfunds);
							break;
					}
				}
				else
				{
					if(p == 3)	break;	
					else
					{   cout<<"\n\n\t\t\tNot Matched...";	afterEnd();  } 
						check1[0] = '1';	p++;
				}
			}
			else	
			{
				if(p == 3)	break;	
				else
				{   cout<<"\n\n\t\t\tNot Matched...";	afterEnd();  } 
					check1[0] = '1';	p++;
			}	
		}while(check1[0] == '1');
	}
	
	void depositTop(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], int& i)
	{
		system("cls");
		cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking System\t\t***"
		<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tUser Name ::-\t"<<first[i].getfname()<<" "<<first[i].getmname()<<" "<<first[i].getlname()
		<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tUser ID ::-\t"<<check[i].getaccountno()
		<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tAC Balance ::- "<<balance[i].getAcbal()
		<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tAccount Type::-\t"<<first[i].getactyp();
	}
	
	void amountCorrecter(long long& remamount, long long& amount, char& acType, string& check1)
	{
		do {
			cout<<"\n\n\t\t\t[ * ] You Have an Option.\n\n\t\t[ a ] Remove\t=\t"<<remamount<<"Rs";
			cout<<"\n\n\t\t[ b ] Add\t=\t"<<(500 - remamount)<<"Rs Then Deposit.";
			cout<<"\n\n\n\n\t\t\t\t\t[ * ] Enter Choice = ";
			cin>>check1;
			switch(check1[0]) {
				default : cout<<"\n\n\n\t\t\t\t\t\t[ * ] Re-Choice again."; afterEnd(); amount = 0; break;
				case 'a' : case 'A' : 
						amount -= remamount; 
						if(amount > 0){ cout<<"\n\n\t\t\t\t\tAmount Removed Screen Go To Next Process."; afterEnd(); system("cls"); break; }
						else{	cout<<"\n\n\t\tAfter Remove Amount Get's Zero So Re-Enter Amount.";  afterEnd();  break;  }

				case 'b' : case 'B' : amount += (500 - remamount); cout<<"\n\n\t\t\t\t\tAmount Adding Screen Go To Next Process."; afterEnd(); system("cls"); break;
			}
		}while(check1[0] == 'Y');
	}
	
	void depositInput(string& check1)
	{
		system("cls");
		cout<<"\n\n\t\t\t\t\t***\t\tProgram Banking System Deposite Page\t\t***"
		<<"\n\n[ * ] Enter Deposite Receiver Full Name Below ::- "
		<<"\n\n\n\t\t[*] Deposit Receiver  = ";
		getline(cin,check1,'\n');
		getline(cin,check1,'\n');
	}
	
	void receiverNameCheck(string& check1, Bankapplication::NewUser first[], string& check3, long long& remamount, int& m, int& n)
	{	
		remamount = 0;
		for(m = 0; m <= check1.size(); m++) {
			if(m == check1.size() || check1[m] == ' ') {
				for(n = 0; n <= 99; n++) {	bool match = false;
					switch(remamount) {
						case 0 :  match = (check3 == first[n].getfname()); /*cout<<"\nMatch & remamount & check3 ::- "<<match<<"\t"<<remamount<<" "<<check3;*/ 	break;
						case 1 :  match = (check3 == first[n].getmname()); /*cout<<"\nMatch & remamount & check3 ::- "<<match<<"\t"<<remamount<<" "<<check3;*/ 	break;
						case 2 :  match = (check3 == first[n].getlname()); /*cout<<"\nMatch & remamount & check3 ::- "<<match<<"\t"<<remamount<<" "<<check3;*/ 	break;
					}	
					if(match) {
						remamount++;
						break;
					}
				}
				check3 = "";
			}
			else
				check3 += check1[m];
		}
	}
	
	void moneyDeposit(int& n, int& m, bool& match, long long& amount, long long& remamount, int& count, char& acType, int& i,
					Bankapplication::BalanceDetails balance[], int& k, string transacNo[], string& check3, string& check1, int ch[], int history[], int& ft, 
					string & emailid, string collectTransac[], UsersHistory storeHistory[], int& dhs, int& ttfunds)
	{
		transacNo[k] = " ";	
		check1 = "PBS";
		n = i;  
		if(n > -1 && count > -1 && match == true) {	
			cout<<"\n\n\n\n\t\t\t\t[ * ] Sender && Receiver Both Account Number Matching With Entered Number's'.";
			cout<<"\n\n\t\t\t\t[ * ] Next Process Deposit Amount Is Going On..";
			afterEnd();
			cout<<"\n\n\t\t\t\t\t\t\t\t\t[ * ] Process Complete Amount Deposited.";
			remamount = balance[i].getAcbal() - amount;
			
			balance[i].settotdeposit(dhs++);
			balance[i].setttfundta(ttfunds++);
			balance[i].setAcbal(remamount);
			balance[i].settotdeposit(k);
			balance[i].settransac(k);
			balance[i].setdepamount(amount);
			
			transacNo[k] = intTostring1(n,i,ch,check1);
			storeHistory[i].setdepositId(check1);
			check3 = "\n\n\t[ * ] User No :- ";
			n = 6; 
			check3 += intTostring(balance,n,i,check1);
			check3 += "\n\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\t\t\t\t\t[ * ]\t{ * }\tDeposited Amount\t{ * }\t[ * ]\n\n\n\t[ * ] Deposit Transfer No. :- "; 
			check3 += transacNo[k];
			check3 += "\n\n\t[ * ] Deposit Amount :- ";
			n = 0;
			check3 += intTostring(balance,n,i,check1);
			storeHistory[i].setdepositAmount(check1);
			check3 += "Rs.\n\n\t[ * ] Account Balance :- ";
			n = 1;
			check3 += intTostring(balance,n,i,check1);
			check3 += "Rs."; 
			check3 += "\n\n\t[ * ]\tSent To ::- ";
			check3 +=  emailid;
			storeHistory[i].setdepositerName(emailid);
			collectTransac[i] += check3;
			balance[i].setHistory(check3);
			history[ft] = k;	ft +=1;
			ttfunds += 1;
			balance[i].setttfundta(ttfunds);
			dhs += 1;
			balance[i].settotdeposit(dhs);
			
			cout<<"\n\n\n\t\t\t\t\tAmount "<<amount<<" Is Cut Form Bank.";
			remamount = balance[count].getAcbal() + amount;
			balance[count].setAcbal(remamount);
			k += 1;
		}	
		else {
			cout<<"\n\t\t\t\tAccount Receiver Number Not Match Try Again.";	afterEnd();
			if(count <= 2) count++;	
		}
	}
	
		void receiverNumFind(string& check3, Bankapplication::AccountCreation check[], int& count, string& check1, int& m, int& n,int& i, char& acType,
	 					 long long& amount, bool& match, long long& remamount, Bankapplication::BalanceDetails balance[], int& k, string transacNo[],
						  int ch[], int history[], int& ft, string& emailid, string collectTransac[], UsersHistory storeHistory[], int& dhs, int& ttfunds)
	{
		do
		{
			match = false;
			if(check3 == check[i].getaccountno()) {
				count = -1;
				cout<<"\n\n\t\t[*] Receiver Account Number\t= ";
				cin>>check1;
				emailid = check1;
				
				for (m = 0; m <= 99; m++) {
				    if (check1 == check[m].getaccountno()) {
				        count = m; 
				        match = true;
				        break; 
				    }
				}
				n = i;
				m = 0;
				cout<<"\n\n\t[*] Enter Deposit Date =\t";
				cin>>check1;
				storeHistory[i].setdepositDate(check1);
				moneyDeposit(n,m,match,amount,remamount,count,acType,i,balance,k,transacNo,check3,check1,ch,history,ft,emailid,collectTransac,storeHistory,dhs,ttfunds);		/* Function */
			}
		}while(acType == 'M');
	}
	
	void depoAmountBank(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[],
						string& check1, int& i, char& acType, int& k, long long& amount, int& m, int& n, long long& remamount,
						string& check3, int& count, bool& match, string transacNo[], int ch[], int& ft, int history[], string emailid, string collectTransac[]
						, UsersHistory storeHistory[], int& dhs, int& ttfunds)
	{
		do
		{	
			check1 = "";	amount = 0;
			firstme :
			system("cls");
			depositTop(first,check,balance,i);		/* Function */
			cout<<"\n\n\n\t[ * ] Main Instruction's Before Deposit ::-"
				<<"\n\n\n\n\t\t\t[ * ] Amount always grater than 500."
				<<"\n\n\t\t\t[ * ] Amount always multiple of 500."
				<<"\n\n\t\t\t[ * ] Amount grater than 75000 deposit in two Step."
				<<"\n\n\t\t\t[ * ] Amount Deposit Process Is Getting Complete In (Aumtomacity)."
				<<"\n\n\t\t\t[ * ] Check Amount Is Multiple Of 500 (Below Enter Amount).\n\n"
				<<"\t\t\t[ * ] Enter Amount Here :- ";
			cin>>check1;
			
			stringToNum(check1,amount,m,n);		/* Function */
				
			if(amount > 0 && amount < balance[i].getAcbal() && amount <= 75000) {
				remamount = amount%500;
				
				if(remamount == 0)  {	cout<<"\n\n\t\t\t[ * ] Amount Is Multiple Of 500.";	afterEnd(); system("cls");	}
				else 
				{	amountCorrecter(remamount, amount, acType, check1);
					if(amount == 0)
						goto firstme;		/* Function */
				}
				
				depositInput(check1);		/* Function */ 
				receiverNameCheck(check1,first,check3,remamount,m,n);	/* Function */
				
				cout<<"\n\n\t\tD0 = "<<remamount;
				if(remamount == 3) {	
					cout<<"\n\t\t\tAccount Holer Name = "<<check1<<" Founded.";
					do {	
						cout<<"\n\n\t\t[*] Sender Account Number\t = ";
						cin>>check3;
						receiverNumFind(check3,check,count,check1,m,n,i,acType,amount,match,remamount,balance,k,transacNo,ch,history,ft,emailid,collectTransac,storeHistory,dhs,ttfunds);	
					
					}while(acType == 'Y');
				}
			}
			else {	
				cout<<"\n\n[ * ] Reason's Why Amount Not Deposited."
					<<"\n\n[ a ] Amount Is Greater Than Account Balance."
					<<"\n\n[ b ] Amount Is Greater Than 75000."
					<<"\n\n[ c ] Amount Is Less Than Zero."
					<<"\n\n\n\n\t\t\t[ * ]\tSuggestion's\t[ * ]"
					<<"\n\n\t\t[ a ]\tCheck Account Balance."
					<<"\n\n\t\t[ b ]\tCancel deposit Process."
					<<"\n\n\n[ * ] Enter Your Choice = ";
				cin>>check1;
					
				switch(check1[0]) {
					default : cout<<"\n\n\t\t\t\t\tEnter Choice is Not Present."; break;
					case 'a': case 'A':	 accountBalanceDetail(first,check,balance,i); break;
					case 'b': case 'B':  break;
				}
			}	 
			cout<<"\n\n\n\t\t\t\t\tDo You Deposit Again ::- ";
			cin>>check1;
		}while(check1[0] == 'Y' || check1[0] == 'y');
	}
	
	void checkBook(Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], string& check1, int& i)
	{
		do
		{	
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t\t[ * ] Welcome to Your Checkbook Manager (PBS Bank) [ * ]";
			cout<<"\n\n\t[ * ] Account Number :- ";
			cin>>check1;
			if(check1 == check[i].getaccountno())
			{
				cout<<"\n\n\t[ * ] Account Pin :- ";
				cin>>check1;
				if(check1 == check[i].getAcPin())
				{
					cout<<"\n\n\n\n\n\t\t\t\t\t||==========================================================================||."
						<<"\n\n\t\t\t\t\t||\t[*] Branch Name\t\t:- PBS Bank :- "<<first[i].getcity()
						<<"\n\n\t\t\t\t\t||\t[*] Mobile Number\t:- "<<first[i].getphoneno()
						<<"\n\n\t\t\t\t\t||\t[*] Account Number\t:- "<<check[i].getaccountno()
						<<"\n\n\t\t\t\t\t||\t[*] Account Name\t:- "<<first[i].getfname()<<" "<<first[i].getmname()<<" "<<first[i].getlname()
						<<"\n\n\t\t\t\t\t||\t[*] Account Type\t:- "<<first[i].getactyp()
						<<"\n\n\t\t\t\t\t||\t[*] Account Balance\t:- "<<balance[i].getAcbal()
						<<"\n\n\t\t\t\t\t||\t[*] Transaction All\t:- "<<balance[i].gettransac()
						<<"\n\n\t\t\t\t\t||==========================================================================||.";
				}
				else	check1[0] = '9';
			}
			else	check1[0] = '9';
		}while(check1[0] == '9');
	}
	
	void depoHistory(Bankapplication::BalanceDetails balance[], Bankapplication::NewUser first[], int& bt, int& k, int history[], string& check1, int& dhs,int& i)
	{
		do
		{
			system("cls");
			cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking Balance History Page\t\t***";
			if(dhs >= 1)
			{
				for(bt = 0; bt < k; bt++)
				{
					if(balance[i].getHistory(bt) == "\0" || balance[i].getHistory(bt) == "")
						break;
						
					cout<<balance[i].getHistory(bt); 
				}
			}
			cout<<"\n\n\n\t\t[ * ] Do You Want To Continue History Detail Page (Y Or y) ::- ";
			cin>>check1;
		}while(check1[0] == 'Y' || check1[0] == 'y');
	}
	
	void confirmPay(Bankapplication::BalanceDetails balance[] ,string& check1, string& check3, int history[], int& k, int& ft, int& i, int& ttfunds, string collectTransac[], int n)
	{
		cout<<"\n\n\n\t\t\t\t\t\t[ * ]\tConfirm Payment Press (Y)::- ";
		cin>>check1;
		if(check1[0] == 'Y')
		{	
			cout<<"\n\n\t\t\t\t\t\t\t[ * ]\t\tBill Payment Successful...";
			balance[i].setAcbal(balance[i].getAcbal() - balance[i].getBill());
			balance[i].setbalHist(check3);
			ttfunds += 1;
			balance[i].setttfundta(ttfunds);
			history[ft] = k;
			k += 1;
			ft += 1;	afterEnd();
			check1[0] = 'Q';	
		}
		else
		{
			cout<<"\n\n\t\t\t\t\t\t\t[ * ]\t\tBill Payment Cancel...";
			afterEnd();	check1[0] = 'Q';
		}
	}
	
	void electricPayment(Bankapplication::AccountCreation check[], Bankapplication::NewUser first[], Bankapplication::BalanceDetails balance[], int j, string account, string transacNo[], string check3, string& check1, int& i, int n, int& k,
	 					int ch[],string collectTransac[], UsersHistory storeHistory[] , long long amount, int m)
	{
		transacNo[k] = intTostring1(n,i,ch,check1);
		storeHistory[i].setbillId(check1);
		check3 = "\n\n\t[ * ] User No :- ";
		n = 6; 
		check3 += intTostring(balance,n,i,check1);
		check3 += "\n\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\t\t\t\t\t[ * ]\t{ * }\tElectric Bill History\t{ * }\t[ * ]\n\n\n\t[ * ] Bill Pay Transfer No.\t:- "; 
		check3 += transacNo[k];
		cout<<"\n\n\n\t[ * ] Enter Bill Consumer Number = ";
		cin>>check1;
		
		check3 += "\n\n\t[ * ] Consumer Number\t\t:- ";
		check3 += check1;
		
		cout<<"\n\n\n\t[ * ] Enter City = ";
		cin>>check1;
		
		check3 += "\n\n\t[ * ] city\t\t\t:- ";
		check3 += check1;
		
		cout<<"\n\n\t[ * ] Bill Consumer Name = ";
		getline(cin,check1,'\n');
		getline(cin,check1,'\n');
		storeHistory[i].setbillerName(check1);
		check3 += "\n\n\t[ * ] Account Name\t\t:- ";
		check3 += check1;
		
		reaaamount :
		do
		{
			cout<<"\n\n\t[ * ] Enter Bill Amount = ";
			cin>>check1;
			checkNum(check1);
		}while(check1[0] == '6');
		
		amount = 0;
		stringToNum(check1,amount,m,n);
		if(amount > 10000 || amount <= 0 || balance[i].getAcbal() < 5000)
		{
			cout<<"\n\n[ * ] Enter Amount Is Very Large For Pay Electric Bill Re-enter Amount (Less Than 10000 [ OR ] Ac Balance Insufficient)..."; afterEnd();
			goto reaaamount;
		}
		
		check3 += "\n\n\t[ * ] Bill Amount\t\t:- ";
		balance[i].setBill(amount);
		n = 2;
		check3 += intTostring(balance,n,i,check1);
		check3 += "\t\t\tCorrect Amount.";
		n = 2;
		storeHistory[i].setbillAmount(intTostring(balance,n,i,check1));
		j = 1;
		dateBirth(check,check1,i,first,j,account);
		storeHistory[i].setbillDate(check1);
		
		check3 += "\n\n\t[ * ] Bill Date\t\t\t:- ";
		check3 += check1; 
		collectTransac[i] += check3;
	}
	
	void viewHistoryUser(int& g, Bankapplication::NewUser first[], Bankapplication::AccountCreation check[], Bankapplication::BalanceDetails balance[], string& check1, int& res,
						char& acType, int count)
	{
		do
		{
			count = 0;
			system("cls");
			cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking System User View Menu\t\t***";
			for(g = 0; g <= 99; g++)
			{
				res = (first[g].getemail() != "0") ? 1 : 0;
				if(res) 
				{
					cout<<"\n\n\n\t||========================================================================================||";
					cout<<"\n\n\t\t [ * ] Sr."<<(count)<<". Name:- "<<first[g].getfname()<<" "<<first[g].getlname()<<". "
						<<"\t\tAc Type:- "<<first[g].getactyp()<<".";
					cout<<"\n\n\t\tEmail Id :- "<<first[g].getemail()<<"\t\t[ * ] Bank City :- "<<first[g].getcity();
					cout<<"\n\n\t||========================================================================================||\n";
					count++;
				}
			}
				
			cout<<"\n\n\n\t\t[ * ] Enter Email Address Of User [ For ==> View Users Profile ] :- ";
			
			cin>>check1;
			
			if(check1[0] >= 48 && check1[0] <= 57)
				res = 0;
			else
			{
				for(g = 0; g <= 99; g++)
				{
					res = (check1 == first[g].getemail()) ? 1 : 0;
					if(res)
					{	
						seeDetails(first,check,balance,g,acType);
						cout<<"\n\n\t\t\t\t\t\t[ a ] Do You See Other User Detail's Press (Only [ Y ]) :- "
							<<"\n\n\t\t\t\t\t\t[ b ] Else Press [ M ] For Go To Manager Main Menu."
							<<"\n\n\t\t\t\t\t\t[ * ] Enter Your Choice :- ";
						cin>>check1;
						switch(check1[0])
						{
							default :  cout<<"\n\n\t\t\t\t\t\t\t[ * ] Enter Choice Is Wrong..";	afterEnd(); check1[0] = '7';  break;
							case 'M': case 'm': cout<<"\n\n\t\t\t\t\t\t[ Manager Main Menu]..";	afterEnd();	check1[0] = '7';  break;
							case 'Y':  cout<<"\n\n\tView Profile Menu..";	afterEnd();	check1[0] = '6';	break;
						}
						break;
				  	}
				}
			}
			if(res == 0) {	cout<<"\n\n\n\t\t\t\t\t\tEnter Choice Is Not Present Re_Come And Enter....";	afterEnd();		check1[0] = '7';	}
		}while(check1[0] == '6');
	}
	

int main()
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	Bankapplication::NewUser first[100];	
	Bankapplication::AccountCreation check[100];
	Bankapplication::BalanceDetails balance[100];
	UsersHistory storeHistory[100];
	
	static int flag = 0, dhs = 0, bhs = 0, fths = 0, ttfunds = 0, whs = 0;
	static int k = 0;
    int i= -1, j = 0, res = 0, count = 0, ch[100],m = 0, n = 0,ft = 0, bt = 0, history[100] = {0}, managerStore[100] = {0};
    long long amount = 0, remamount = 0;
	bool match = 0;
	
	char acType = 49;
	string check1 = "", check3 = "", emailid = "", pass = "", account = "", transacNo[100] = "",collectTransac[100] = "";
	
	for(m = 0; m <= 99; m++)
	{
		first[m].setfname("0");		first[m].setmname("0");		first[m].setlname("0");
		first[m].setemail("0");		first[m].setaddre("0");		first[m].setcity("0");
		first[m].setcntry("0");		first[m].setphono("0");		first[m].setpcode("0");
		
		check[m].setaadhar("0");		check[m].setpancard("0");	check[m].setSecureId("0");
		check[m].setmotherName("0");	check[m].setdob("0");		check[m].setoccupation("0");
		check[m].setSrcOfFund("0");		check[m].setimpQusAns("0");	check[m].setAcPin("0");
		check[m].setaccountno("0");		balance[m].setbalHist("0");	balance[m].setConsumer("0");
		
		balance[m].setAcbal(0);			balance[m].setinvest(0);	balance[m].setsavebal(0);
		balance[m].setfta(0);			balance[m].setwidraw(0);	balance[m].setttwidraw(0);
		balance[m].settotdeposit(0);	balance[m].setdepamount(0);	balance[m].setBill(0);
		balance[m].setsendAmt(0);		balance[m].setttfundta(0);	balance[m].setHistory("0");
	}
	
	void (*functionarray1[])(string& check1, Bankapplication::NewUser first[], int& i, string& account, int& j, string state1[]) =
	{	passvalid,phonevalid,countrycall,statevalid	 };	
	
	void (*functionArray[])(Bankapplication::AccountCreation check[], string& check1, int& i, Bankapplication::NewUser first[], int& j, string& account) = 
	{	someDetails,aadharvalid, pancardvalid, ssnvalid, dateBirth,motherName,occupation,sourceoffund,questionqns	};

		
	do
	{
		string state1[] = {"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", 
						   "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", 
	    			       "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", 
						   "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
		do
		{
				
			do
			{	k = 0;
				system("cls");
				cout<<"\n\n\t\t\t\t***\t\tWelcome Program Banking Sysyem\t\t***"
			    	<<"\n\n\t[ * ] Select Your Best Choice [ * ]"
			    	<<"\n\n\n\t\t\t\t[ a ]\t\t\tNew User."
			    	<<"\n\n\t\t\t\t[ b ]\t\t\tExitsing User."
			    	<<"\n\n\t\t\t\t[ c ]\t\t\tAdmin Or Manager."
			    	<<"\n\n\t\t\t\t[ d ]\t\t\tExit."
			    	<<"\n\n\n\t[ A Or a ] Press For Choice 1st."
			    	<<"\n\n\t[ B Or b ] Press For Choice 2nd."
			    	<<"\n\n\n\t[ C Or c ] Press For Choice 3rd."
			    	<<"\n\n\t[ D Or d ] Press For Choice 4th.";
			    	
				enterChoice(check1);
				
				switch(check1[0])
			    {
			    	case 'c' : case 'C' :	cout<<"\n\n\n\n\t\t\t\t\t[ * ] Admin Page...";	i++;	afterEnd();	check1 = "Manager";	break;
			    	case 'd' : case 'D' : 	cout<<"\n\n\n\n\t\t\t\t\t[ * ] Thanks For Coming Come Back Again...";	afterEnd();	exit(0);
			    	case 'a' : case 'A' : 	cout<<"\n\n\n\n\t\t\t\t\t[ * ] Page Go To New User Login Page..."; afterEnd(); 	check1 = "NewUser";	  break;
			    	
			    	case 'b' : case 'B' : 
			    	do
			    	{	
			    		system("cls");
						cout<<"\n\n\t\t\t\t***\t\tWelcome Program Banking Login Page\t\t***";
					    cout<<"\n\n\n\t\t[***]\t\t\tEnter Email ID\t\t::- ";
					    cin>>emailid;
					    
					    if(emailid[emailid.size()-4] != '.' && emailid[emailid.size()-10] != '@') {
					    	emailid = emailid + "@gmail.com";
							cout<<"\t\t\t\t\t\t\t\t\t[ * ] Email Id :- "<<emailid;
						}
						
						for(j = 0; j <= 99; j++) {
							if(emailid == first[j].getemail()) {	
								cout<<"\n\n\t\t\t\t\tEmail Id Matched.";
								break;
							}
						}
						
						if(j <= 99)
						{	k = 0;
							do
							{
								cout<<"\n\n\t\t[***]\t\t\tEnter Password\t\t::- ";
						    	cin>>pass;	
						    	if(pass.size() < 5)	{
						    		cout<<"\n\t\t\t\t\t\t\t\t[ * ] Enter Password Not Match...";	
						    		switchCase(check1,k);
								}
								else
								{	
							    	cout<<"\n\n\t\t\t\t\tPass-word Matching is On..";	afterEnd(); Sleep(500);
							    	for(m = 0; m <= 99; m++) {
										if(pass == first[m].getpassw()) {
											if(j == m) {
												cout<<"\n\n\n\t\t\t\t\tThanks For Log In.";
												afterEnd();	check1 = "OldUser"; i = j; break;
											}
										}
									}
									if(m == 100)
									{	
										cout<<"\t\t\t\tPassword Not Match..";	
										switchCase(check1,k);	
									}
								}	
							}while(check1[0] == 'Y');
						}
						else {
							cout<<"\n\n\n\t\t\t\t\t[ * ] Enter Email Id Not Match...", afterEnd();  check1[0] = 'Y';
							switchCase(check1,k);
						}
					}while(check1[0] == 'Y');
					break;
					
					default : cout<<"\n\n\n\n\t\t\t\t\t[ * ] Enter Choice Is Not Present Please Re-Select Option's.."; afterEnd(); check1[0] = 'C';	break;
			    }
			}while(check1[0] == 'C');	
			
			string maharashtra[] = {"Mumbai","Pune","Nagpur","Thane","Nashik","Aurangabad","Solapur","Kalyan-Dombivli","Vasai-Virar","Navi Mumbai",
		                     "Amravati","Kolhapur","Ulhasnagar","Sangli","Malegaon","Jalgaon","Akola","Latur","Dhule","Ahmednagar",
		                     "Chandrapur","Parbhani","Ichalkaranji","Jalna","Bhusawal","Nanded","Ratnagiri","Gondia","Satara","Barshi",
		                     "Beed","Yavatmal","Panvel","Badlapur"};
		                     
		    string andhrapradesh[] = {"Visakhapatnam", "Vijayawada", "Guntur", "Nellore", "Kurnool", "Rajahmundry", "Tirupati", "Kadapa", "Anantapur", "Vizianagaram", 
		                        "Eluru", "Ongole", "Nandyal", "Chittoor", "Machilipatnam","Srikakulam", "Bhimavaram", "Madanapalle", "Guntakal", "Dharmavaram",
		                        "Gudivada", "Narasaraopet", "Tadipatri", "Kakinada", "Hindupur","Tenali", "Proddatur", "Adoni", "Anakapalle", "Amaravathi"};
		
			string arunachalpradesh[] = {"Itanagar", "Tawang", "Ziro", "Bomdila", "Pasighat","Aalo (Along)", "Tezu", "Namsai", "Roing", "Yingkiong",
		    							 "Khonsa", "Changlang", "Seppa", "Dirang", "Anini","Daporijo", "Naharlagun", "Koloriang", "Longding", "Hawai"};
			
			string bihar[] = {"Patna", "Gaya", "Bhagalpur", "Muzaffarpur", "Purnia","Darbhanga", "Bihar Sharif", "Arrah", "Begusarai", "Katihar",
		    				  "Munger", "Chhapra", "Bettiah", "Saharsa", "Sasaram","Hajipur", "Dehri", "Siwan", "Motihari", "Nawada",
		    				  "Bagaha", "Buxar", "Kishanganj", "Sitamarhi", "Jamalpur","Jehanabad", "Aurangabad"};
		
			string assam[] = {"Guwahati", "Silchar", "Dibrugarh", "Jorhat", "Nagaon","Tinsukia", "Tezpur", "Bongaigaon", "Dhubri", "Sivasagar",
		    				  "Lakhimpur", "Goalpara", "Barpeta", "Karimganj", "Hailakandi","Golaghat", "Kokrajhar", "Dhemaji", "Dispur", "Hojai",
		    				  "Morigaon", "Nalbari", "Darrang", "Sonitpur", "Kamrup"};
		    				  
		    string jharkhand[] = {"Ranchi", "Jamshedpur", "Dhanbad", "Bokaro Steel City", "Deoghar","Phusro", "Hazaribagh", "Giridih", "Ramgarh", "Medininagar (Daltonganj)",
		    					  "Chirkunda", "Jhumri Telaiya", "Saunda", "Sahibganj", "Pakur","Chaibasa", "Jumri Tilaiya", "Koderma", "Dumka", "Godda",
		    					  "Gumla", "Lohardaga", "Simdega", "Khunti", "Tata Nagar"};
		    		
		    string karnataka[] = {"Bengaluru","Bangalore", "Mysuru","Mysore", "Mangaluru","Mangalore", "Hubballi-Dharwad", "Belagavi","Belgaum",
		    					  "Shivamogga","Shimoga", "Ballari","Bellary", "Tumakuru","Tumkur", "Bidar", "Vijayapura","Bijapur",
		    					  "Gulbarga","Kalaburagi", "Davangere", "Raichur", "Bhadravati", "Hassan","Udupi", "Kolar", "Mandya", "Chitradurga", "Gadag",
		    					  "Chikkamagaluru", "Sirsi", "Bijapur", "Gangavathi", "Ranebennuru"};
		    					  
		    string kerela[] = {"Thiruvananthapuram","Trivandrum", "Kochi","Cochin", "Kozhikode","Calicut", "Thrissur","Trichur", "Kollam","Quilon",
		    				   "Alappuzha","Alleppey", "Palakkad","Palghat", "Malappuram", "Manjeri", "Thalassery",
		    				   "Kottayam", "Kannur","Cannanore", "Kasaragod", "Pathanamthitta", "Idukki","Ernakulam", "Wayanad", "Kozhencherry", "Varkala", "Thodupuzha",
		    				   "Kodungallur", "Changanassery", "Attingal", "Kunnamkulam", "Thripunithura"};
		    				   
		    string madhyapradesh[] = {"Indore", "Bhopal", "Jabalpur", "Gwalior", "Ujjain","Sagar", "Dewas", "Satna", "Ratlam", "Rewa",
		    						  "Murwara","Katni", "Singrauli", "Burhanpur", "Khandwa", "Bhind","Chhindwara", "Guna", "Shivpuri", "Vidisha", "Chhatarpur",
		    						  "Damoh", "Mandsaur", "Khargone", "Neemuch", "Pithampur","Hoshangabad", "Itarsi", "Sehore", "Betul", "Seoni"};
		   
		   	string manipur[] = {"Imphal", "Thoubal", "Churachandpur", "Bishnupur", "Ukhrul","Senapati", "Tamenglong", "Chandel", "Kakching", "Jiribam",
		    				    "Moreh", "Noney", "Kamjong", "Kangpokpi", "Tengnoupal","Pherzawl"}; 
								
			string meghalya[] = {"Shillong", "Tura", "Jowai", "Nongstoin", "Mawlynnong","Dawki", "Williamnagar", "Baghmara", "Nongpoh", "Sohra","Cherrapunji",
		    					 "Mairang", "Ampati", "Resubelpara", "Khliehriat", "Mendipathar"};	
								 
			string tripura[] =  {"Agartala", "Udaipur", "Dharmanagar", "Pratapgarh", "Kailashahar","Belonia", "Khowai", "Ambassa", "Sonamura", "Amarpur",
		    					 "Sabroom", "Bishalgarh", "Kamalpur", "Teliamura", "Jirania"};	
		    		
		    string uttarhpradesh[] = {"Lucknow", "Kanpur", "Ghaziabad", "Agra", "Varanasi","Meerut", "Allahabad", "Bareilly", "Aligarh", "Moradabad",
		    						  "Saharanpur", "Gorakhpur", "Noida", "Firozabad", "Jhansi","Muzaffarnagar", "Mathura", "Faizabad", "Mirzapur", "Rampur",
									  "Shahjahanpur", "Farrukhabad", "Maunath Bhanjan", "Hapur", "Noida","Etawah", "Orai", "Bahraich", "Sultanpur", "Azamgarh"};
		
			string punjab[] = {"Ludhiana", "Amritsar", "Jalandhar", "Patiala", "Bathinda","Mohali", "Batala", "Pathankot", "Moga", "Abohar",
		    				   "Firozpur", "Kapurthala", "Phagwara", "Hoshiarpur", "Sangrur","Gurdaspur", "Barnala", "Tarn Taran", "Rajpura", "Fazilka"};
		
			string rajstan[] = {"Jaipur", "Jodhpur", "Udaipur", "Kota", "Ajmer","Bikaner", "Bhilwara", "Alwar", "Bharatpur", "Sikar",
		    					"Pali", "Sri Ganganagar", "Jhunjhunu", "Chittorgarh", "Tonk","Kishangarh", "Beawar", "Hanumangarh", "Dausa", "Churu"};
					
			string sikkim[] = {"Gangtok", "Pelling", "Yuksom", "Namchi", "Geyzing","Lachung", "Ravangla", "Rumtek", "Mangan", "Jorethang",
		    				    "Singtam", "Chungthang", "Soreng", "Pakyong", "Rangpo"};
		    				    
		    string tamilnadu[] = {"Chennai", "Coimbatore", "Madurai", "Tiruchirappalli", "Salem","Tiruppur", "Erode", "Vellore", "Tirunelveli", "Thoothukudi",
		    					  "Dindigul", "Thanjavur", "Ranipet", "Sivakasi", "Karur","Udhagamandalam","Ooty", "Hosur", "Nagercoil", "Kanchipuram", "Kumarapalayam"};
		
			string chattisgarh[] = {"Raipur", "Bhilai", "Bilaspur", "Durg", "Korba","Raigarh", "Rajnandgaon", "Ambikapur", "Jagdalpur", "Champa"};
		
			string goa[] = {"Panaji", "Margao", "Vasco da Gama", "Mapusa", "Ponda","Calangute", "Bicholim", "Cuncolim", "Canacona", "Sanguem"};
			
			string gujrat[] = {"Ahmedabad", "Surat", "Vadodara", "Rajkot", "Bhavnagar","Jamnagar", "Junagadh", "Anand", "Gandhinagar", "Morbi"};
		
			string haryana[] = {"Gurgaon", "Faridabad", "Rohtak", "Panipat", "Karnal","Hisar", "Sonipat", "Panchkula", "Ambala", "Yamunanagar"};
		
			string himachalpradesh[] = {"Shimla", "Dharamshala", "Mandi", "Solan", "Kangra","Chamba", "Kullu", "Hamirpur", "Una", "Bilaspur"};
		
			string mizoram[] =  {"Aizawl", "Lunglei", "Saiha", "Champhai", "Kolasib","Serchhip", "Lawngtlai", "Mamit", "Hnahthial", "Saitual"};
			
			string nagaland[] = {"Kohima", "Dimapur", "Mokokchung", "Tuensang", "Wokha","Zunheboto", "Phek", "Kiphire", "Longleng", "Peren"};
		
			string odisha[] = {"Bhubaneswar", "Cuttack", "Rourkela", "Berhampur", "Sambalpur","Puri", "Balasore", "Bhadrak", "Baripada", "Jharsuguda"};
			
			string uttarakhand[] = {"Dehradun", "Haridwar", "Roorkee", "Haldwani", "Rudrapur","Kashipur", "Rishikesh", "Nainital", "Mussoorie", "Almora"};
		
			string westbengal[] = {"Kolkata", "Siliguri", "Darjeeling", "Asansol", "Durgapur","Bardhaman", "Malda", "Baharampur", "Kharagpur", "Shantiniketan"};
			
			if(check1 == "NewUser")
			{
				i += 1;
				cout<<"\n\n\t\t[ * ] "<<i;
				collectTransac[i] = "";	ch[i] = 1000 + i;
				dhs = 0, bhs = 0, fths = 0;
				check3 = "";
				balance[i].setAcbal(500000),	balance[i].setfta(0),	    balance[i].setinvest(0),		balance[i].setsavebal(0),
				balance[i].setwidraw(0),		balance[i].setttwidraw(0), 	balance[i].settransac(0),		balance[i].setdepamount(0), balance[i].settotdeposit(0);
				account = "PBS";
				
				flag = i;
				do
				{
					system("cls");
					cout<<"\n\n\t\t\t\t\t\t***\tNew User Bank Account Registration Form\t\t***"
						<<"\n[ * ] Note::- "
						<<"\n\n\t[ 1 ]. Select [ Alphabet (Samll Letter)] at Time When Select a Choice In Multiple's'."
						<<"\n\t[ 2 ]. Enter Proper Details In Form."
						<<"\n\t[ 3 ]. Pincode :- 6 Character , Phone No : - 10 Character."
						<<"\n\t[ 4 ]. Enter Choice's First Letter Must Me Capital."
						<<"\n\n\n\t\t\t\t\t\t***\tBank Account Registration  Form\t\t***"
						<<"\n\n[ * ]. Please specify the type of account you want to open."
						<<"\n\n[ * ]\tSelect Account Type."
						<<"\n\n\t[ a ]. Saving's Account."
						<<"  \n\t[ b ]. Current's Account.";
					enterChoice(check1);
					if(check1[0] == 'a' || check1[0] == 'A')	first[i].setactyp("Saving Account");	
					if(check1[0] == 'b' || check1[0] == 'B')	first[i].setactyp("Current Account");
					checkAcandCurrncy(check1);
					
					if(check1[0] != '5')	currencycall(check1),	checkAcandCurrncy(check1);
				}while(check1[0] == '5');
				
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\tGo To Personal detail Fill Page.."; afterEnd();
				system("cls");
				cout<<"\n\n\t\t\t\t\t\t[ ** ].\t\t Personal Details \t\t[ ** ]";
				
			fname(check1,first,i);	mname(check1,first,i);	lname(check1,first,i);	
				emailcall(check1,first,i,acType);
				k = sizeof(functionarray1) / sizeof(functionarray1[0]);
				for(int m = 0; m < k; m++)
					{	(*functionarray1[m]) (check1,first,i,account,j,state1);	}
					
				citycall(check1,first,i);
				selectCity(first,maharashtra,andhrapradesh,arunachalpradesh,bihar,assam,chattisgarh,goa,uttarakhand,himachalpradesh,westbengal,jharkhand,
						karnataka,kerela,gujrat,haryana,tamilnadu,odisha,rajstan,sikkim,meghalya,tripura,punjab,mizoram,madhyapradesh,uttarhpradesh,nagaland,
						manipur,check1,i,j,res);	
				pincodevalid(check1,first,j,i);
				streetcall(check1,first,i);			
			
				do
				{ 
					submitcall(check1);
					
					if(check1[0] != 'Y' && check1[0] != 'y') {	cout<<"\n\n\n\n\t\t\t\t\tEnter Key Not Perfect Re-enter Key."; afterEnd(); check1[0] = '1'; 	}
					
					else
					{	cout<<"\n\n\n\t\t\t\tYour Banking Form Registration Completed.";	afterEnd(); 
				
						do
						{
							system("cls");
							cout<<"\n\n\t\t\t\t\t\t\t***\tBank Account Sign Up\t***";
							cout<<"\n\n\n\n\t\t[ # ]\t\t\t[ * ]\tEmail ID :- ";	
							cin>>emailid;
							
							cout<<"\n\n\n\n\t\t[ # ]\t\t\t[ * ]\tEnter Password :- ";
							cin>>pass;
							
							int res = (first[i].getpassw() == pass && first[i].getemail() == emailid) ? 1 : 0;
							if(res == 0)
							{
								cout<<"\n\n\n\n\t\t\t\t\t\t[ * ] Enter Password Not correct...";	afterEnd();
								check1[0] = '!';
							}
							
							else
							{	cout<<"\n\n\n\t\t\t\t\t\t[*] Sign Up Successful.";	afterEnd();
								do 
								{
									system("cls");	
									k = sizeof(functionArray) / sizeof(functionArray[0]);
									for(int m = 0; m < k; m++) {	(*functionArray[m]) (check,check1,i,first,j,account);	   }
		
									do
									{
										cout<<"\n[ a ]. Click (A or a) To Save.\n[ b ]. Review Details \n[ c ]. Edit all";
										enterChoice(check1);
										
										switch(check1[0])
										{	
											case 'a' : case 'A' : 
												cout<<"\n\t\t\t\tYour Banking Profile Completed.";	afterEnd();	
												break;
												
											case 'b' : case 'B':
												
												system("cls");
												profileViewShow(acType,first,check1,check,account,j,i,balance,state1);			
												break;
											
											case 'c' : case 'C' : check1[0] = '~';	break;					
											
											default  : 	cout<<"\n\t\t\t\tEnter Choice Not Present In System."
															<<"\n\n\t\tRe-Select Your Choice ::- ";	
														afterEnd();	check1[0] = 'D';
												break;			
										}
									}while(check1[0] == 'D');
								}while(check1[0] == '~');	
							
								//	account NO ::-			
									check1 = first[i].getcity();
									account += check1[0];
									check1 = first[i].getcntry();
									check[i].setaccountno(account);
								//	account NO ::-	
								
								do
								{		
									system("cls");
									cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking System\t\t***"
									<<"\n\n\tNew Account Number ::- "<<check[i].getaccountno()
									<<"\n\n\tEnter (G/g) To Genrate/set Account Pin ::- ";
									cin>>check1;
									
									switch(check1[0])
									{
										default : 	cout<<"\n\n\t\t\tEnter Choice Is Not Present In Sysyem...";	 check1[0] = 'A';   afterEnd();	 break;
											
										case 'G': case 'g':
										do
										{
											cout<<"\n\n\tNew Account Pin ::- ";
											cin>>check1;
											
											for(j = 0; j <= 99; j++)
											{
												if(check1 == check[j].getAcPin())
												{
													if(i != j)
														cout<<"\n\n\t\t\t\t[ * ]\tEnter Account Pin Is Very Week Please Re-enter Pin..", afterEnd();  check1[0] = '@'; break;
												}
											}
											if(j == 100)
											{
												check[i].setAcPin(check1);
												cout<<"\n\n\t\t[ * ]\tEnter Account Pin saved\t[ * ]";
												cout<<"\n\n\t\tPage Goes On Re-Login Thx For Creating Account.."; k = 0,  check1[0] = '~'; afterEnd();
												i = flag;	
											}
										}while(check1[0] == '@');
										break;
									}
								}while(check1[0] == 'A');	
							}
						}while(check1[0] == '!');
					}
				}while(check1[0] == '1');
			}
		}while(check1[0] == '~');
		
		if(check1 == "OldUser")
		{
			dhs = 0, bhs = 0, fths = 0;
			check3 = "";
			do
			{	
				system("cls");	
				cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking Page\t\t***"
					<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tUser Name ::-\t"<<first[i].getfname()<<" "<<first[i].getmname()<<" "<<first[i].getlname()
					<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tUser ID ::-\t"<<check[i].getaccountno()
					<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tAccount Type::-\t"<<first[i].getactyp()
					<<"\n\n\n\t\t[ * ]\t Main Menu \t[ * ]" 
					<<"\n\n\t[a] Account Managment."		// Done
					<<"\n\t[b] Deposit Funds."			    // Done
					<<"\n\t[c] Fund Transfer."				// Done
					<<"\n\t[d] Bill Payment."			    // Done
					<<"\n\t[e] Withdraw Funds."				// Done
					<<"\n\t[f] Investment Services."	    // 
					<<"\n\t[g] Transaction History."		// Done
					<<"\n\t[h] Update Account Information." // Done
					<<"\n\t[i] Change Password."		    // Done
					<<"\n\t[j] Log Out."				    // Done
					<<"\n\n\t[ * ] Select Your Choice = ";
				cin>>check1;
				switch(check1[0])	
				{
					case 'a': case 'A' : 	
						do
						{	system("cls");
							cout<<"\n\n\t\t\t\t***\t\tWelcome To Program Banking Page\t\t***"
								<<"\n\n\n\t\t[ * ]\t Account Manage Menu \t[ * ]" 
								<<"\n\n\t[a] Account Details View And Edit."
								<<"\n\t[b] Account Balance."
								<<"\n\t[c] Return To Main Menu."
								<<"\n\n[ * ] Enter Your Choice ::- ";
							cin>>check1;
							
							switch(check1[0])
							{
								default : cout<<"\n\n\t\t\tEnter Choice Is Not Present In Sysyem..."; check1[0] = 'B';
										cout<<"\n\n\n\n\t\t\t[ * ]\t\tPage Goes To Re Select...";	afterEnd();	   break;
								
								case 'a': case 'A':    	profileViewShow(acType,first,check1,check,account,j,i,balance,state1);  check1[0] = 'Y'; break;
								case 'c': case 'C':		check1[0] = 'Y'; 	break;
								case 'b': case 'B': 	accountBalanceDetail(first,check,balance,i);	check1[0] = 'Y';
									cout<<"\n\n\t\t\t[ * ]\tEnter Any Key To Go Main Menu :- ";
									cin>>check1;	cout<<"\n\n\t\t\t\t\t...";	check1[0] = 'Y';	afterEnd();  break;		
							}	
						}while(check1[0] == 'B');
						break;
						
					case 'b': case 'B':
						depositTop(first,check,balance,i);	
						cout<<"\n\n\t\t\t[ * ]\t Deposite Menu \t[ * ]"
							<<"\n\n\n\t[a] Direct Deposit."
							<<"\n\n\t[b] Check Deposit."
							<<"\n\n\t[c] View Deposit History."
							<<"\n\n\t[*] Enter Choice Here ::- ";
						cin>>check1;
		
						switch(check1[0])
						{
							default : cout<<"\n\n\t\t\t\t\tEnter Choice Is Not Present In System.";	 afterEnd();  check1[0] = 'Y';  break;
							case 'a': case 'A':  depoAmountBank(first,check,balance,check1,i,acType,k,amount,m,n,remamount,check3,count,match,transacNo,ch,ft,history,emailid,collectTransac,storeHistory,dhs,ttfunds);  check1[0] = 'Y';	break;
							case 'b': case 'B':  
								checkBook(first,check,balance,check1,i);
								cout<<"\n\n\t\t\t\t[ * ] Goes To Main Menu...";	afterEnd(); Sleep(1500); 
								 	check1[0] = 'Y';	break;
							case 'c': case 'C':  depoHistory(balance,first,bt,k,history,check1,dhs,i); check1[0] = 'Y';	break;	
						}
						break;
					
					case 'c': case 'C' :
						do
						{
							system("cls");	
							fundTransfer(first,j,check,balance,storeHistory,check1,check3,account,transacNo,i,n,ch,k,amount,fths,collectTransac,ttfunds,m);
						}while(check1[0] == '4');
						check1[0] = 'Y';
						break;
											
					case 'd' : case 'D' :
						do
						{	system("cls");
							cout<<"\n\n\t\t\t\t***\tWelcome To Program Banking Bill Payment Page\t***"
								<<"\n\n\t\t[ a ]\tElectric Pay."
								<<"\n\t\t[ b ]\tGas Pay."
								<<"\n\t\t[ * ]\tLike Etc."
								<<"\n\n\t[ c ]\tReturn Home Menu."
								<<"\n\n\t[ * ]\tEnter Your Choice = ";
							cin>>check1;
								
							switch(check1[0])
							{
								case 'b': case 'B': 	cout<<"\n\n\t\t[ * ]\tProgram Under Making...";  afterEnd();	check1[0] = 'Y';	break; 
								default : cout<<"\n\n\n\t\t\t\t[*]\tEnter Choice Is Wrong...";	check1[0] = 'Q'; break;
								
								case 'c': case 'C':	check1[0] = 'Y'; break;
									
								case 'a' : case 'A' : 	
									do
									{
										system("cls");
										cout<<"\n\n\t\t\t\t\t\t*****\tElectricity Bill Payment Page\t*****";
										electricPayment(check,first,balance,j,account,transacNo,check3,check1,n,i,k,ch,collectTransac,storeHistory,amount,m);
										confirmPay(balance,check1,check3,history,k,ft,i,ttfunds,collectTransac,n);	check1[0] = 'Y';
									}while(check1[0] == '&');
									break;
							}
						}while(check1[0] == 'Q');	
						break;
					
					case 'e': case 'E' :
						withdrawFund(first,check,balance,check1,amount,m,i,whs,ttfunds,collectTransac,check3,transacNo,k,n,ch);
						cout<<"\n\n\n\t\t\t\t\t\t[*]\tThanks For Select Withdraw Option Come Again..." ; afterEnd();
						check1[0] = 'Y';	
						break;
						
					case 'f': case 'F' : 	cout<<"\n\n\t\t[ * ]\tProgram Under Making...";  afterEnd();	check1[0] = 'Y';	break; 

					case 'g': case 'G' :
						system("cls");	res = 2;
						cout<<"\n\n\t\t\t\t\t[*]\tTransaction History\t[*]";
							collectTransfer(first,collectTransac,check1,dhs,bhs,fths,ttfunds,i,res);	
						break;
					
					case 'h': case 'H' :
						do
						{	system("cls");
							infoUpdate(check,first,check1,account,state1,acType,j,i);								
							switch(check1[0])
							{
								default : cout<<"\n\n\n\t\t\t\t[ * ]\tEnter Choice Is Wrong Re-select Choice..."; afterEnd();  check1[0] = '^';	 break;
								
								case 'Y' : case 'y' : seeDetails(first,check,balance,i,acType);  check1[0] = 'Y';  break;
								
								case 'S' : case 's' : check1[0] = 'Y';	break;
							}
						}while(check1[0] == '^');
						break;
						
					case 'j' : case 'J' : 
						cout<<"\n\n\n\t\t\t\t\t\tProcess For Log Out..."; 
						afterEnd();	 i = flag;	check1[0] = '#';	break;
						
					default : 	cout<<"\n\n\t\t\tEnter Choice Is Not Present In Sysyem...";	   
								cout<<"\n\n\n\t\t\t[ * ] Enter Choice Again...";	afterEnd();	  check1[0] = 'Y'; break;
				}
			}while(check1[0] == 'Y');
		}
		
		if(check1 == "ADMIN" || check1 == "Manager")
		{
			do
			{
				system("cls");
				cout<<"\n\n\t\t\t\t\t\t\t[ * ]\tPBS Bank { Manager / Admin } Page\t[ * ]"
					<<"\n\n\t\t[ * ]\tSelect Option Below :-"
					<<"\n\n\t\t\t[ a ]\tView Users Profile."	// Done.
					<<"\n\n\t\t\t[ b ]\tUser History."
					<<"\n\n\t\t\t[ * ]\tGo To Re-select User."
					<<"\n\n\t[ * ]\tEnter Choice From Below :- ";
				cin>>check1;
			
				switch(check1[0])
				{
					case 'b': case 'B':
						system("cls");	res = 1;
						cout<<"\n\n\t\t\t\t\t[*]\tAll User's' Transaction History\t[*]";
							collectTransfer(first,collectTransac,check1,dhs,bhs,fths,ttfunds,i,res);
						check1[0] = '7';   break;
					case '*':  cout<<"\n\n\t\t\t\t\t\t[ * ]\tRe-selection Page...";	afterEnd();	check1[0] = '#';	break;
					
					case 'a' : case 'A':  int g = 0;
						viewHistoryUser(g,first,check,balance,check1,res,acType,count);
					break;
				}
			}while(check1[0] == '7');
		}
	}while(check1[0] == '#');
	
	return 0;
}
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
