#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	struct subject
	{
		int subject_id;
		char subject_name[30];
	};
	struct subject sub[5]{0};

	int i;
	char tmp[10];

	printf_s("Welcome\n");
	printf_s("Please enter subject Data\n");
	for (i = 0; i < 5; i++)
	{
		printf_s("Enter subject ID : ");
		gets_s(tmp);
		sub[i].subject_id = atoi(tmp);
		printf_s("Enter subject Name : ");
		gets_s(sub[i].subject_name);

	}

	printf_s("\nThese subject : \n");
	for (i = 0; i < 5; i++) {
		printf_s("%d\t%s\n",sub[i].subject_id,sub[i].subject_name);
	}
	_getch();
	//check
		int sid;
		printf_s("\nPlease Enter subject ID to Check that surely add : ");
		scanf_s("%d", &sid);
		if (sid = atoi(tmp))
		{
			printf_s("surely add\n");
		}

	

}