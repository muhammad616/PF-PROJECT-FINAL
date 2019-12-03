/* SAHOOLAT INITIATIVE (PF PROJECT)
	GROUP MEMBERS:-
	MUHAMMAD AHMED (19K-0242) 			SECTION H
	MUSAIB AHMED RAZZAQUI (19K-0237)	SECTION D
	ABDUL RAHIM MUGHAL (19K-0236)		SECTION J
*/
#include<stdio.h> 			// include library.
#include<stdlib.h>			// include library.
#include<conio.h>			// include library.
#include<string.h>			// include library.
void choice();				//prototype of a function.
void New();					//prototype of a function.
void position();			//prototype of a function.
void criminal_activity();	//prototype of a function.	
void Display();				//prototype of a function.	
void Delete();				//prototype of a function.
void Edit();				//prototype of a function.
void login();				//prototype of a function.
void main_menu();			//prototype of a function.	
void Incentives();			//prototype of a function.
void Health_Incentive();	//prototype of a function.		
void Health_checkup();		//prototype of a function.	
void Health_appointment();	//prototype of a function.		
void Health_menu();			//prototype of a function.	
void Health_special();		//prototype of a function.	
void Health_checkup();		//prototype of a function.	
void Health_disc();			//prototype of a function.	
void Ration_Incentive();	//prototype of a function.		
void Cash_Withdrawal();		//prototype of a function.	
void Criminal_Record();		//prototype of a function.	
void rename_f();			//prototype of a function.
void delay(int j)			//function declaration.
{   int i,k;				
    for(i=0;i<j;i++)
    k=i;
}
struct data{				//global structure.
	char name[50];
	char date_of_birth[15];
	int age;
	char address[100];
	char citizenship_number[20];	
	char position[20];
	char criminal_activity[30];	
	float initial_amount;
}add,rem,edit,incentive;
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
int main(){					//function declaration.
	system("color 31");
	login();
	system("cls");
	system("color 31");
	main_menu();	
	choice();
	return 0;
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void login(){				//function declaration.			
	int i;
	system("cls");
	system("color 31");
	char studentID[]="admin", password[]="admin", id[8], p[6];
    int  x, y;
    printf("\n\t\t ------------------------------------");
    printf("\n\t\t\t LOGIN TO THE SYSTEM\a\a");
	printf("\n\t\t ------------------------------------");
    printf("\n\t\tEmployee_ID:");
    scanf("%s", &id);
    printf("\n\t\tPassword:");
    scanf("%s", &p);
    x=strcmp(id, studentID);
    y=strcmp(p, password);
    if(x==0 && y==0)
	{
		system("cls");
		system("color 31");
        printf("\n\n\t\tPassword Match!\n\n\t\tLOADING");
        for(i=0;i<=10;i++) 
		{
			delay(100000000);
			printf("\xB2");
		} 	
    }
	else
	{
        system("cls");
        system("color 31");
    	printf("\n\t\t\t ---------------------------------------------");
        printf("\n\t\t\t         Wrong Password, try again");
	    printf("\n\t\t\t Please use a valid ID to access the program\n");
		printf("\n\t\t\t -------------------------------------------\n");
        login();	
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void main_menu(){			//function declaration.				
	system("cls");
	system("color 31");
	printf("\n\n\t\t WELCOME TO SAHOOLAT INITIATIVE PORTAL\a\a");
	printf("\n\t\t ------------------------------------");
	printf("\n\n\n\t\t (1) Enter new record");
	printf("\n\t\t (2) Show available records");
	printf("\n\t\t (3) Delete a specific record");
	printf("\n\t\t (4) Update record information");
	printf("\n\t\t (5) Incentives");
	printf("\n\t\t (6) Exit");
	printf("\n\n--------------------------------------------------------------------------------\n");
	choice();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void choice(){				//function declaration.				
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			New();
			break;
		case 2:	
			Display();			
			break;			
		case 3:
			Delete();
			break;
		case 4:
			Edit();
			break;
		case 5:
			Incentives();
			break;
		case 6:
			system("cls");
			printf("\n\t      You have successfully been logged out");
			printf("\n\t -------------------------------------------------");
			printf("\n\t          Software Developed by ");
			printf("\n\n\t          Muhammad Ahmed(K190242)");
			printf("\n\t           Musaib Ahmed(K190237)");
			printf("\n\t        Abdul Rahim Mughal(K190236)");			 
			printf("\n\t -------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n");
			exit(0);
			break;			
		default:
			system("cls");
			printf("\n\t      --------------------------------------");
			printf("\n\t      SELECT BETWEEN THE ABOVE OPTIONS ONLY!");
			printf("\n\t      --------------------------------------");
			main_menu();
			break;			
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void New(){					//function declaration.		
	system("cls");
	system("color 31");
	FILE *fp;
	fp=fopen("data.txt","a+");
	if(fp==NULL)
	{
	printf("\n The file was not able to open!");
	}		
	fflush(stdin);
	printf("\n Enter Name \t\t\t\t\t");	
	gets(add.name);
	printf("\n Enter Date Of Birth (dd/mm/yy) \t\t");	
	gets(add.date_of_birth);
	printf("\n Enter Age: \t\t\t\t\t");	
	scanf("%d", &add.age);	fflush(stdin);
	printf("\n Enter Address: \t\t\t\t");		
	gets(add.address);
	printf("\n Enter Citizenship Number (xxxxx-xxxxxxx-x): \t");
	gets(add.citizenship_number);
	printf("\nEnter Position: 1.Dean\n\t\t2.Head of Department\n\t\t3.Professor\n\t\t4.Lecturer\n\t\t5.Domestic Staff\t\t");
	position();
	fflush(stdin);
	printf("\n Enter Criminal Activity:\n\t\t1.Illegal Hunting\n\t\t2.Street Crime\n\t\t3.Civil Disobedience\n\t\t4.Tax Evasion\n\t\t5.'-'\t\t\t\t");
	criminal_activity();
	fflush(stdin);
	printf("\n Enter Initial Amount: \t\t\t\tRs.");
	scanf("%f", &add.initial_amount);
	fprintf(fp,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);
	fclose(fp);
	printf("\n\n\t\t Record added successfully!");
	printf("\n\t\t --------------------------");
	printf("\n Press any key to return to main menu!");
	getch();	
	system("cls");
	system("color 31");
	main_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void position(){			//function declaration.		
	system("color 31");
	int choice;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			strcpy(add.position, "Dean");
			break;
		case 2:
			strcpy(add.position, "Head of Department");
			break;
		case 3:
			strcpy(add.position, "Professor");
			break;
		case 4:
			strcpy(add.position, "Lecturer");
		case 5:
			strcpy(add.position, "Domestic Staff");
			break;
		default:
			printf("\n\t\t\tPlease choose from these positions only to enter the record.");
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Display(){				//function declaration.			
	int test=0;
	system("cls");
	system("color 31");
	FILE *display;
	display=fopen("data.txt","r");
	if(display==NULL)
	{
	printf("\n The file was not able to open!");
	}
	printf("\n\n\t\t\t LIST OF EMPLOYEES IN THE RECORD");
	printf("\n\t\t\t -------------------------------");
	printf("\n\n-------------------------------------------------------------------------------\n");
	printf(" Name \t\t\tAge \t\t Citizenship Number \t Position");
	printf("\n-------------------------------------------------------------------------------\n");
	while(fscanf(display,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		printf("\n %-10s \t\t%-10d\t %-10s\t %-10s \n", add.name,add.age,add.citizenship_number,add.position);
		test++;
	}
	if (test==0)
	{
		system("cls");
		system("color 31");
		printf("\n\t\t\t NO RECORD FOUND!\n\n");
	}
	else
	{	
	printf("\n\n-------------------------------------------------------------------------------\n");
			if (test==1)
			{
				printf("\t\t THERE IS ONLY %d EMPLOYEE IN THE INDUSTRY",test);
			}
			else
			{
				printf("\t\t\t THERE ARE %d EMPLOYEES IN THE INDUSTRY",test);
			}	
	printf("\n-------------------------------------------------------------------------------\n");
	}
	fclose(display);
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	main_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Delete(){ 				//function declaration.			
	system("color 31");
	FILE *old,*update;
	old=fopen("data.txt","r");
	update=fopen("data_1.txt","w");
	if(old==NULL||update==NULL)
	{
	printf("\n The file was not able to open!");
	}
	int test=0;
	system("cls");
	system("color 31");
	printf("\n Enter the Name of the Employess that you want to delete\t");
	fflush(stdin);
	gets(rem.name);
	while(fscanf(old,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		if(strcmp(add.name,rem.name)==0)
		{
			test++;
			printf("\n Record Deleted Successfully");
		}
		else 
		{
			fprintf(update,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity, add.initial_amount);
		}
	}
	if(test==0)
	{
		printf("\n THERE IS NO SUCH EMPLOYEE IN THE INDUSTRY!");
	}
	fclose(old);
	fclose(update);
	remove("data.txt");
	rename("data_1.txt","data.txt");
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	main_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Edit(){				//function declaration.			
	system("color 31");
	int test=0;
	system("cls");
	FILE *previous,*final;
	previous=fopen("data.txt","r");
	final=fopen("data_1.txt","w");
	if(previous==NULL||final==NULL)
	{
	printf("\n The file was not able to open!");
	}
	fflush(stdin);
	printf("Enter the Name Of the Employee that has to be edited!\t");
	gets(edit.name);
	while(fscanf(previous,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		if(strcmp(add.name,edit.name)==0)
		{
			fflush(stdin);
			printf("\n Enter Date Of Birth (dd/mm/yy) \t\t");	
			gets(add.date_of_birth);
			printf("\n Enter Age: \t\t\t\t\t");	
			scanf("%d", &add.age);	fflush(stdin);
			printf("\n Enter Address: \t\t\t\t");		
			gets(add.address);
			printf("\n Enter Citizenship Number: \t");
			gets(add.citizenship_number);
		    printf("\nEnter Position: 1.Dean\n\t\t2.Head of Department\n\t\t3.Professor\n\t\t4.Lecturer\n\t\t5.Domestic Staff\t\t\t");
			position();
			fflush(stdin);
			printf("\n Enter Criminal Activity:  1.Illegal Hunting\n\t\t2.Street Crime\n\t\t3.Civil Disobedience\n\t\t4.Tax Evasion\n\t\t5.'-'\t\t\t\t");
			criminal_activity();fflush(stdin);
			printf("\n -------------------------------------------------------------------");	
			test++;
		}
	fprintf(final,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);
	}
	if (test==0)
	{
		system("cls");
		system("color 31");
		printf("\n Record Not Found!");
	}
	fclose(previous);
	fclose(final);
	remove("data.txt");
	rename("data_1.txt","data.txt");
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	main_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void criminal_activity(){	//function for selecting Criminal Record.				
	system("color 31");
	int choice;
	scanf("\t\t%d", &choice);
	switch(choice)
	{
		case 1:
			strcpy(add.criminal_activity, "Illegal Hunting");
			break;
		case 2:
			strcpy(add.criminal_activity, "Street Crime");
			break;
		case 3:
			strcpy(add.criminal_activity, "Civil Disobedience");
			break;
		case 4:
			strcpy(add.criminal_activity, "Tax Evasion");
		case 5:
			strcpy(add.criminal_activity, "-");
			break;
		default:
			printf("\n\t\t\tPlease choose.");
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Incentives(){ 			//function for main 'Incentives' page. Also checks for criminal record	
	system("color 31");
	float tax;
	int choice, test=0;
	FILE *check,*over;
	check=fopen("data.txt","r");	
	over=fopen("new.txt", "w");
	if(check==NULL || over==NULL)
	{
	printf("\n The file was not able to open!");
	}
	fflush(stdin);
	system("cls");
	printf("\n Enter your name: \t");
	gets(incentive.name);
	while(fscanf(check,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{		
		if(strcmp(add.name,incentive.name)==0)
		{
			if(strcmp(add.criminal_activity,"-")==0)
			{
				system("cls");
				printf("\n\n\t\t WELCOME TO INCENTIVES PORTAL");
				printf("\n\t\t ----------------------------");
				printf("\n\n\n\t\t (1) Health Incentive");
				printf("\n\t\t (2) Ration Incentive");
				printf("\n\t\t (3) Cash Withdrawal");
				printf("\n\t\t (4) Exit");
				printf("\n\n--------------------------------------------------------------------------------");
				scanf("%d", &choice);
				switch (choice)
				{
					case 1:
						Health_Incentive();
						break;
					case 2:
						Ration_Incentive();
						break;
					case 3:	
						Cash_Withdrawal();
						break;			
					case 4:
						system("cls");
						main_menu();
					default:
						system("cls");
						printf("\n\t      --------------------------------------");
						printf("\n\t      SELECT BETWEEN THE ABOVE OPTIONS ONLY!");
						printf("\n\t      --------------------------------------");
						Incentives();
						break;				
				}
			}
			else
			{
				printf("\n\tYOU ARE FOUND TO HAVE A CRIMINAL RECORD\n\tDeducting imposed fine from your balance...");			
				if(strcmp(add.criminal_activity,"Illegal Hunting")==0)
					add.initial_amount=add.initial_amount-2000;
				else if(strcmp(add.criminal_activity,"Street Crime")==0)
					add.initial_amount=add.initial_amount-2500;
				else if(strcmp(add.criminal_activity,"Civil Disobedience")==0)
					add.initial_amount=add.initial_amount-3000;
				else if(strcmp(add.criminal_activity,"Tax Evasion")==0)
				{
					printf("\n\nEnter tax evaded\t");
					scanf("%f", &tax);
					add.initial_amount=add.initial_amount-tax;
				}
				strcpy(add.criminal_activity,"-");			
				
				
 			}
			test++;
		}	
		fprintf(over,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);	
	}	
	if(test==0)
		{
			printf("\n RECORD NOT FOUND");
			printf("\nPress any key to return to main mennu");
			getch();
			main_menu();
		}
	fclose(check);
	fclose(over);
	rename_f();
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	main_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_Incentive(){	//function opening Health Incentives.				
	system("color 31");
	system("cls");
	printf("\n\t      --------------------------");
	printf("\n\t       HEALTH INCENTIVES PORTAL");
	printf("\n\t      --------------------------");
	Health_menu();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_menu(){   		//function definition for Health Incentives menu.		
	system("color 31");
	int choice;
    printf("\n\n\t\t1.GENERAL VISIT\n\t\t2.SPECIALIZED PROBLEM\n\t\t3.BILLING DISCOUNT\n\t\t4.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);
    system("cls");
    system("color 31");
    switch(choice)
    {
        case 1:
			Health_checkup();
        	break;
        case 2:
			Health_special();
    	    break;
        case 3:
			Health_disc();
        	break;
        case 4:
        	main_menu();
        	break;
        default:
			system("cls");
			system("color 31");
			printf("\n\t      --------------------------------------");
			printf("\n\t      SELECT BETWEEN THE ABOVE OPTIONS ONLY!");
			printf("\n\t      --------------------------------------");
			Health_menu();
			break;	
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_checkup(){		//function definition for 'General Visit in Health INCENTIVES.		
	system("color 31");
	int choice;
    system("cls");    
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHOOSE NEAREST BRANCH  \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Ziauddin hospital(Nazimbad)\n\t\t2.Ziauddin hospital(Clifton)\n\t\t3.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);    
    system("cls");
    system("color 31");
    switch(choice)
    {
        case 1:
			printf("You have an appointment with Dr.Mehmood Ahsan\n");
			Health_appointment();
        	break;
        case 2:
			printf("You have an appointment with Dr.Ali Khan\n");
			Health_appointment();
			break;
        case 3:
        	Health_Incentive();
        	break;
        default:
			system("cls");
			system("color 31");
			printf("\n\t      --------------------------------------");
			printf("\n\t      SELECT BETWEEN THE ABOVE OPTIONS ONLY!");
			printf("\n\t      --------------------------------------");
			Health_checkup();
			break;	
    }	
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_appointment(){ 	//function definition for selecting appointment.				
	int t;
	system("color 31");
	int flag=0;
	printf("\nSelect time:\n\n\t\t1.9:00\n\t\t2.10:15\n\t\t3.11:30\n\t\t4.9:45\n\t\t5.Back to Health Incentives\n\n\t Enter your choice:");
	scanf("%d", &t);
	switch(t)
    {
        case 1:
			printf("Appointment set for 9.00");
        	break;
        case 2:
			printf("Appointment set for 10.15 ");
       	 break;
        case 3:
			printf("Appointment set for 11.30");
        	break;
        case 4:
			printf("\n Time not available, select different time");
			Health_appointment();
        	break;
        case 5: 
			Health_menu();
    }
	printf("\n      -----------------------------");
	printf("\n\n Your appointment is set. \n\n Please visit the Sahoolat Initiative booth at the hospital 15 minutes prior to avail the service");
	printf("\n\n\n Press any key to go back to Health Incentives Portal");
	printf("\n      -----------------------------");
	getch();
	Health_Incentive();
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_special(){		//function definition for 'specialized problems' in Health Incentives		
	int choice;
    system("cls");
    system("color 31");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Choose Affected Area  \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Heart\n\t\t2.Lungs\n\t\t3.Back\n\t\t4.Head\n\t\t5.Previous Page\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);    
    system("cls");
    system("color 31");
    switch(choice)
    {
        case 1:
			printf("You have an appointment with Dr.Saleem at Ziauddin Hospital North\n");
			Health_appointment();
        	break;
        case 2:
			printf("You have an appointment with Dr.Shehzad Hameed at Ziauddin Hospital Clifton \n");
			Health_appointment();
			break;
        case 3:
			printf("You have an appointment with Dr.Kashif Nadeem at Ziauddin Hospital Clifton \n");
			Health_appointment();
        	break;
        case 4:
			printf("You have an appointment with Dr.Zahid khan at Ziauddin Hospital North\n");
			Health_appointment();
			break;
		case 5:
			Health_Incentive();
		default:
			system("cls");
			system("color 31");
			printf("\n\t      --------------------------------------");
			printf("\n\t      SELECT BETWEEN THE ABOVE OPTIONS ONLY!");
			printf("\n\t      --------------------------------------");
			Health_special();
			break;	
	}
	
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Health_disc(){			//function declaration.		
	system("color 31");
	int test=0;
	float amount,discount;
	system("cls");
	system("color 31");
	char name[20];
	fflush(stdin);
	printf("Enter your name again for verification:  \n");
	gets(name);
	if(strcmp(incentive.name, name)==0)
	{
		FILE *ptr, *fptr;
	ptr=fopen("data.txt", "r");
	fptr=fopen("new.txt", "w");
	if(ptr==NULL)
	{
		printf("\n The file was not able to open!");
		printf("\nPlease enter some records from the main menu");
		main_menu();
	}
	printf("\nEnter Billed Amount:");
	scanf("%f", &amount);
	while(fscanf(ptr,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		if(strcmp(add.name, name)==0)
		{
			if(strcmp(add.position,"Dean")==0)
			{
				discount=0.4*amount;
				amount=amount-discount;
				printf("\n You get Rs.%.2f discount", discount);
				printf("\n Please pay Rs.%.2f at the reception", amount);
				printf("\n Do you want to pay the bill from your account? (Y/N)");
				char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(amount<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-amount;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}	
			}
			else if(strcmp(add.position, "Head of Department")==0)
			{
				discount=0.3*amount;
				amount=amount-discount;
				printf("\n You get Rs.%.2f discount", discount);
				printf("\n Please pay Rs.%.2f at the reception", amount);
				printf("\n Do you want to pay the bill from your account? (Y/N)");
				char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(amount<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-amount;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}
			}
			else if(strcmp(add.position, "Professor")==0)
			{
				discount=0.25*amount;
				amount=amount-discount;
				printf("\n You get Rs.%.2f discount", discount);
				printf("\n Please pay Rs.%.2f at the reception", amount);
				printf("\n Do you want to pay the bill from your account? (Y/N)");
				char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(amount<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-amount;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}
			}
			else if(strcmp(add.position, "Lecturer")==0)
			{
				discount=0.2*amount;
				amount=amount-discount;
				printf("\n You get Rs.%.2f discount", discount);
				printf("\n Please pay Rs.%.2f at the reception", amount);
				printf("\n Do you want to pay the bill from your account? (Y/N)");
				char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(amount<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-amount;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}
			}
			else if(strcmp(add.position, "Domestic Staff")==0)
			{
				discount=0.15*amount;
				amount=amount-discount;
				printf("\n You get Rs.%.2f discount", discount);
				printf("\n Please pay Rs.%.2f at the reception", amount);
				printf("\n Do you want to pay the bill from your account? (Y/N)");
				char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(amount<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-amount;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}
			}
			test++;	
		}	
		fprintf(fptr,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);
	}
	if(test==0)
	{
		printf("\n RECORD NOT FOUND");
		printf("\nPress any key to return to main menu");
		getch();
		main_menu();
	}
	fclose(ptr);
	fclose(fptr);
	rename_f();
	remove("new.txt");
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	Health_Incentive();
	}
	else
	{
		printf("\n\tYOU ARE NOT VERIFIED");
		printf("\n\tPlease return to the main menu by pressing any key  ");
		getch();
		
		system("color 31");
		main_menu();
		
	}
	
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Ration_Incentive(){	//function declaration		
	system("color 31");
	int choice, test=0;
	int itemno, quantity;
	float bill; char name[20];
	system("cls");
	system("color 31");
	printf("\n\t      -----------------");
	printf("\n\t      RATION INCENTIVES");
	printf("\n\t      -----------------");
	fflush(stdin);
	printf("\n\n\tEnter your name again for verification::\n");
	gets(name);
	if(strcmp(incentive.name, name)==0)
	{
	FILE *ptr, *fptr;
	ptr=fopen("data.txt", "r");
	fptr=fopen("new.txt", "w");
	if(ptr==NULL)
	{
		printf("\n The file was not able to open!");
		printf("\nPlease enter some records from the main menu");
		main_menu();
	}
	while(fscanf(ptr,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		if(strcmp(add.name, name)==0)
		{
			printf("\n\t1.Basic Necesseties\n\t2.Dairy\n\t3.Everyday Use");
			printf("\n\n\t\tEnter your choice   ");
			scanf("%d", &choice);
			printf("\n\n---------------------------------------------------------------------");
			printf("\n \tS.No \t\t\tItem Name \t\tRate (Rs.)");
			printf("\n---------------------------------------------------------------------");
			switch(choice)
			{
				case 1:
					printf("\n \t1 \t\t\tRice \t\t\t230.00 (per kg)");
					printf("\n \t2 \t\t\tSugar \t\t\t400.00 (per 5kg)");
					printf("\n \t3 \t\t\tFlour \t\t\t85.00 (per kg)");
					printf("\n \t4 \t\t\tSalt \t\t\t75.00 (per kg)");
					printf("\n\n\n Please select item number from the list  ");
					scanf("%d", &itemno);
					switch(itemno)
					{
						case 1:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=230.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 2:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=400.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 3:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=85.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 4:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=75.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						
					}
					break;
				case 2:
					printf("\n \t1 \t\t\tMilk \t\t\t110.00 (per litre)");
					printf("\n \t2 \t\t\tBread loaf \t\t40.00 (per loaf)");
					printf("\n \t3 \t\t\tYoghurt \t\t80.00 (per kg)");
					printf("\n \t4 \t\t\tCheese \t\t\t75.00 (per block)");
					printf("\n\n\n Please select item number from the list  ");
					scanf("%d", &itemno);
					switch(itemno)
					{
						case 1:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=110.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 2:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=40.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 3:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=80.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 4:
							printf("\nPlease enter quantity  ");
							scanf("%d", &quantity);
							bill=75.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						
					}
					break;
				case 3:
					printf("\n \t1 \t\t\tSoap \t\t\t30.00 (per pack)");
					printf("\n \t2 \t\t\tShampoo \t\t60.00 (per bottle)");
					printf("\n \t3 \t\t\tToothpaste \t\t45.00 (per pack)");
					printf("\n\n\n Please select item number from the list  ");
					scanf("%d", &itemno);
					switch(itemno)
					{
						case 1:
							printf("\nPlease enter quantity   ");
							scanf("%d", &quantity);
							bill=30.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 2:
							printf("\nPlease enter quantity   ");
							scanf("%d", &quantity);
							bill=60.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
						case 3:
							printf("\nPlease enter quantity   ");
							scanf("%d", &quantity);
							bill=45.00*quantity;
							printf("\n\n Your amount payable is %.2f", bill);
							break;
					}
					break;
				default:
					printf("\n\n\tPlease choose only 1-3");									
			}
			printf("\n Do you want to pay the bill from your account? (Y/N)");
			char ch=getch();
				if(ch=='Y'||ch=='y')
				{
					if(bill<add.initial_amount)
					{
						add.initial_amount=add.initial_amount-bill;
						printf("\nYour account balance is %.2f", add.initial_amount);
					}
					else{
						printf("\n You do not have sufficient amount  in your account. Please proceed by paying in cash");
					}	
				}
			test++;
		}
		fprintf(fptr,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);
	}
	if(test==0)
	{
		printf("\n RECORD NOT FOUND");
		printf("\nPress any key to return to main menu");
		getch();
		main_menu();
	}
	fclose(ptr);
	fclose(fptr);
	rename_f();
	remove("new.txt");
	printf("\n Press any key to return to main menu!");
	getch();
	system("cls");
	system("color 31");
	main_menu();
	}
	else
	{
		printf("\n\tYOU ARE NOT VERIFIED");
		printf("\n\tPlease return to the main menu by pressing any key  ");
		getch();
		
		system("color 31");
		main_menu();
		
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void Cash_Withdrawal(){ 	//function declaration.		
	int test=0;
	float amount;
	char name[20];
	system("cls");
	system("color 31");
	printf("\n\t      ---------------");
	printf("\n\t      CASH WITHDRAWAL");
	printf("\n\t      ---------------");
	fflush(stdin);
	printf("\n\n\tEnter your name again for verification::\n");
	gets(name);
	if(strcmp(incentive.name, name)==0)
	{
	FILE *ptr, *fptr;
	ptr=fopen("data.txt", "r");
	fptr=fopen("new.txt", "w");
	if(ptr==NULL)
	{
	printf("\n The file was not able to open!");
	}	
	while(fscanf(ptr,"%[^\n] %[^\n] %d %[^\n] %[^\n] %[^\n] %[^\n] %f\n", &add.name,&add.date_of_birth,&add.age,&add.address,&add.citizenship_number,&add.position,&add.criminal_activity, &add.initial_amount)!=EOF)
	{
		if(strcmp(add.name, name)==0)
		{
			printf("\n Enter the amount you want to withdraw\n");
			scanf("%f", &amount);
			if(amount<add.initial_amount)
			{
				add.initial_amount=add.initial_amount-amount;	
				printf("\nAmount successfully withdrawn\n Please collect your amount from the cash booth\n");
				printf("Your remaining balance is %.2f", add.initial_amount);
			}
			else
			{
				printf("\n You do not have sufficient amount in your account. Please enter a sufficient amount");
				printf("Your account balance is %.2f", add.initial_amount);
			}
			
			test++;
		}
		fprintf(fptr,"%s\n %s\n %d\n %s\n %s\n %s\n %s\n %.2f\n", add.name,add.date_of_birth,add.age,add.address,add.citizenship_number,add.position,add.criminal_activity,add.initial_amount);
	}
	if(test==0)
	{
		printf("\n RECORD NOT FOUND");
		printf("\nPress any key to return to main menu");
		getch();
		main_menu();
	}
	fclose(ptr);
	fclose(fptr);
	rename_f();
	remove("new.txt");
	printf("\n\nPress any key to return to main menu");
	getch();
	system("cls");
	system("color 31");
	main_menu();
	}
	else{
	printf("\n\tYOU ARE NOT VERIFIED");
		printf("\n\tPlease return to the main menu by pressing any key  ");
		getch();
		
		system("color 31");
		main_menu();
		
	}
}
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
//****************************************************************************************************
void rename_f(){ 			//function declaration.	
	char ch;
	system("color 31");
	FILE *source, *target;
	source = fopen("new.txt", "r");
    if( source == NULL )
	{
	printf("Press any key to exit...\n");
    }
    target = fopen("data.txt", "w");
    if( target == NULL )
    {
		fclose(source);
        printf("Press any key to exit...\n");
    }
    while( ( ch = fgetc(source) ) != EOF )
    fputc(ch, target);
    fclose(source);
    fclose(target);
    remove("new.txt");
}
