#include <stdio.h>
#include <string.h>

// Function declarations
void saving_acc();
void admin_login();
void user_login();
void admindatabase();
void saveToUserFile();

// Global variables
char admin_name[40], admin_password[15], acc_type[2];

void saving_acc()
{
	char f_name[20], l_name[20], age[5], acc_no[10], dob[10];
	float initial_amt;

	printf("<<< Saving account >>>\n");

	printf("\e[31m\e[1m--Disclaimer--\n");
	printf("The Minimum Money required to open an account is Rs 100\n"
		   "The Minimum Balance will be Rs 50 and below that fine of 10%% per "
		   "month\n\n");

	printf("\e[mEnter your first name: ");
	scanf("%s", f_name);

	printf("Enter your last name: ");
	scanf("%s", l_name);

	printf("Enter your age: ");
	scanf("%s", age);

	printf("Enter your account number: ");
	scanf("%s", &acc_no);

	printf("Enter your Date of birth (dd-mm-yyyy): ");
	scanf("%s", dob);

	printf("Enter initial amount:");
	scanf("%f", &initial_amt);

	printf("\nName = %s %s\n", f_name, l_name);
	printf("Age = %s\n", age);
	printf("Account number = %s\n", acc_no);
	printf("Date of Birth = %s\n", dob);
	printf("Account Initial Balance: %f\n", initial_amt);
	printf("Saving Account will give 5%% intrest");

	char sav_acc_info[] =
		"\n\n\nDebit Card is issued then charge Rs 10 per Quarter \n"
		"If text message service opted then charge Rs 5 per Quarter \n"
		"Net Banking will be free";
#include <stdio.h>
#include <string.h>

// Function declarations
void saving_acc();
void admin_login();
void user_login();
void admindatabase();
void saveToUserFile();

// Global variables
char admin_name[40], admin_password[15], acc_type[2];

void saving_acc() {
	char f_name[20], l_name[20], age[5], acc_no[10], dob[10];
	float initial_amt;

	printf("<<< Saving account >>>\n");

	printf("\e[31m\e[1m--Disclaimer--\n");
	printf("The Minimum Money required to open an account is Rs 100\n"
		   "The Minimum Balance will be Rs 50 and below that fine of 10%% per "
		   "month\n\n");

	printf("\e[mEnter your first name: ");
	scanf("%s", f_name);

	printf("Enter your last name: ");
	scanf("%s", l_name);

	printf("Enter your age: ");
	scanf("%s", age);

	printf("Enter your account number: ");
	scanf("%s", acc_no);

	printf("Enter your Date of birth (dd-mm-yyyy): ");
	scanf("%s", dob);

	printf("Enter initial amount:");
	scanf("%f", &initial_amt);

	printf("\nName = %s %s\n", f_name, l_name);
	printf("Age = %s\n", age);
	printf("Account number = %s\n", acc_no);
	printf("Date of Birth = %s\n", dob);
	printf("Account Initial Balance: %f\n", initial_amt);
	printf("Saving Account will give 5%% intrest");

	char sav_acc_info[] =
		"\n\n\nDebit Card is issued then charge Rs 10 per Quarter \n"
		"If text message service opted then charge Rs 5 per Quarter \n"
		"Net Banking will be free\n";

	char filename[30]; // Changed to a single filename variable
	FILE *file;

	sprintf(filename, "%s %s", f_name, acc_no); // Combine first name and account number for filename
	file = fopen(filename, "a"); // Open the file with the combined name

	if (file == NULL) { // Check if file opening failed
		printf("Error opening file.\n");
		return;
	}

	fprintf(file, "Name = %s %s\n", f_name, l_name); // Write data to the file
	fprintf(file, "Age = %s\n", age);
	fprintf(file, "Account number = %s\n", acc_no);
	fprintf(file, "Date of Birth = %s\n\n\n", dob);
	fprintf(file, "%f\n", initial_amt);
	fprintf(file, "%s", sav_acc_info);

	fclose(file); // Close the file
}


void current_acc()
{
	char f_name[20], l_name[20], age[5], acc_no[10], dob[10], bus_name[30],
		bus_acc_no[10], date_of_formation[10], tax_id[10];
	float initial_amt;
	char personalFilename[30], adminFilename[30];
	FILE *personalFile, *adminFile;

	printf("\e[31m\e[1m--Disclaimer--\n");
	printf("The Minimum Money required to open an account is Rs 100\n");
	printf("The Minimum Balance will be Rs 50 and below that fine of 10%% per month\n\n");

	printf("\e[mEnter your first name: ");
	scanf("%s", f_name);

	printf("Enter your last name: ");
	scanf("%s", l_name);

	printf("Enter your age: ");
	scanf("%s", age);

	printf("Enter your account number: ");
	scanf("%s", acc_no);

	printf("Enter your Date of birth (dd-mm-yyyy): ");
	scanf("%s", dob);

	printf("Enter your business name: ");
	scanf("%s", bus_name);

	printf("Enter your business account number: ");
	scanf("%s", bus_acc_no);

	printf("Enter your business date of formation (dd-mm-yyyy): ");
	scanf("%s", date_of_formation);

	printf("Enter your business tax identification number: ");
	scanf("%s", tax_id);

	do
	{
		printf("Enter initial amount: ");
		scanf("%f", &initial_amt);

		if (initial_amt < 5000)
		{
			printf("Error: Initial amount must be equal to or above 5000\n");
		}
	} while (initial_amt < 5000);

	sprintf(personalFilename, "%s%s", f_name, acc_no);
	personalFile = fopen(personalFilename, "a");

	// Create the admin file name
	sprintf(adminFilename, "admin_database.txt");

	// Open the admin file in append mode
	adminFile = fopen(adminFilename, "a");

	if (personalFile == NULL || adminFile == NULL)
	{
		printf("Error opening files.\n");
		return;
	}

	// Write user information to personal file
	fprintf(personalFile, "Name = %s %s\n", f_name, l_name);
	fprintf(personalFile, "Age = %s\n", age);
	fprintf(personalFile, "Account number = %s\n", acc_no);
	fprintf(personalFile, "Date of Birth = %s\n", dob);
	fprintf(personalFile, "Business Name: %s\n", bus_name);
	fprintf(personalFile, "Business Account Number: %s\n", bus_acc_no);
	fprintf(personalFile, "Business Date of Formation: %s\n", date_of_formation);
	fprintf(personalFile, "Business Tax Identification Number: %s\n", tax_id);
	fprintf(personalFile, "Account Initial Balance: %f\n", initial_amt);

	// Write user information to admin file
	fprintf(adminFile, "Name = %s %s\n", f_name, l_name);
	fprintf(adminFile, "Age = %s\n", age);
	fprintf(adminFile, "Account number = %s\n", acc_no);
	fprintf(adminFile, "Date of Birth = %s\n", dob);
	fprintf(adminFile, "Business Name: %s\n", bus_name);
	fprintf(adminFile, "Business Account Number: %s\n", bus_acc_no);
	fprintf(adminFile, "Business Date of Formation: %s\n", date_of_formation);
	fprintf(adminFile, "Business Tax Identification Number: %s\n", tax_id);
	fprintf(adminFile, "Account Initial Balance: %f\n\n\n", initial_amt);

	// Close personal file
	fclose(personalFile);

	// Close admin file
	fclose(adminFile);

	printf("\nAccount created successfully!\n");
}

void admin_login()
{
	printf("\n\e[32m\e[1m<-----Administrative Login----->\n\"");

	do
	{
		printf("Username: ");
		scanf("%s", admin_name);
		printf("Password: ");
		scanf("%s", admin_password);

		if (strcmp(admin_name, "admin") != 0 ||
			strcmp(admin_password, "password") != 0)
		{
			printf("Invalid Username and Password. Try again.\n");
		}
	} while (strcmp(admin_name, "admin") != 0 || strcmp(admin_password, "password") != 0);
}

void user_login()
{

	char name[20], account[20], filename[30];
	FILE *file;

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your account number: ");
	scanf("%s", account);

	sprintf(filename, "%s%s", name, account);

	file = fopen(filename, "r");

	if (file == NULL)
	{
		// File does not exist
		printf("User '%s' does not exist. Try again.\n", name);
	}
	else
	{

		printf("User '%s' opened successfully.\n", name);

		char line[100];
		while (fgets(line, sizeof(line), file))
		{
			printf("%s", line);
		}

		fclose(file);
	}
}

void admindatabase()
{
	FILE *file;
	char line[100];

	file = fopen("admin_database.txt", "r");

	if (file == NULL)
	{
		printf("No Data aviablle to show\n");
		return;
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		printf("%s", line);
	}

	fclose(file);
}

int main()
{
	char log[5], admin_choice[5];
	printf("\e[31m\e[1m<-----Welcome to KDNSN International Bank----->\n\e[m\e[0m\n");

	printf("Login into System as\n");
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
		admin_login();

		printf("<<< Administrative Login successful >>>\n");
		printf("\e[mEnter the next choice: \n");
		printf("1. View all Details\n");
		printf("2. Create new account\n");
		scanf("%s", admin_choice);

		while (admin_choice[0] != '1' && admin_choice[0] != '2')
		{
			printf("Invalid Option: Try Again\n");
			printf("Enter your option (1 or 2): \n");
			scanf("%s", admin_choice);
		}

		if (admin_choice[0] == '1')
		{

			printf("\n<----- View All Account Details ----->\n");
			admindatabase();
		}
		else if (admin_choice[0] == '2')
		{
			printf("<----- Create new account ----->");
			printf("Choose Account type: \n");
			printf("1. Saving Account \n");
			printf("2. Current Account \n");
			scanf("%s", acc_type);

			while (acc_type[0] != '1' && acc_type[0] != '2')
			{
				printf("Invalid Option: Try Again\n");
				printf("Enter your option (1 or 2): \n");
				scanf("%s", acc_type);
			}

			if (acc_type[0] == '1')
			{
				printf("<--- Creating Saving Account --->");
				saving_acc();
			}
			else if (acc_type[0] == '2')
			{
				printf("<--- Creating Current Account --->");
				current_acc();
			}
		}
	}
	else if (log[0] == '2')
	{
		user_login();
	}
}
	char personalFilename[30], adminFilename[30];
	FILE *personalFile, *adminFile;

	sprintf(personalFilename, "%s%s", f_name, acc_no);
	personalFile = fopen(personalFilename, "a");

	sprintf(adminFilename, "admin_database.txt");
	adminFile = fopen(adminFilename, "a");

	if (personalFile == NULL || adminFile == NULL)
	{
		printf("Error opening files.\n");
		return;
	}

	fprintf(personalFile, "Name = %s %s\n", f_name, l_name);
	fprintf(personalFile, "Age = %s\n", age);
	fprintf(personalFile, "Account number = %s\n", acc_no);
	fprintf(personalFile, "Date of Birth = %s\n", dob);
	fprintf(personalFile, "%s", sav_acc_info);
	fprintf(personalFile, "%f", initial_amt);

	fprintf(adminFile, "Name = %s %s\n", f_name, l_name);
	fprintf(adminFile, "Age = %s\n", age);
	fprintf(adminFile, "Account number = %s\n", acc_no);
	fprintf(adminFile, "Date of Birth = %s\n\n\n", dob);

	fclose(personalFile);
	fclose(adminFile);
}

void current_acc()
{
	char f_name[20], l_name[20], age[5], acc_no[10], dob[10], bus_name[30],
		bus_acc_no[10], date_of_formation[10], tax_id[10];
	float initial_amt;
	char personalFilename[30], adminFilename[30];
	FILE *personalFile, *adminFile;

	printf("\e[31m\e[1m--Disclaimer--\n");
	printf("The Minimum Money required to open an account is Rs 100\n");
	printf("The Minimum Balance will be Rs 50 and below that fine of 10%% per month\n\n");

	printf("\e[mEnter your first name: ");
	scanf("%s", f_name);

	printf("Enter your last name: ");
	scanf("%s", l_name);

	printf("Enter your age: ");
	scanf("%s", age);

	printf("Enter your account number: ");
	scanf("%s", acc_no);

	printf("Enter your Date of birth (dd-mm-yyyy): ");
	scanf("%s", dob);

	printf("Enter your business name: ");
	scanf("%s", bus_name);

	printf("Enter your business account number: ");
	scanf("%s", bus_acc_no);

	printf("Enter your business date of formation (dd-mm-yyyy): ");
	scanf("%s", date_of_formation);

	printf("Enter your business tax identification number: ");
	scanf("%s", tax_id);

	do
	{
		printf("Enter initial amount: ");
		scanf("%f", &initial_amt);

		if (initial_amt < 5000)
		{
			printf("Error: Initial amount must be equal to or above 5000\n");
		}
	} while (initial_amt < 5000);

	sprintf(personalFilename, "%s%s", f_name, acc_no);
	personalFile = fopen(personalFilename, "a");

	// Create the admin file name
	sprintf(adminFilename, "admin_database.txt");

	// Open the admin file in append mode
	adminFile = fopen(adminFilename, "a");

	if (personalFile == NULL || adminFile == NULL)
	{
		printf("Error opening files.\n");
		return;
	}

	// Write user information to personal file
	fprintf(personalFile, "Name = %s %s\n", f_name, l_name);
	fprintf(personalFile, "Age = %s\n", age);
	fprintf(personalFile, "Account number = %s\n", acc_no);
	fprintf(personalFile, "Date of Birth = %s\n", dob);
	fprintf(personalFile, "Business Name: %s\n", bus_name);
	fprintf(personalFile, "Business Account Number: %s\n", bus_acc_no);
	fprintf(personalFile, "Business Date of Formation: %s\n", date_of_formation);
	fprintf(personalFile, "Business Tax Identification Number: %s\n", tax_id);
	fprintf(personalFile, "Account Initial Balance: %f\n", initial_amt);

	// Write user information to admin file
	fprintf(adminFile, "Name = %s %s\n", f_name, l_name);
	fprintf(adminFile, "Age = %s\n", age);
	fprintf(adminFile, "Account number = %s\n", acc_no);
	fprintf(adminFile, "Date of Birth = %s\n", dob);
	fprintf(adminFile, "Business Name: %s\n", bus_name);
	fprintf(adminFile, "Business Account Number: %s\n", bus_acc_no);
	fprintf(adminFile, "Business Date of Formation: %s\n", date_of_formation);
	fprintf(adminFile, "Business Tax Identification Number: %s\n", tax_id);
	fprintf(adminFile, "Account Initial Balance: %f\n\n\n", initial_amt);

	// Close personal file
	fclose(personalFile);

	// Close admin file
	fclose(adminFile);

	printf("\nAccount created successfully!\n");
}

void admin_login()
{
	printf("\n\e[32m\e[1m<-----Administrative Login----->\n\"");

	do
	{
		printf("Username: ");
		scanf("%s", admin_name);
		printf("Password: ");
		scanf("%s", admin_password);

		if (strcmp(admin_name, "admin") != 0 ||
			strcmp(admin_password, "password") != 0)
		{
			printf("Invalid Username and Password. Try again.\n");
		}
	} while (strcmp(admin_name, "admin") != 0 || strcmp(admin_password, "password") != 0);
}

void user_login()
{

	char name[20], account[20], filename[30];
	FILE *file;

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your account number: ");
	scanf("%s", account);

	sprintf(filename, "%s%s", name, account);

	file = fopen(filename, "r");

	if (file == NULL)
	{
		// File does not exist
		printf("User '%s' does not exist. Try again.\n", name);
	}
	else
	{

		printf("User '%s' opened successfully.\n", name);

		char line[100];
		while (fgets(line, sizeof(line), file))
		{
			printf("%s", line);
		}

		fclose(file);
	}
}

void admindatabase()
{
	FILE *file;
	char line[100];

	file = fopen("admin_database.txt", "r");

	if (file == NULL)
	{
		printf("No Data aviablle to show\n");
		return;
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		printf("%s", line);
	}

	fclose(file);
}

int main()
{
	char log[5], admin_choice[5];
	printf("\e[31m\e[1m<-----Welcome to KDNSN International Bank----->\n\e[m\e[0m\n");

	printf("Login into System as\n");
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
		admin_login();

		printf("<<< Administrative Login successful >>>\n");
		printf("\e[mEnter the next choice: \n");
		printf("1. View all Details\n");
		printf("2. Create new account\n");
		scanf("%s", admin_choice);

		while (admin_choice[0] != '1' && admin_choice[0] != '2')
		{
			printf("Invalid Option: Try Again\n");
			printf("Enter your option (1 or 2): \n");
			scanf("%s", admin_choice);
		}

		if (admin_choice[0] == '1')
		{

			printf("\n<----- View All Account Details ----->\n");
			admindatabase();
		}
		else if (admin_choice[0] == '2')
		{
			printf("<----- Create new account ----->");
			printf("Choose Account type: \n");
			printf("1. Saving Account \n");
			printf("2. Current Account \n");
			scanf("%s", acc_type);

			while (acc_type[0] != '1' && acc_type[0] != '2')
			{
				printf("Invalid Option: Try Again\n");
				printf("Enter your option (1 or 2): \n");
				scanf("%s", acc_type);
			}

			if (acc_type[0] == '1')
			{
				printf("<--- Creating Saving Account --->");
				saving_acc();
			}
			else if (acc_type[0] == '2')
			{
				printf("<--- Creating Current Account --->");
				current_acc();
			}
		}
	}
	else if (log[0] == '2')
	{
		user_login();
	}
}