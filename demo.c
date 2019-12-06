
#include<stdio.h>
struct Date{
	int date;
	int month;
	int year;
};
struct Student{
	int regNo;
	char name[20];
	struct Date d1;
	int scores[5];
};
int total(struct Student *s){
	int sum=0;
	int j;
	for(j=0;j<5;j++){
		sum+=s->scores[j];
	}
	return sum;
}
int main()	
{
	int i;
	struct Student s[5]={{1,"robert",{12,3,1998},{5,4,5,3,5}},
	                     {2,"regina",{4,5,1998},{3,5,4,5,4}},
	                     [2]={3,"tailor",{2,3,1998},{3,5,2,4,1}},
	                     [3]={4,"jacob",{2,1,1998},{3,4,2,1,5}},
						 [4]={5,"rehman",{3,6,1998},{3,5,2,4,1}},
						 };
	struct Student * sptr;
	sptr=&s[0];
	int sum=0;
	for(i=0;i<5;i++){
		printf("regNo : %d total score : %d\n",(sptr+i)->regNo,total(&s[i]));
	}
	return 0;
}
