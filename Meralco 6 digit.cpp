#include<stdio.h>
#include<stdlib.h>
int idnumber, year, month, day, kwh, leapyear, duedate, dueday, addmonth, duemonth, dueyear;
float currentamount, generation, transmission, distribution, taxes, others;
char name[30], surname[30], ans;
void clrscr()
{
	system("@cls||clear");
}
void thirtyone()	//For January[1], March[3], May[5], July[7], August[8], October[10]
{
	if(day>=1&&day<=31)
	{
		printf("Bill Date : %d/%d/%d\n",month,day,year);
	//Due Date
			if(dueday>=1&&dueday<=31)
			{	
				printf("Due Date : %d/%d/%d\n",month,dueday,year);
			}
			else
			{
				addmonth=month+1;
				duedate=dueday-31;
				printf("Due Date : %d/%d/%d\n",addmonth,duedate,year);
			}
	}
	else
	{
		printf("Invalid Date\n");
	}		
}
void dec()		//for December[12]
{
	if(day>=1&&day<=31)
	{
		printf("Bill Date : %d/%d/%d\n",month,day,year);
	//Due Date
			if(dueday>=1&&dueday<=31)
			{
				printf("Due Date : %d/%d/%d\n",month,dueday,year);
			}
			else
			{
				addmonth=month-11;
				duedate=dueday-31;
				dueyear=year+1;
				printf("Due Date : %d/%d/%d\n\n",addmonth,duedate,dueyear);
			}
	}
	else
	{
		printf("Invalid Date\n");
	}
}
void thirty() //for April[4], June[6], September[9], Nomvember[11]
{
	if(day>=1&&day<=30)
	{
		printf("Bill Date : %d/%d/%d\n",month,day,year);
	//Due Date
		if(dueday>=1&&dueday<=30)
		{
			printf("Due Date : %d/%d/%d\n",month,dueday,year);
		}
		else
		{
			addmonth=month+1;
			duedate=dueday-30;
			printf("Due Date : %d/%d/%d\n\n",addmonth,duedate,year);
		}
	}
	else
	{
		printf("Invalid Date\n");
	}	
}
main()
{
	do
	{
		clrscr(); //Clear and Repeat depends on your answer.
		
	//Basic infos
			
			printf("\t\t\t\t\tMERALCO\n\n");
			printf("\t\t\t\tAng liwanag ng bukas.\n\n\n");
			printf("Enter your 6 digit number : ");
			scanf("%d",&idnumber);
			
	//If Number is 6 digit
	
		if(idnumber<1000000&& idnumber>99999)
		{
			printf("Enter First name : ");
			scanf("%s",&name);
			printf("Enter Last name : ");
			scanf("%s",&surname);
			printf("\n\tBilling Info\n");
		do
		{
			clrscr();
			printf("\t\t\t\t\tMERALCO\n\n");
			printf("\t\t\t\tAng liwanag ng bukas.\n\n\n");
			printf("Enter your 6 digit number : %d",idnumber);
			printf("\nEnter First name : %s",name);
			printf("\nEnter Last name : %s\n",surname);			
	//Date
			printf("Year : ");
			scanf("%d",&year);
			printf("Month : ");
			scanf("%d",&month);
			printf("Day : ");
			scanf("%d",&day);
			if(month<13&&month>0&&day<32&&day>0)
				{

	//Date operation

	dueday=day+9;
	
	//Date Condition
		if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			if(month==1||month==3||month==5||month==7||month==8||month==10)
			{
			thirtyone();
			}
			else if(month==12)
			{
			dec();
			}
			else if(month==2)
			{
				if(day>=1&&day<=29)
				{
					printf("Bill Date : %d/%d/%d\n",month,day,year);
	//Due Date
						if(dueday>=1&&dueday<=29)
						{
							printf("Due Date : %d/%d/%d\n",month,dueday,year);
						}
						else
						{
							addmonth=month+1;
							duedate=dueday-29;
							printf("Due Date : %d/%d/%d\n",addmonth,duedate,year);
						}
				}
				else
				{
					printf("Invalid Date\n");
					break;
				}
			}
			else if(month==4||month==6||month==9||month==10)
			{
				thirty();
			}
			else
			{
				printf("Invalid Date.\n");
				break;
			}
		}
		else
		{
			if(month==1||month==3||month==5||month==7||month==8||month==10)
			{
				thirtyone();
			}
			else if(month==12)
			{
				dec();
			}
			else if(month==2)
			{
				if(day>=1&&day<=28)
				{
					printf("Bill Date : %d/%d/%d\n",month,day,year);
	//Due Date
					if(dueday>=1&&dueday<=28)
					{
						printf("Due Date : %d/%d/%d\n",month,dueday,year);
					}
					else
					{
						addmonth=month+1;
						duedate=dueday-28;
						printf("Due Date : %d/%d/%d\n",addmonth,duedate,year);
					}
				}
				else
				{
					printf("Invalid Date\n");
					break;
				}
			}
			else if(month==4||month==6||month==9||month==10)
			{
				thirty();
			}
			else
			{
				printf("Invalid Date.\n");
				break;
			}
		}
		}
		else
		{
			printf("Invalid Date");
			break;
		}
			
		printf("\n\n\nDo you want to try again? [Y/N] : ");
		scanf("%c",&ans);
		ans=getchar();
		getchar();
		}
	while(ans=='y'||ans=='Y');
		
	//END OF DATE

			printf("KWH used : ");
			scanf("%d",&kwh);
			
	//Total current amount
			
			currentamount=kwh*10.219;
			system("cls");
			
	//Print infos
			
			printf("\t\t\t\t\tMERALCO\n\n");
			printf("\t\t\t\tAng liwanag ng bukas.\n\n\n\n");
			printf("\tService Info\n\n");
			printf("ID Number : %d\n",idnumber);
			printf("NAME : %s, %s\n\n\n",surname, name);
			printf("\tBilling Info\n\n");
			
	//Continuation of Billing Info
			
			printf("KWH used : %d\n",kwh);
			printf("Total current amount : %.2f\n\n\n",currentamount);

			//Breakdown info
			
			//Breakdown operation
			
			generation=currentamount*.55;		//Generation 55%
			transmission=currentamount*.101;	//Transmission 10.1%
			distribution=currentamount*.175;	//Distribution 17.5%
			taxes=currentamount*.117;			//Taxes 11.7%
			others=currentamount*.057;			//Others 5.7%
			
			//Breakdown
			printf("\tBreakdown\n\n");
			printf("Generation Charge : %.2f\n",generation);
			printf("Transmission Charge : %.2f\n",transmission);
			printf("Distribution Charge : %.2f\n",distribution);
			printf("Taxes Charge : %.2f\n",taxes);
			printf("Others Charge : %.2f\n\n",others);
		}
		else
		{
			printf("\n\nInvalid ID Number.\n");
		}
			
		printf("\n\n\nDo you want to try again? [Y/N] : ");
		scanf("%c",&ans);
		ans=getchar();
		getchar();
	}
	while(ans=='y'||ans=='Y');
}
