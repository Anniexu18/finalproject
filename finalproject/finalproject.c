#include <stdio.h>
#include <string.h>

void checkAccuracy(const char* correct, const char* input)
{
	// set up our variables
	int missed = 0, length;

	// set the length to the shorter one, because we don't want to go outside bounds of the arrays
	if (strlen(correct) > strlen(input))
	{
		length = strlen(input);
		missed += strlen(correct) - strlen(input);
	}
	else
	{
		length = strlen(correct);
	}

	// check if any characters don't match and add to misses
	for (int i = 0; i < length; i++)
	{
		if (correct[i] != input[i])
			missed++;
	}
	// find the accuracy percentage
	float correctPercent = 100.f - (100.f * missed / strlen(correct));
	// print the accuracy message
	printf("You were %.2f percent accurate\n", correctPercent);
}

int main(void)
{
	char mode[10];
	printf("Welcome to the game 'Typing game'!\n");
	printf("start the game :)!\n");
	printf("--------------------------");


	printf("choose the level 'Easy' or 'Hard'");
	printf("---------------------------------");
	gets_s(mode, 10);

	if (mode[0] == 'E')
	{
		char answer1[200];
		const char* sentence1 = "I love computer science and I enjoy studying in Digipen summer camp. I will major in computer science in the future.";
		const char* sentence2 = "The quick brown fox jumps over the lazy dog.";
		puts(sentence1);
		
		time_t beforeTime1 = 0, afterTime1 = 0;
		time(&beforeTime1);

		gets_s(answer1, 200);

		time(&afterTime1);
		printf("You took %d seconds\n", afterTime1 - beforeTime1);

		checkAccuracy(sentence1, answer1);

		if (afterTime1 - beforeTime1 <= 20)
		{
			printf(" Good job! keep going :D\n");
		}
		else if (afterTime1 - beforeTime1 > 20)
		{
			printf(" oops:( you can do better in next round!\n");
		}

		char answer2[200];
		
			puts(sentence2);;

		time_t beforeTime2 = 0, afterTime2 = 0;
		time(&beforeTime2);
		gets_s(answer2, 200);
		time(&afterTime2);
		printf("you took %d seconds\n", afterTime2 - beforeTime2);

		checkAccuracy(sentence2, answer2);


		if (afterTime2 - beforeTime2 <= 9)
		{
			printf(" Good job! Keep going!!\n");
		}
		else if (afterTime2 - beforeTime2 > 9)
		{
			printf(" oops:(you can do better in next round!\n");
		}

	}
	if (mode == 'H')
		gets_s(mode, 100);
	{
		char answer3[100];
		const char* sentence3 = "abcdefghijklmnopqrstuvwxyz";
		puts("abcdefghijklmnopqrstuvwxyz\n");

		time_t beforeTime3 = 0, afterTime3 = 0;
		time(&beforeTime3);
		scanf_s("%s", answer3, 100);
		time(&afterTime3);
		printf("you took %d seconds\n", afterTime3 - beforeTime3);

		checkAccuracy(sentence3, answer3);


		if (afterTime3 - beforeTime3 < 7)
		{
			printf("Congrats! you are above average!");

		}
		else if (afterTime3 - beforeTime3 > 7)
		{
			printf("I believe you can do it next time!");
		}



	}
	
}









