#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
struct Person {
    char name[50];
    int age	;
    long long int aadharNumber;
    char dateOfBirth[20];
    char address[150];
    char date[10];
    long long int phone;
};
int main()
{
	int i;
	char a;
	char pwd[20];
	char user[20];
	int n,m,h;
	char head[50]={"\t\t\t\t\t\t\t\t welcome to police station "};
	for(n=0;n<50;n++)
	{
		printf("\033[3;31m%c",head[n]);
		usleep(50000);
	}
	printf("\033[1;37m \n\t\t\t\t\t\t------------------------------------------------------");
	char seed[50]={"\n\t\t\t\t\t\t\t\tFirst Information Report"};
	for(m=0;m<50;m++)
	{	
		printf("\033[1;31m%c",seed[m]);
		usleep(50000);
	}
	while (1)
	{
	printf("\033[0;36m\n Enter your login details:");
	printf("\033[1;37m\nEnter username:");
	scanf("%s",user);
	printf("Enter password:");
	while((a=_getch())!=13)
	{
		pwd[i]=a;
		i++;
		printf("*");
	}
	pwd[i]='\0';
	if(strcmp(user,"Abhinayasri")==0 && strcmp(pwd,"2203A51682")==0 || strcmp(user,"Madhavan")==0 && strcmp(pwd,"2203A53003")==0 || strcmp(user,"Souhruday")==0 && strcmp(pwd,"2203A53005")==0 || strcmp(user,"Sathwik")==0 && strcmp(pwd,"qwerty")==0)
{
		char seed[50]={"\n\t\t\t\t\t\t\t\tlogin successfully completed"};
              for(h=0;h<50;h++)
              {            
                           printf("\033[1;31m%c",seed[h]);
                           usleep(50000);
              }
                          // printf("\033[1;37m \n\t\t\t\t\t

	//	printf("\033[3;31m\n\t\t\t\t\t\t\t\t login successfully completed");
		printf("\033[1;37m \n\t\t\t\t\t\t------------------------------------------------------");
	printf("\nselect your option to file a case:");
	printf("\033[0;33m \n\t\t1.categories of Assaults");
	printf("\033[0;33m \n\t\t2.categories of cyber frauds");
	printf("\033[0;33m \n\t\t3.Categories of Domestic violence"); //printf("Help Line Number : 8793088814");
	printf("\033[0;33m \n\t\t4.categories of Crimes against women");
	printf("\033[0;33m \n\t\t5.categories of Accident cases");
	printf("\033[0;33m \n\t\t6.categories of theft");
	printf("\033[1;37m \n\t\t\t\t\t\t------------------------------------------------------\n");
	
	
	while(1)
	{
		int choice;
		printf("\033[3;35m\n\n Enter your choice from the above list:");
	scanf("%d",&choice);
		if (choice <= 6)
		{
	switch (choice)
	{ case 1:{
		
		int choice_assaults;
		printf("\033[1;34m \nFIR categories of Assaults");
		printf("\033[1;35m\n 1.SIMPLE ASSUALTS:");
		printf("\033[1;37m\n\t\t---Is intentionally causing fear of injury to another person.\n");
		printf("\033[1;35m\n 2.AGGRAVATED ASSAULTS:");
		printf("\033[1;37m\n\t\t---Is attempting to cause death or causing grievous hurt to another person.\n");
		printf("\033[1;35m\n 3.SEXUAL ASSAULTS:");
		printf("\033[1;37m\n\t\t---Is non-consensual sexual contact or activity.\n");
		printf("\033[1;35m\n 4.DOMESTIC ASSUALTS:");
		printf("\033[1;37m\n\t\t---Cruelty against women.\n");
		printf("\033[1;35m\n 5.ASSAULT WITH INTENT TO ROB:");
		printf("\033[1;37m\n\t\t---Is using force or violence to commit robbery.\n");
		printf("\033[1;35m\n 6.ASSAULT ON A POLICE OFFICER:");
		printf("\033[1;37m\n\t\t---Assault or use of criminal force against a public servant.\n");
		printf("\033[1;35m\n 7.ASSAULT WITH A DEADLY WEAPON:");
		printf("\033[1;37m\n\t\t---Assault with a deadly weapon.\n");
		printf("\033[1;35m\n 8.ASSAULT WITH INTENT TO CAUSE GRIEVOUS BODILY HARM:");
		printf("\033[1;37m\n\t\t---Is causing grievous hurt to another person with the intent to cause such harm.\n");
		printf("\033[1;37m \n enter choice for assaults:");
		scanf("%d",&choice_assaults);
		switch (choice_assaults){
		case 1:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person); 
		printf("- Simple Assualt -");
		printf("\n Under Section 352");
		printf("\n The punishment for this offense is imprisonment for up to 3 months, a fine, or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Simple Assualt - ");
			fprintf(file,"Under Section 352.");
			fprintf(file,"The punishment for this offense is imprisonment for up to 3 months, a fine, or both. ");
			fclose(file);
			break;
		}
		case 2:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Aggravated Assault -");
		printf("\n Under Section 307");
		printf("\n The punishment for this offense can range from imprisonment for up to 10 years to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Aggravated Assault - ");
			fprintf(file,"Under Section 307.");
			fprintf(file,"The punishment for this offense can range from imprisonment for up to 10 years to life imprisonment.");
			fclose(file);
			break;
		}
		case 3:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Sexual Assault -");
		printf("\nUnder Section 375");
		printf("\nThe punishment for this offense ranges from 7 years to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Sexual Assault - ");
			fprintf(file," Under Section 375.");
			fprintf(file,"The punishment for this offense ranges from 7 years to life imprisonment. ");
			fclose(file);
			break;
		}
		case 4:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Domestic Assault -");
		printf("\nUnder Section 498A ");
		printf("\nThe punishment for this offense is imprisonment for up to 3 years and/or a fine.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Domestic Assault - ");
			fprintf(file,"Under Section 498A.");
			fprintf(file,"The punishment for this offense is imprisonment for up to 3 years and/or a fine. ");
			fclose(file);
			break;
		}
		case 5:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Assault with Intent to Rob -");
		printf("\nUnder Section 394");
		printf("\nThe punishment for this offense ranges from 7 years to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Assault with Intent to Rob -");
			fprintf(file,"Under Section 394.");
			fprintf(file,"The punishment for this offense ranges from 7 years to life imprisonment.");
			fclose(file);
			break;
		}
		case 6:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Assault on a Police Officer -");
		printf("\n Under Section 353");
		printf("\n The punishment for this offense can range from imprisonment for up to 2 years to 7 years.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file,"- Assault on a Police Officer - ");
			fprintf(file,"Under Section 353.");
			fprintf(file,"The punishment for this offense can range from imprisonment for up to 2 years to 7 years.");
			fclose(file);
			break;
		}
		case 7:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Assault with a Deadly Weapon -");
		printf("\n Under Section 307");
		printf("\n The punishment for this offense can range from imprisonment for up to 10 years to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Assault with a Deadly Weapon -");
			fprintf(file, "Under Section 307.");
			fprintf(file, "The punishment for this offense can range from imprisonment for up to 10 years to life imprisonment.");
			fclose(file);
			break;
		}
		case 8:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Assault with Intent to Cause Grievous Bodily Harm -");
		printf("\n Under Section 326");
		printf("\n The punishment for this offense ranges from 7 years to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Assault with Intent to Cause Grievous Bodily Harm -");
			fprintf(file, "Under Section 326. ");
			fprintf(file, "The punishment for this offense ranges from 7 years to life imprisonment.");
			fclose(file);
			break;
		}	
	} break;
	}
	case 2:{
	printf("\033[1;37m \n\t\t\t\t---------------------------------------------------");
	int choice_cyberfrauds;
	printf("\033[1;34m \n FIR categories of cyber frauds\n");
	printf("\033[1;35m\n 1.PHISHING");
	printf("\033[1;37m\n\t\t---about bank issues,socialization in email or on website.\n");
	printf("\033[1;35m\n 2.IDENTITY THEFT");
	printf("\033[1;37m\n\t\t---practice of using another person's name and personal information in order to obtain credit, loans.\n");
	printf("\033[1;35m\n 3.MALWARE");
	printf("\033[1;37m\n\t\t---Cybercriminals typically use it to extract data that they can leverage over victims for financial gain.\n");
	printf("\033[1;35m\n 4.SOCIAL ENGINEERING");
	printf("\033[1;37m\n\t\t--- the use of centralized planning in an attempt to manage social change and regulate the future development and behaviour of a society.\n");
	printf("\033[1;35m\n 5.CYBERSTALKING");
	printf("\033[1;37m\n\t\t---the repeated use of electronic communications to harass or frighten someone, for example by sending threatening emails.\n");
	printf("\033[1;35m\n 6.RANSOMWARE");
	printf("\033[1;37m\n\t\t---type of malicious software designed to block access to a computer system until a sum of money is paid.\n");
	printf("\n enter choice for cyber frauds:");
	scanf("%d",&choice_cyberfrauds);
	switch (choice_cyberfrauds)
	{
		case 1:{
		struct Person person;
		getDetails(&person);
		writeToFile(person);
		printf("- phishing frauds -");
		printf("\n Under Section 66");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- phishing frauds - ");
			fprintf(file, "Under Section 66. ");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both. ");
			fclose(file);
			break;
		}
		case 2:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Identity theft -");
		printf("\n Under Section 66c of the act2000");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 1,00,000rs , or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Identity theft - ");
			fprintf(file, "Under Section 66c of the act2000.");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 1,00,000rs , or both. ");
			fclose(file);
			break;
		}
		case 3:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Malware -");
		printf("\n Under section 43 with Section 66");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Malware - ");
			fprintf(file, "Under section 43 with Section 66. ");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both. ");
			fclose(file);
			break;
		}
		case 4:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Social Engineering -");
		printf("\n Under Section 66");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs .\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Social Engineering - ");
			fprintf(file, "Under Section 66.");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs . ");
			fclose(file);
			break;
		}
		case 5:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- cyberstalking -");
		printf("\n Under section 1860");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- cyberstalking - ");
			fprintf(file, "Under section 1860.");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both. ");
			fclose(file);
			break;
		}
		case 6:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- ransomware -");
		printf("\n Under section 43 with Section 66");
		printf("\n The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- ransomware - ");
			fprintf(file, "Under section 43 with Section 66.");
			fprintf(file, "The punishment for this offense is imprisonment for up to 3 years, a fine of 5,00,000rs , or both. ");
			fclose(file);
			break;
		}
	}	break;
	}
	case 3:
		{
	printf("\033[1;37m \n\t\t\t\t---------------------------------------------------");
	int choice_Domestic_violence;
	printf("\033[1;34m \n FIR categories of Domestic violenceni\n");
	printf("\033[1;35m\n 1.PHYSICAL ABUSE:");
	printf("\033[1;37m\n\t\t---Physical abuse is the use of physical force to harm or control a partner. It can include hitting,slapping,punching,kicking,choking,burning,or using weapons. Physical abuse can cause serious injuries, including broken bones, bruises, and cuts.\n");
	printf("\033[1;35m\n 2.SEXUAL ABUSE");
	printf("\033[1;37m\n\t\t---Sexual abuse is any unwanted sexual activity or behavior. It includes rape, forced sexual acts, unwanted sexual touching, and coercion. Sexual abuse can also involve using drugs or alcohol to incapacitate a partner and engage in sexual activity without their consent.elevant IPC sections include.\n");
	printf("\033[1;35m\n 3.EMOTIONAL ABUSE");
	printf("\033[1;37m\n\t\t---Emotional abuse involves using words or actions to harm or control a partner's emotions and sense of self-worth. It can include verbal attacks, insults, name-calling, belittling, criticizing, and undermining a partner's abilities\n");
	printf("\033[1;35m\n 4.PSYCHOLOGICAL ABUSE");
	printf("\033[1;37m\n\t\t---Psychological abuse is the use of tactics such as manipulation, intimidation, threats, and coercion to control a partner's behavior, thoughts, and emotions. This can include gaslighting, making a partner doubt their own memory or perception of events, or threatening to harm themselves or others if the partner does not comply with their demands.\n");
	printf("\033[1;35m\n 5.FINANCIAL ABUSE");
	printf("\033[1;37m\n\t\t---Financial abuse involves controlling a partner's financial resources to gain power and control over them. This can include preventing a partner from working, taking their earnings, limiting their access to money, or forcing them to sign financial documents without their consent.\n");
	printf("\033[1;35m\n 6.STALKING");
	printf("\033[1;37m\n\t\t---Stalking involves monitoring a partner's movements, actions, and communications without their consent, and using this information to harm or control them. This can include following a partner, sending unwanted messages, making threats, or monitoring their social media and other online activity.\n");
	printf("\n enter choice for Domestic voilence:");
	scanf("%d",&choice_Domestic_violence);
	switch (choice_Domestic_violence)
	{
		case 1:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Physical abuse -");
		printf("\n Under section 354");
		printf("\n The punishment for this  Assault or criminal force to woman with intent to outrage her modesty1 to 5 years+fine.\n");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Physical abuse - ");
			fprintf(file, "Under section 354. ");
			fprintf(file, "The punishment for this  Assault or criminal force to woman with intent to outrage her modesty1 to 5 years+fine. ");
			fclose(file);
			break;
		}
		case 2:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Sexual abuse -");
		printf("\nUnder section 375");
		printf("\n  Rape imprisonment of either description for a term which shall not be less than ten years, but which may extend to imprisonment for life, and shall also be liable to fine.\n");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Sexual abuse - ");
			fprintf(file, "Under section 375. ");
			fprintf(file, " Rape imprisonment of either description for a term which shall not be less than ten years, but which may extend to imprisonment for life, and shall also be liable to fine. ");
			fclose(file);
			break;
		}
		case 3:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Emotional abuse -");
		printf("\n Under section 509");
		printf("\n The punishment is  Word, gesture or act intended to insult the modesty of a woman simple imprisonment for 3 years+fine.");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Emotional abuse - ");
			fprintf(file, " Under section 509. ");
			fprintf(file, "The punishment is  Word, gesture or act intended to insult the modesty of a woman simple imprisonment for 3 years+fine.");
			fclose(file);
			break;
		}
		case 4:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- psycological abuse -");
		printf("\n Under section 503");
		printf("\n The punishment  Criminal intimidation imprision of either description for a term which may extend to 2 years.\n");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- psycological abuse - ");
			fprintf(file, "Under section 503. ");
			fprintf(file, "The punishment  Criminal intimidation imprision of either description for a term which may extend to 2 years. ");
			fclose(file);
			break;
		}
		case 5:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Financial abuse -");
		printf("\n Under section 420");
		printf("\n The punishment is Cheating and dishonestly inducing delivery of property 7 years+fine.\n");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Financial abuse - ");
			fprintf(file, "Under section 420 ");
			fprintf(file, "The punishment is Cheating and dishonestly inducing delivery of property 7 years+fine. ");
			fclose(file);
			break;
		}
		case 6:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- stalking -");
		printf("\n Under section 506");
		printf("\n The punishment is  Punishment for criminal intimidation 2 years or fine or both.\n");
		printf("contact Help Line Number : 8793088814 for details and support");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- stalking - ");
			fprintf(file, "Under section 506. ");
			fprintf(file, "The punishment is  Punishment for criminal intimidation 2 years or fine or both. ");
			fclose(file);
			break;
		}
	}
	break;
	}
	case 4:
		{
	printf("\033[1;37m \n\t\t\t\t---------------------------------------------------");
	int choice_Crimes_against_women;
	printf("\033[1;34m\n FIR categories of Crimes against women\n");
	printf("\033[1;35m\n 1.RAPE:");
	printf("\033[1;37m\n\t\t--a woman has been sexually assaulted, raped or subjected to any other form of sexual violence.\n");
	printf("\033[1;35m\n 2.SEXUAL HARASSMENT:");
	printf("\033[1;37m\n\t\t--unwanted sexual advances or behavior that creates a uncomfortable environment for the victim\n");
	printf("\033[1;35mm\n 3.DOWRY DEATH:");
	printf("\033[1;37m\n\t\t--incidents where a bride is killed or commit suicide due to disputes over dowry demands made by her husband's family.\n");
	printf("\033[1;35m\n 4.DOMESTIC VIOLENCE:");
	printf("\033[1;37m\n\t\t-- a woman is subjected to physical, emotional, or economic abuse by a spouse or family member.\n");
	printf("\033[1;35m\n 5.ACID ATTACK:");
	printf("\033[1;37m\n\t\t-- throwing of acid on the victim's face and body.\n");
	printf("\033[1;35m\n 6.HUMAN TRAFFICKING:");
	printf("\033[1;37m\n\t\t--women are trafficked for sexual exploitation, forced labor, or other forms of exploitation.\n");
	printf("\033[1;35m\n 7.STALKING:");
	printf("\033[1;37m\n\t\t--a women is harassed by someone like unwanted attention, following, or even physical assault.\n");
	printf("\n enter choice for Crimes against women:");
	scanf("%d",&choice_Crimes_against_women);
	switch(choice_Crimes_against_women)
	{
		case 1:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("-Rape-");
		printf("\n Under Section 376");
		printf("\n Punishable with imprisonment of not less than seven years but may extend to life imprisonment, and shall also be liable to pay fine.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Rape- ");
			fprintf(file, "Under Section 376 ");
			fprintf(file, "Punishable with imprisonment of not less than seven years but may extend to life imprisonment, and shall also be liable to pay fine. ");
			fclose(file);
			break;
		}
		case 2:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("-Sexual Harassment-");
		printf("\n Under Section 354A");
		printf("\n Punishable with imprisonment of up to three years or a fine, or both.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Sexual Harassment- ");
			fprintf(file, "Under Section 354A.Punishable with imprisonment of up to three years or a fine, or both. ");
			fclose(file);
			break;
		}
		case 3:{
		struct Person person;
		getDetails(&person);
		writeToFile(person);
		printf("-Dowry Death-");
		printf("\n Under Section 304B");
		printf("\n Punishable with imprisonment of not less than seven years but may extend to life imprisonment.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Dowry Death- ");
			fprintf(file, "Under Section 304B.Punishable with imprisonment of not less than seven years but may extend to life imprisonment. ");
			fclose(file);
			break;
		}
		case 4:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("-Domestic Violence-");
		printf("\n Under Section 498A");
		printf("\n Punishable with imprisonment of up to three years and a fine.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Domestic Violence- ");
			fprintf(file, "Under Section 498A.Punishable with imprisonment of up to three years and a fine. ");
			fclose(file);
			break;
		}
		case 5:{
		struct Person person;
		getDetails(&person);
		writeToFile(person);
		printf("-Acid Attack-");
		printf("\n Under Section 326A");
		printf("\n Punishable with imprisonment of not less than ten years but may extend to life imprisonment, and shall also be liable to pay fine.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Acid Attack- ");
			fprintf(file, "Under Section 326A ");
			fprintf(file, "Punishable with imprisonment of not less than ten years but may extend to life imprisonment, and shall also be liable to pay fine.");
			fclose(file);
			break;
		}
		case 6:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("-Human Trafficking-");
		printf("\n Under Section 370");
		printf("\n Punishable with imprisonment of not less than seven years but may extend to life imprisonment, and shall also be liable to pay fine.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Human Trafficking- ");
			fprintf(file, "Under Section 370. ");
			fprintf(file, "Punishable with imprisonment of not less than seven years but may extend to life imprisonment, and shall also be liable to pay fine.");
			fclose(file);
			break;
		}
		case 7:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("-Stalking-");
		printf("\n Under Section 354D");
		printf("\n Punishable with imprisonment of up to three years for the first offense, and for any subsequent offense with imprisonment of up to five years.\n");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Stalking- ");
			fprintf(file, "Under Section 354D. ");
			fprintf(file, "Punishable with imprisonment of up to three years for the first offense, and for any subsequent offense with imprisonment of up to five years. ");
			fclose(file);
			break;
		}
		}break;
	}
	case 5:
		{
		printf("\033[1;37m \n\t\t\t\t---------------------------------------------------");
	int choice_Accident_cases;
	printf("\033[1;34m\n FIR categories of Accident cases\n");
	printf("\033[1;35m\n 1.GENERAL EXCEPTION:");
	printf("\033[1;37m\n\t\t---This section is used in form of a general exception,which help to escape from criminal pushiment and liability if established fully before a court of law.\n");
	printf("\033[1;35m\n 2.RASH DRIVING:");
	printf("\033[1;37m\n\t\t---We can use this case if the people behave so rash and neglient,as it is endanger to human life or likely to cause hurt or injury to any other person .\n");
	printf("\033[1;35m\n 3.THE PROVISION ON CAUSING HURT:");
	printf("\033[1;37m\n\t\t---The Indian penal code,1860 this act that endangers life or personal security of others.If any person doing any act,which is so rashly or negligently as to endanger human life or the personal safety to other.\n");
	printf("\033[1;35m\n 4. GRIVOUS HURT:");
	printf("\033[1;37m\n\t\t---Whoever causes grievous hurt to any person by doing any act so rashly or negligently as to endanger human life, or the personal safety of others, shall be punished with imprisonment of either description for a term which may extend to two years, or with fine which may extend to one thousand rupees, or with both.\n");
	printf("\033[1;35m\n 5.DEATH BY NEGLIGENCE:");
	printf("\033[1;37m\n\t\t---this section is used causing the death of any person by doing rash driving or negligent act not amounting to culpable homicide.\n");
	printf("\n enter choice for Accident cases:");
	scanf("%d",&choice_Accident_cases);
	switch (choice_Accident_cases)
	{
		case 1:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- General exception -");
		printf("\n Under section 80");
		printf("\n to escape from law");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- General exception - ");
			fprintf(file, "Under section 80.To escape from law ");
			fclose(file);
			break;
		}
		case 2:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Rash driving -");
		printf("\n Under section 279");
		printf("\n imprisoment of either description for a term which may extend to six months, or with fine which may extend to one thousand ruppes, or with both");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Rash driving - ");
			fprintf(file, "Under section 279. ");
			fprintf(file, "imprisoment of either description for a term which may extend to six months, or with fine which may extend to one thousand ruppes, or with both ");
			fclose(file);
			break;
		}
		case 3:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- The provision on causing hurt -");
		printf("\n Under section 337");
		printf("\n Imprisonment of either description for a term which may extend to sixmonth,or with fine which may extend to five hundred rupees,with both");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- The provision on causing hurt - ");
			fprintf(file, "Under section 337. ");
			fprintf(file, " Imprisonment of either description for a term which may extend to sixmonth,or with fine which may extend to five hundred rupees,with both ");
			fclose(file);
			break;
		}
		case 4:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Grivous hurt -");
		printf("\n Under section 338");
		printf("\n Causing frievous hurt by act which endangers human life 2 years or fine or with both");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, " - Grivous hurt -");
			fprintf(file, "Under section 338 ");
			fprintf(file, " Causing frievous hurt by act which endangers human life 2 years or fine or with both");
			fclose(file);
			break;
		}
		case 5:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Death  by negligence -");
		printf("\n Under section 304A");
		printf("\n Imprisonment of either description for a term which may extend to 2 years or with fine or with both");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, " - Death  by negligence -");
			fprintf(file, "Under section 304A. ");
			fprintf(file, " Imprisonment of either description for a term which may extend to 2 years or with fine or with both");
			fclose(file);
			break;
		}
	}
}break;
case 6:
	{
	printf("\033[1;37m \n\t\t\t\t---------------------------------------------------");
	int choice_theft;	
	printf("\033[1;34m\n select a FIR catagorie in  Theft\n");
	printf("\033[1;35m\n 1.SIMPLE THEFT: \n");
	printf("\033[1;37m\n\t\t---This refers to the act of stealing movable property that belongs to another person without the use of force or deceit.");
	printf("\033[1;35m\n 2.THEFT BY DECPTION: ");
	printf("\033[1;37m\n\t\t---This refers to the act of stealing by using false pretenses or deception, such as by tricking the victim into \ngiving away their property.");
	printf("\033[1;35m\n 3.ROBBERY: \n");
	printf("\033[1;37m\n\t\t---This refers to the act of stealing using force or intimidation, such as by threatening the victim with a weapon.");
	printf("\033[1;35m\n 4.BURGLARY: \n");   
	printf("\033[1;37m\n \t\t---This refe rs to the act of stealing by breaking into a building or structure with the intent to commit theft.");
	printf("\033[1;35m\n 5.MOTOR VECHILE THEFT:");
	printf("\033[1;37m\n\t\t----This refers to the act of stealing a motor vehicle, such as a car or motorcycle.");
	printf("\033[1;35m\n 6.CYBER THEFT:");
	printf("\033[1;37m\n\t\t----The unauthorized access to computer systems or networks to steal digital assets, which can include personal data,\n intellectual property, financial information, and more.");					
	printf("\n enter choice for Theft:");		
	scanf("%d",&choice_theft);	
	switch (choice_theft)
	{
		case 1:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Simple Theft -");
		printf("Under Section 378");
		printf("The punishment for simple theft in India varies based on the value of the stolen property, \nwith imprisonment and fines being possible penalties. Theft in a building, tent, or vessel used as a human dwelling or enclosed space carries harsher penalties of up to seven years' imprisonment and fines.");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, " - Simple Theft -");
			fprintf(file, "Under Section 378. ");
			fprintf(file, "The punishment for simple theft in India varies based on the value of the stolen property, \nwith imprisonment and fines being possible penalties. Theft in a building, tent, or vessel used as a human dwelling or enclosed space carries harsher penalties of up to seven years' imprisonment and fines.");
			fclose(file);	
			break;
		}
		case 2 :{			
		struct Person person; 
		getDetails(&person);
		writeToFile(person);
		printf("- Theft by deception -");
		printf("Under  Section 379 \n The punishment for Theft by deception is the same as for Simple theft,\n which is imprisonment of either description for a term which may extend to three years, or with fine, or with both, as per Section 379 of the IPC.");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Theft by deception - ");
			fprintf(file, "Under  Section 379 \n The punishment for Theft by deception is the same as for Simple theft,\n which is imprisonment of either description for a term which may extend to three years, or with fine, or with both, as per Section 379 of the IPC. ");
			fclose(file);
			break;
		}
		case 3 :{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);			
		printf("- Robbery -");
		printf("Under Section 392 \n The use of force or threat of force in committing the theft distinguishes\n Robbery from other theft-related offenses. The punishment for Robbery may vary depending on the nature and extent of the use of force or threat of force used in committing the crime.");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "- Robbery - ");
			fprintf(file, " Under Section 392 \n The use of force or threat of force in committing the theft distinguishes\n Robbery from other theft-related offenses. The punishment for Robbery may vary depending on the nature and extent of the use of force or threat of force used in committing the crime");
			fclose(file);
			break;
		}
		case 4 :{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);					
		printf("- Burglary -");
		printf("Under Section 445 \n House-breaking involves the act of breaking into or entering a building or \n any part of a building with the intent to commit an offense, such as theft or assaul");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, " ");
			fprintf(file, " ");
			fclose(file);				
			break;
		}
		case 5:{
		struct Person person; 
		getDetails(&person);
		writeToFile(person);					
		printf("-Motor vehicle theft-");
		printf("under Section 379 of the IPC. This section defines theft as the taking of movable property without the consent of the owner and with the intention of dishonestly taking the property away.");
		FILE *file = fopen("details.txt", "a+");
			fprintf(file, "-Motor vehicle theft- ");
			fprintf(file, " under Section 379 of the IPC. This section defines theft as the taking of movable property without the consent of the owner and with the intention of dishonestly taking the property away.");
			fclose(file);
			break;
		}				
		case 6:{
		int choice_cyber_theft;
		printf("-Cyber theft-");
		printf("\n 1.criminal breach of trust");
		printf("\n 2.CHEATING	");
		printf("\033[1;32m \n enter choice for Cyber Theft:");
		scanf("%d",&choice_cyber_theft);
		switch (choice_cyber_theft){					
		case 1:{
			struct Person person; 
			getDetails(&person);
			writeToFile(person);
			printf("- criminal breach of trust -");
			printf("\n ---Section 408 of the IPC: This section deals with criminal breach of trust by an individual who is entrusted with property, including digital property such as passwords, login details, or confidential information.and punishment 7 years of jail+fine");						
			FILE *file = fopen("details.txt", "a+");
				fprintf(file, " - criminal breach of trust -");
				fprintf(file, " ---Section 408 of the IPC: This section deals with criminal breach of trust by an individual who is entrusted with property, including digital property such as passwords, login details, or confidential information.and punishment 7 years of jail+fine");
				fclose(file);
				break;
			}
		case 2:{
			struct Person person; 
			getDetails(&person);
			writeToFile(person);
			printf("- CHEATING -");
			printf("\n ---Section 420 of the IPC: This section deals with cheating and dishonestly inducing delivery of property, which can be applied to cases where a person has been deceived or tricked into providing access to their computer system network.");
			FILE *file = fopen("details.txt", "a+");
				fprintf(file, "- CHEATING - ");
				fprintf(file, " ---Section 420 of the IPC: This section deals with cheating and dishonestly inducing delivery of property, which can be applied to cases where a person has been deceived or tricked into providing access to their computer system network.");
				fclose(file);		
				break;
			}
		}break;								
		break;
		}								
		}	
	}break;	
}
break ;
}
else{

printf("\033[3;35m\n Enter Correct Choice");}
 }
	printf("\033[0;37m \n\t\t\t\t------------------------------------------------------------------");
	printf(" \n\t\t\t\t\tCase has been filed successfully with your details!");
	printf("\033[0;37m \n\t\t\t\t------------------------------------------------------------------");
	printf("\033[5;32m\nt\t\t\t\t\t\t\t  Thankyou and we will get you for the further information.");
	break ;
}
else{
		printf("\033[3;31m\n  login failed ");}
	}


return 0 ;

	
}

void getDetails(struct Person *person)
 {
	printf("\033[0;37m \n\t\t\t\t------------------------------------------------------------------");
	printf("\033[1;37m\nFill the Data");
   printf("\033[1;36m\n Date of incident:");
    scanf("%s", &person->date); 
	printf("\033[1;36m\nEnter name: ");
    scanf("%s",& person->name);
    printf("\033[1;36m\nEnter age: ");
    scanf("%d", &person->age);
    printf("\033[1;36m\n Phone Number: ");
    scanf("%lld", &person->phone);
    printf("\033[1;36m\nEnter Aadhar number: ");
    scanf("%lld", &person->aadharNumber);
    printf("\033[1;36m\nEnter date of birth (dd/mm/yyyy): ");
    scanf("%s", &person->dateOfBirth);
    printf("\033[1;36m\n Address: ");
    scanf("%s", &person->address);
    printf("\033[1;31m \n\n ");
	   }
void writeToFile(struct Person person) {
    FILE *file = fopen("details.txt", "a+");
    if (file == NULL) {
        printf("Error opening file!");
        return;
    }
    fprintf(file, "date of incident: %s\n", person.date);
    fprintf(file, "Name: %s\n", person.name);
    fprintf(file, "Age: %d\n", person.age);
    fprintf(file, "Date of Birth: %s\n", person.dateOfBirth);
    fprintf(file, "Phone Number: %lld \n", person.phone);
    fprintf(file, "Aadhar Number: %lld\n", person.aadharNumber);
    fprintf(file, "Address: %s\n", person.address);        
   fclose(file);
}

