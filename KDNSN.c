#include <stdio.h>

// Function declarations
void personal_info();
void business_info();
void saving_acc();
void current_acc();

int main() {
	char acc_type;

	printf("\e[1m<-----Welcome to KDNSN International Bank----->\n\e[m");

	printf("Which account do you want to access");
	printf("\n1. Current Account");
	printf("\n2. Saving Account");
	printf("\nEnter your option: ");
	scanf(" %c", &acc_type);

	if (acc_type == '1') {
		current_acc();
	} else if (acc_type == '2') {
		saving_acc();
	} else {
		printf("Invalid Option");
	}

	return 0;
}



void saving_acc() {
	personal_info();

	// Additional saving account specific code
}

void current_acc() {
	business_info();
	personal_info();

	// Additional current account specific code
}



void personal_info() {
	// Personal Information Function
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



void business_info() {
	// Bussiness Information Function
	char B_Name[15], B_Type[10], ein[10], businessAddress[25], businessPhone[20], dateOfBusinessFormation[20], industry[15], productsOrServices[20];

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