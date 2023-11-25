#include <stdio.h>
#include <string.h>

// Function declarations
void personal_info();
void business_info();
void saving_acc();
void current_acc();
void login();
void view_account_details();
void create_new_account();

int main()
{
	char log[5], acc_type[5], username[15], password[15];

	printf("\e[31m\e[1m<-----Welcome to KDNSN International Bank----->\n\e[m\e[0m\n");

	printf("Login into System as:\n");
	printf("1. Administrative\n");
	printf("2. Existing User\n");
	printf("Enter your option: ");
	scanf("%s", log);

	while (log[0] != '1' && log[0] != '2')
	{
		printf("Invalid Option: Try Again\n");
		printf("Enter your option (1 or 2): ");
		scanf("%s", log);
	}
	if (log[0] == '1')
	{
		printf("\n\e[32m\e[1m<-----Administrative Login----->\n\"");
		do
		{
			printf("Username: ");
			scanf("%s", username);
			printf("Password: ");
			scanf("%s", password);

			if (strcmp(username, "admin") != 0 || strcmp(password, "password") != 0)
			{
				printf("Invalid Username and Password. Try again.\n");
			}
		} while (strcmp(username, "admin") != 0 ||
				 strcmp(password, "password") != 0);

		printf("\n\e[32m\e[1m<-----Administrative Login Successful----->\n\"");
		printf("What do you want to do?\n");
		printf("1. View existing account details\n");
		printf("2. Create a new account\n");
		printf("Enter your option: ");
		scanf(" %s", acc_type);

		while (acc_type[0] != '1' && acc_type[0] != '2')
		{
			printf("Invalid Option Selected: Try Again\n");
			printf("Enter valid option (1 or 2): ");
			scanf("%s", acc_type);
		}

		if (acc_type[0] == '1')
		{
			view_account_details();
		}
		else if (acc_type[0] == '2')
		{
			create_new_account();
		}
		else
		{
			printf("Invalid Option");
		}
	}
	else if (log[0] == '2')
	{
		// Code for existing user login (not shown in your provided code)
	}

	return 0;
}

void view_account_details()
{
	FILE *file = fopen("user_data.txt", "r");
	if (file == NULL)
	{
		printf("Error opening file.\n");
		return;
	}

	printf("\n<----- List of All Users ----->\n");

	char line[100];
	while (fgets(line, sizeof(line), file))
	{
		printf("%s", line);
	}

	fclose(file);
}

void create_new_account()
{
	printf("Choose the type of account:\n");
	printf("1. Current Account\n");
	printf("2. Saving Account\n");
	char account_type[5];
	scanf(" %s", account_type);

	while (account_type[0] != '1' && account_type[0] != '2')
	{
		printf("Invalid Option Selected: Try Again\n");
		printf("Enter valid option (1 or 2): ");
		scanf("%s", account_type);
	}

	if (account_type[0] == '1')
	{
		current_acc();
	}
	else if (account_type[0] == '2')
	{
		saving_acc();
	}
	else
	{
		printf("Invalid Option");
	}
}

void saving_acc()
{
	personal_info();
}

void current_acc()
{
	business_info();
	personal_info();
}

void personal_info()
{
	char f_name[25], l_name[20], emailid[30], ph_num[15], dob[10];
	int age;

	printf("\nEnter your First name: ");
	scanf("%s", f_name);

	printf("Enter your Last name: ");
	scanf("%s", l_name);

	printf("Enter your Age: ");
	scanf("%d", &age);

	printf("Enter your Phone number: ");
	scanf("%s", ph_num);

	printf("Enter your email-id: ");
	scanf("%s", emailid);

	printf("Enter your Date of birth (dd/mm/yyyy): ");
	scanf("%s", dob);

	printf("\nName = %s %s\n", f_name, l_name);
	printf("Age = %d\n", age);
	printf("Phone number = %s\n", ph_num);
	printf("Email-id = %s\n", emailid);
	printf("Date of Birth: %s\n", dob);
}

void business_info()
{

	char B_Name[15], B_Type[10], ein[10], businessAddress[25], businessPhone[20],
		dateOfBusinessFormation[20], industry[15], productsOrServices[30];

	printf("\n\tEnter Business Information\n");
	printf("Enter your business name: ");
	scanf("%s", B_Name);

	printf("Enter your business type: ");
	scanf("%s", B_Type);

	printf("Enter your Employer Identification Number (EIN): ");
	scanf("%s", ein);

	printf("Enter your business address(State and Town): ");
	scanf("%s", businessAddress);

	printf("Enter your business phone number: ");
	scanf("%s", businessPhone);

	printf("Enter the date your business was formed (dd/mm/yyyy): ");
	scanf("%s", dateOfBusinessFormation);

	printf("Enter your industry: ");
	scanf("%s", industry);

	printf("Enter the products or services you offer: ");
	scanf("%s", productsOrServices);
}
