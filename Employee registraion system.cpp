//PDSA Course work 
   /*
			Group Members
			KAHDSE19.2F-006 - P.G.I.H.Pitakotuwa
   			KAHDSE19.2F-024 - S.H.W.N.E.S.Subhasinghe
   			KACBIS19.2F-004 - T.M.G.P.A.Gunasekara
   */

#include<iostream>
using namespace std;
struct node
{
	int id;
	int val;
	char name[50];
	char qua[30];
	char addrs[50];
	char city[30];
	char jobtitle[30];
	int salary;
	char date[30];
	
	node*prev,*next;
	
};
class employee
{
	private:
	  node *head;
	  char ch;
	  
	  public:
	    employee()
			{
				head=NULL;
			}
			void menu()
			{
				cout<<"\n\t\t\tWELCOME TO THE EMPLOYEE SYSTEM"<<endl;
				cout<<"\n\t\t\t 1- Add a record :"<<endl;
				cout<<"\n\t\t\t 2- Search a record :"<<endl;
				cout<<"\n\t\t\t 3- update a record :"<<endl;
				cout<<"\n\t\t\t 4- Delete a record :"<<endl;
				cout<<"\n\t\t\t 5- Display a record :"<<endl;
				cout<<"\n\t\t\t 6- Exit :"<<endl;
				return;
			
    	    }
			
			void add_first()
			{
				node *newer=new node;
				
				cout<<"\n\t\tEnter the employee id:";
				cin>> newer->id;
				fflush(stdin);
				cout<<"\n\t\tEnter the full name of employee id:";
				cin.getline(newer->name,50);
				fflush(stdin);
				cout<<"\n\t\tEnter the qualification of employee:";
				cin.getline(newer->qua,30);
				fflush(stdin);
				cout<<"\n\t\tEnter the address:";
				cin.getline(newer->addrs,50);
				fflush(stdin);
				cout<<"\n\t\tEnter the city:";
				cin.getline(newer->city,30);
				fflush(stdin);
				cout<<"\n\t\tEnter the job title:";
				cin.getline(newer->jobtitle,30);
				fflush(stdin);
				cout<<"\n\t\tEnter the salary:";
				cin>> newer->salary;
				fflush(stdin);
				cout<<"\n\t\tEnter the start date :";
				cin.getline(newer->date,30);
				fflush(stdin);
				newer->next=head;
				newer->prev=NULL;
				
				if(head!=NULL)
					
					{
						head->prev=newer;
					}
					
					head=newer;
    				cout<<"\n\t\tRecord insert successfuly:"<<endl;
			}
			void add_last()
			{
				if(head==NULL)
				
			
				{
					cout<<"\n\t\tLink is empty:"<<endl;
					cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
					cin>>ch;
					if(ch=='Y'|| ch=='y')
					{
						add_first();
						return;
					}
					else
					{
						exit(1);
					}
				}	
				else 
				{
					node*temp=head;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					node *newer=new node;
					fflush(stdin);
					cout<<"\n\t\tEnter the employee id:";
				    cin>> newer->id;
				    fflush(stdin);
				    cout<<"\n\t\tEnter the full name of employee id:";
				    cin.getline(newer->name,50);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the qualification of employee:";
				    cin.getline(newer->qua,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the address:";
				    cin.getline(newer->addrs,50);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the city:";
				    cin.getline(newer->city,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the job title:";
				    cin.getline(newer->jobtitle,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the salary:";
				    cin>> newer->salary;
				    fflush(stdin);
				    cout<<"\n\t\tEnter the start date :";
				    cin.getline(newer->date,30);
				    fflush(stdin);
				    newer->next=NULL;
				    newer->next=newer;
					newer->prev=temp;
				}
			}	
                void add_after()
					{
						if(head==NULL)
						{
							cout<<"\n\t\tLink is empty:"<<endl;
					        cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
					        cin>>ch;
					        if(ch=='Y'|| ch=='y')
					        {
						        add_first();
						        return;
					        }
					      else
					      {
						     exit(1);
					      }
						}
						else
						{
							int val;
							cout<<"\n\t\tEnter the Id after which you want to add a new record :";
							cin>>val;
							bool flag=false;
							node *temp=head;
							node*p;
							while(temp!=NULL)
							{
								if(temp->id==val)
								{
									node*newer=new node;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the employee id:";
				                    cin>> newer->id;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the full name of employee id:";
				                    cin.getline(newer->name,50);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the qualification of employee:";
				                    cin.getline(newer->qua,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the address:";
				                    cin.getline(newer->addrs,50);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the city:";
				                    cin.getline(newer->city,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the job title:";
				                    cin.getline(newer->jobtitle,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the salary:";
				                    cin>> newer->salary;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the start date :";
				                    cin.getline(newer->date,30);
				                    fflush(stdin);
									if(temp->next!=NULL)
									{
										newer->next=temp->next;
										newer->prev=temp;
										p=temp->next;
										p->prev=newer;
										temp->next=newer;
									}
									else
									{
										newer->next=temp->next;
										newer->prev=temp;
										temp->next=newer;
										
									}
									flag=true;
								}
								temp=temp->next;
							}
							if(flag==false)
							{
								cout<<"\n\t\tID is not found"<<endl;
							}	
						}
					}
                    void add_before()
                    {int val;
						if(head==NULL)
						{
						 cout<<"\n\t\tLink is empty:"<<endl;
					     cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
					     cin>>ch;
					     if(ch=='Y'|| ch=='y')
					     {
						    add_first();
						     return;
					     }
					     else
					     {
						   exit(1);
					     }
						}
						else
						
							cout<<"\n\t\tEnter the Id after which you want to add a new record :";
							cin>>val;
							bool flag=false;
							node *temp=head;
							if(temp->id=val)
							{
								add_first();
								return;
							}
							else
							{
								
							 while(temp!=NULL)
							{
								if(temp->id==val)
								{
									node*newer=new node;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the employee id:";
				                    cin>> newer->id;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the full name of employee id:";
				                    cin.getline(newer->name,50);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the qualification of employee:";
				                    cin.getline(newer->qua,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the address:";
				                    cin.getline(newer->addrs,50);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the city:";
				                    cin.getline(newer->city,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the job title:";
				                    cin.getline(newer->jobtitle,30);
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the salary:";
				                    cin>> newer->salary;
				                    fflush(stdin);
				                    cout<<"\n\t\tEnter the start date :";
				                    cin.getline(newer->date,30);
				                    fflush(stdin);
							        newer->next=temp;
									newer->prev=temp->prev;
									node *p;
									p=temp->prev;
									p->next=newer;
									temp->prev=newer;
									flag=true;
									
									
								}
								temp=temp->next;
							}
							if(flag==false)
							{
								cout<<"\n\t\tID is not found"<<endl;
							}	
						}
                    }	
                
                    void del()
                    {
						if(head==NULL)
							if(head==NULL)
					{
						 cout<<"\n\t\tLink is empty:"<<endl;
					     cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
					     cin>>ch;
					     if(ch=='Y'|| ch=='y')
					     {
						    add_first();
						     return;
					     }
					     else
					     {
						   exit(1);
					     }
					}
                     else 
					 {
						 int val;
						 cout<<"\n\t\tEnter the employee id which you want to delete a record :";
						 cin>>val;
						 node *temp=head;
						 bool flag=false;
						 if(temp->id==val)
						{
							 head=temp->next;
							 head->prev=NULL;
							 flag= true;
							 delete temp;
							 if(flag==true)
							 {
								 cout<<"Record has been delete sucessfully"<<endl;
							 }
						}
						else
						{
							while(temp!=NULL)
							{
								if(temp->id==val)
								{
									node *p,*q;
									if(temp->next==NULL)
									{
										p=temp->prev;
										p->next=NULL;
										flag=true;
										delete temp;
										
									}
									else
									{
										p=temp->prev;
										q=temp->next;
										p->next=q;
										q->prev=p;
										flag=true;
										delete temp;
									}
								}
								temp=temp->next;
								
							}
							if(flag==false)
							{
								cout<<"\n\tValue is not found:"<<endl;
							}
						}	
					 }					
					}	
        void show()
        {
			if(head==NULL)
			{
			 cout<<"\n\t\tLink is empty:"<<endl;
			 cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
			 cin>>ch;
			 if(ch=='Y'|| ch=='y')
			 {
		      add_first();
			  return;
			 }
				else
				{
			      exit(1);
			    }
			}
			else
			{
				node *temp=head;
				while(temp!=NULL)
				{
					cout<<"\n\t\t Infomation of Employee"<<endl;
					cout<<"\n\t\t ID:"<<temp->id<<endl;
					cout<<"\n\t\t Name:"<<temp->name<<endl;
					cout<<"\n\t\t Qualification:"<<temp->qua<<endl;
					cout<<"\n\t\t Address:"<<temp->addrs<<endl;
					cout<<"\n\t\t City:"<<temp->city<<endl;
					cout<<"\n\t\t Job title:"<<temp->jobtitle<<endl;
					cout<<"\n\t\t Salary:"<<temp->salary<<endl;
					cout<<"\n\t\t Starting date:"<<temp->date<<endl;
					
					temp=temp->next;
                    					
				}
			}
		} 
    void search()
	{
		if(head==NULL)
		{
			cout<<"\n\t\tLink is empty:"<<endl;
		    cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
			cin>>ch;
		if(ch=='Y'|| ch=='y')
		{
		  add_first();
		  return;
	    }
		else
		{
			 exit(1);
		}
		}
		else
		{
			int val;
			cout<<"\n\t\tEnter employee Id which you want to search:";
			cin>>val;
			node *temp=head;
			bool flag=false;
			if(temp->id==val)
			{
				cout<<"\n\t\t Infomation of Employee"<<endl;
				cout<<"\n\t\t ID:"<<temp->id<<endl;
				cout<<"\n\t\t Name:"<<temp->name<<endl;
				cout<<"\n\t\t Qualification:"<<temp->qua<<endl;
				cout<<"\n\t\t Address:"<<temp->addrs<<endl;
				cout<<"\n\t\t City:"<<temp->city<<endl;
				cout<<"\n\t\t Job title:"<<temp->jobtitle<<endl;
				cout<<"\n\t\t Salary:"<<temp->salary<<endl;
				cout<<"\n\t\t Starting date:"<<temp->date<<endl;
				return;
			}
			temp=temp->next;
		}
	}
    void update()
    {
		if(head==NULL)
			{
			 cout<<"\n\t\tLink is empty:"<<endl;
			 cout<<"\n\t\tAdd a new record \n\tpress Y or N:";
			 cin>>ch;
			 if(ch=='Y'|| ch=='y')
			 {
		      add_first();
			  return;
			 }
				else
				{
			      exit(1);
			    }
			}
			else
			{
			
			int val;
			cout<<"\n\t\tEnter employee Id whose record you want to update:";
			cin>>val;
			node *temp=head;
			node *newer=new node;
			while(temp!=NULL)
			{
				if(temp->id==val)
				{
					fflush(stdin);
					cout<<"\n\t\tEnter the employee id:";
				    cin>>newer->id;
				    fflush(stdin);
				    cout<<"\n\t\tEnter the full name of employee id:";
				    cin.getline(newer->name,50);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the qualification of employee:";
				    cin.getline(newer->qua,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the address:";
				    cin.getline(newer->addrs,50);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the city:";
				    cin.getline(newer->city,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the job title:";
				    cin.getline(newer->jobtitle,30);
				    fflush(stdin);
				    cout<<"\n\t\tEnter the salary:";
				    cin>> newer->salary;
				    fflush(stdin);
				    cout<<"\n\t\tEnter the start date :";
				    cin.getline(newer->date,30);
				    fflush(stdin);
				}
				temp=temp->next;
			}
			cout<<"Record has been updated succesfully:"<<endl;	
			}
	}	
};

int main()
{
	int n;
	char ch;
	employee em;
	x2:
	em.menu();
	cout<<"\n\t\tEnter your choise :";
	cin>>n;
	if(n==1)
	{
		x1:
		cout<<"Where you want to add record:"<<endl;
		cout<<"\n\t\t 1- Very first record :"<<endl;
		cout<<"\n\t\t 2- Very last record:"<<endl;
		cout<<"\n\t\t 3- Your location and record to after record :"<<endl;
		cout<<"\n\t\t 4- Add before record :"<<endl;
		cout<<"\n\t\t Enter your choice:"<<endl;
		cin>>n;
		if(n==1)
		{
			em.add_first();
			cout<<"\n\t\tDo you want to go main menu(y/n):"<<endl;
			cin>>ch;
			fflush(stdin);
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
		}
		else if(n==2)
		{
			em.add_last();
			cout<<"\n\t\tDo you want to go main menu:"<<endl;
			cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
		}
		else if(n==3)
		{
			em.add_after();
			cout<<"\n\t\tDo you want to go main menu:"<<endl;
			cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
		}
		else if(n==4)
		{
			em.add_before();
			cout<<"\n\t\tDo you want to go main menu:"<<endl;
			cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
		}
		else
		{
			cout<<"\n\tChosse correct answer :"<<endl;
			goto x1;
		}
	}
	else if(n==2)
	{
		em.search();
		cout<<"\n\t\tDo you want to go main menu:"<<endl;
		cin>>ch;
		   if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
	}
	else if(n==3)
	{
		em.update();
		cout<<"\n\t\tDo you want to go main menu:"<<endl;
		cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
	}
	else if(n==4)
	{
		em.del();
		cout<<"\n\t\tDo you want to go main menu:"<<endl;
		cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
	}
	else if(n==5)
	{
		em.show();
		cout<<"\n\t\tDo you want to go main menu:"<<endl;
		cin>>ch;
			if(ch=='Y'||ch=='y')
			{
				goto x2;
			}
			else 
			{
				exit(1);
			}
	}
	else if(n==6)
	{
		exit(1);
	}
	else 
	{
		cout<<"\n\t\tChosse correct answer :"<<endl;
		goto x2;
	}
	return 0;
	
}