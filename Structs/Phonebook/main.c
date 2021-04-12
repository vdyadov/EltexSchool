#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

#include "header.h" 

typedef struct phoneBook {
	char name[NAME];
	char lastName[NAME];
	long phoneNumber;
} phoneBook;

int main(void) {
	
	phoneBook pBook[PHONE_BOOK] = {	{"Антон", "Петров", 9139886545}, 	//1
									{"Василий", "Пупкин", 8569948251}, 	//2
									{"Иван", "Сидоров", 9566548093}, 	//3
									{"Алексей", "Иванов", 8005369485}, 	//4
									{"Илья", "Сапогов", 8529345623}, 	//5
									{"Кирилл", "Кузнецов", 9135679584}, //6
									{"Леонид", "Петров", 8549658523}, 	//7
									{"Наталия", "Иванова", 9135862456},	//8
									{"Ульяна", "Петрова", 9859458653}, 	//9
									{"Анна", "Сапогова", 9136548283}};	//10

	char help[HELP], name[NAME], lastName[LAST_NAME], phone[PHONE];
	int id = 0;
	long phoneNum = 0;

	printf("Для вывода информации по использованию программы введите: help\n");

	fgets(help, HELP + 1, stdin);
	if (!strcmp("help", help)){
		printf("Для поиска абонента по имени введите: 1\n");
		printf("Для поиска абонента по фамилии введите: 2\n");
		printf("Для поиска абонента по номеру телефона введите: 3\n");
	}

	printf("Каким способом вы будете искать (введите цифру): ");
	scanf("%d", &id);
	__fpurge(stdin);
	switch (id) {
	case  1:
		printf("Введите имя абонента: ");
		fgets(name, NAME, stdin);

		for (int i = 0; i < PHONE_BOOK; ++i) {
			if (!strncmp(name, pBook[i].name, strlen(name) - 1)) {
				printf("Имя: %s, Фамилия: %s, Номер: +7%ld\n",
				pBook[i].name, pBook[i].lastName, pBook[i].phoneNumber);
				break;
			} else {
				if (i == PHONE_BOOK - 1)
					printf("Абонента с таким именем нет!\n");
			}
		}
		break;
	case 2:
		printf("Введите фамилию абонента: ");
		fgets(lastName, LAST_NAME, stdin);

		for (int i = 0; i < PHONE_BOOK; ++i) {
            if (!strncmp(lastName, pBook[i].lastName, strlen(lastName) - 1)) {
                printf("Имя: %s, Фамилия: %s, Номер: +7%ld\n",
                pBook[i].name, pBook[i].lastName, pBook[i].phoneNumber);
            	break;
			} else {
                if (i == PHONE_BOOK - 1)
                    printf("Абонента с такой фамилией нет!\n");
            }
		}
		break;
	case 3:
		printf("Введите номер абонента: +7");
		fgets(phone, PHONE, stdin);
		phoneNum = atol(phone);
		for (int i = 0; i < PHONE_BOOK; ++i) {
            if (phoneNum == pBook[i].phoneNumber) {
                printf("Имя: %s, Фамилия: %s, Номер: +7%ld\n",
                pBook[i].name, pBook[i].lastName, pBook[i].phoneNumber);
				break;
            } else {
                if (i == PHONE_BOOK - 1)
                    printf("Абонента с таким номер нет!\n");
			 }
		}
		break;
	}

	return 0;
}
