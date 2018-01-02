//========168=========
#include <stdio.h>

int main()
{
	int i = 1;
	
	for (;;)
	{
		if (i > 3)
		{
			printf ("%d, break!\n", i);
			break;
		}
		printf ("%d\n", i);
		i++;
	}


}






/*



//======167======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	if ( strcmp("me", "med") == 0 )
	{
		printf ("EQUAL\n");
	}
	else
	{
		printf ("NOT EQUAL\n");
		exit (-1);	//exit only terminates the innermot program in which it resides.
	}
	
	printf ("end\n");
	
}




//=======166========
//This program is to practice strlen()
#include <stdio.h>
#include <string.h>

int main()
{
	char * str = "sd\0",
		 * str_2 = "sd\n";
	
	printf ("%d_%d\n", strlen(str), strlen(str_2));
}




//======165=======
//This program is to practice appending to a file
#include <stdio.h>

int main()
{
	char * file_name = "input";
	
	FILE * f_ptr = fopen (file_name, "w");
	
	fputs ("this is line 1", f_ptr);	//since there is no newline character at the end,
										//the next action will start at the end of the 
										//first line instead of the beginning of the second
										//line.
	fclose (f_ptr);
	
	f_ptr = fopen (file_name, "a");
	
	fputs ("append", f_ptr);	//it appends to the end of the file, which ends at the 
								//end of the first line instead of the beginning of the
								//second line.
	
	fclose (f_ptr);
}





//======164=====
//This program is to practice fgets() and fputs() which 
#include <stdio.h>

int main()
{
	char * file_name = "input",
		 * line = "This is line 1\nThis is line 2\n";
		 
	char data [15];
	
	FILE * f_ptr = fopen (file_name, "w");
	fputs (line, f_ptr);
	fclose (f_ptr);
	
	//If the length of the strings read is less than the length of the line, then the 
	//control moves at the pace of length specified, otherwise it stops at the end of the 
	//line.
	f_ptr = fopen (file_name, "r");
	fgets (data, 3, f_ptr);
	fprintf (stdout, "%s*", data);
	
	fgets (data, 3, f_ptr);
	fprintf (stdout, "%s*", data);
	
	fgets (data, 3, f_ptr);
	fprintf (stdout, "%s*", data);
	
	fclose (f_ptr);
	
	f_ptr = fopen (file_name, "r");
	fgets (data, 39, f_ptr);
	fprintf (stdout, "%s*\n", data); //You see the newline character is read.
	
	fclose (f_ptr);
}






//=======163======
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i =1;
	
	system("exit");
	
	exit;
	printf ("after\n");
}





//=======162========
//This program is to practice reading from a file with precision.
#include <stdio.h>

int main()
{
	char * file_name = "a162";
	double a[4];
	
	FILE * f_ptr = fopen (file_name, "w");
	
	fprintf (f_ptr, "9.292530823E+01  1.899999949E-04    2.657E-01  2.657E-01\n");
		
	fclose(f_ptr);
	
	f_ptr = fopen (file_name, "r");
	
	fscanf (f_ptr, "%le %lE %lE %lE\n", & a[0], & a[1], & a[2], & a[3]);
	
	printf ("  %.9E  %.9E    %.3E  %.3E\n", a[0], a[1], a[2], a[3]);
	
	fclose(f_ptr);
}




//======161======
//This program is to practice string
#include <stdio.h>

int main()
{
	char * dir = "../add_levels_4/bound_topup/";
	char file [30];
	
	int i = 4;
	
	sprintf (file, "%s%i", dir, i);
	
	printf ("%s\n", file);

}





//=====160=====
//This program is to practice fgets()
#include <stdio.h>

int main()
{
	char * file_name = "a160";
	char line[9][90],
		 column_4[15];
	
	FILE * f_ptr = fopen(file_name, "w");
	
	fprintf (f_ptr, "   26    9   60   \n\
  0.000000E+00  0.934770E+00  0.970228E+01  0.566900E+02  0.569360E+02\n\
  0.575020E+02  0.575720E+02  0.577980E+02  0.580000E+02  0.583550E+02\n\
  0.592090E+02  0.592380E+02  0.594780E+02  0.595250E+02  0.595420E+02\n\
  0.599160E+02  0.599820E+02  0.600050E+02  0.600120E+02  0.601470E+02\n\
  0.602810E+02  0.603200E+02  0.604650E+02  0.605100E+02  0.608510E+02\n\
");
	fclose(f_ptr);

	f_ptr = fopen(file_name, "r");
	for (int i = 0; i < 6; i++)
	{
		fgets(line[i], 90, f_ptr);
		
		sscanf (line[i], "%*s %*s %3s", column_4);
		printf ("%s\n", column_4);
	}
	
	fclose(f_ptr);

	f_ptr = fopen(file_name, "r");
	int i;
	for (i = 1; i <= 1; i++)
	{
		printf ("last\n");
	}
	printf ("%d\n", i);
	fclose(f_ptr);
	
	printf ("======\n");
	f_ptr = fopen(file_name, "r");
	
	fscanf (f_ptr, "%*s %*s %*s %*s");
	
	fscanf (f_ptr, "%s\n", line[0]);
	printf ("%s\n", line[0]);
	
	fclose (f_ptr);
	printf (">>>>>>\n");
	f_ptr = fopen(file_name, "r");
	for (int i = 1; i <= 5; i++)
	{
		fgets(line[0], 8, f_ptr);
		printf ("%s\n", line[0]);
	}
	fgets(line[0], 14, f_ptr);
	printf ("%s\n", line[0]);
	fclose(f_ptr);
}




//=======159=========
//This program is to practice read a line from a file.
#include <stdio.h>

int main()
{
	char * file_name = "a159";
	
	char line[3][23];
	
	FILE * f_ptr = fopen(file_name, "w");
	
	for (int i = 1; i <=3; i++)
	{
		fprintf (f_ptr, "%.3E\n", (double)i*i);
	}

	fclose(f_ptr);
	
	f_ptr = fopen(file_name, "r");

	//fscanf (f_ptr, "%s", line[0]);
	fgets(line[0], 16, f_ptr);	//it stops at 18, or \n is read or the EOF.
	printf ("%s\n", line[0]);
	
	fscanf(f_ptr, "%2s", line[1]);
	printf ("%s\n", line[1]);
	
	fscanf(f_ptr, "%2s", line[1]);
	printf ("%s\n", line[1]);
	
	fscanf(f_ptr, "%2s", line[1]);
	fclose(f_ptr);
	
	printf ("%s\n", line[1]);
}





//=======158=======
//This program is to practice appending to a file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * f_ptr = fopen ("a158", "a");
	
	fprintf (f_ptr, "love\n");
	fclose(f_ptr);
	
	f_ptr = fopen ("a158", "a");
	fprintf (f_ptr, "me\n");
	fclose (f_ptr);
	
	system("cat a158");

}





//=======157======
//This program is to practice transforming a number string into an int
#include <stdio.h>

int main(int argc, char * argv [])
{
	int i;
	
	sscanf (argv[1], "%d", &i);
	
	printf ("%d %s\n", i+2, argv[1]);
	
}





//======165=====
//This program is to practice feeding the address of the file to be read into the code.
#include <stdio.h>

#define ITERATION 6

int main(int argc, char * argv[])
{
	char * file_name = argv[1],
		 * mode = "w";
	double num[ITERATION];
	
	FILE * f_ptr = fopen(file_name, mode);
	for (int i = 1; i <= ITERATION; i++)
	{
		fprintf (f_ptr, "%d %e\n", i, (double)i*i);
	}
	fclose(f_ptr);
	
	f_ptr = fopen(file_name, "r");
	
	for (int i = 1; i <= ITERATION; i++)
	{
		fscanf (f_ptr, "%*d %le\n", &num[i-1]);
		printf ("%f\n", num[i-1]);
	}
	printf ("before\n");
	fclose(f_ptr);
	printf ("end\n"); 
}




//=========164=========
//This program is to practice reading double-typed numbers.
#include <stdio.h>

#define ITERATION 6

int main()
{
	char * file_name = "a164",
		 * mode = "w";
	
	double num[ITERATION];
	
	
	FILE * f_ptr = fopen (file_name, mode);
	
	for (int i = 1; i <= 2; i++)
	{
		fprintf (f_ptr, "set %d\n", i);
		
		for (int j = 1; j <= ITERATION; j++)
		{
			fprintf (f_ptr, "%d %f\n", j, (double) j*j);
		}
	}
	
	fclose(f_ptr);
	
	
	mode = "r";
	
	f_ptr = fopen(file_name, mode);
	
	int temp;
	
	for (int i = 1; i <= 2; i++)
	{
		fscanf (f_ptr, "%*s %*s\n");
		
		for (int j = 1; j <= ITERATION; j++)
		{
			fscanf (f_ptr, "%d %lf\n", &temp, &num[j]);
			
			printf ("%d %.0E\n", temp, num[j]);
		}
	}
	
	fclose(f_ptr);
}




//======163======
//This program is to practice the roles of * played in (f/s)scanf and (f/s)printf.
#include <stdio.h>

int main()
{
	char * str = "I love 23 2.3E-3",
		 a [4];
	int b;
	double c;
	
	sscanf (str, "%*s%s%d%lf", a, &b, &c);
	
	printf("%s, %d, %*.*E\n", a, b, 12, 3, c);
	
}





//======162======
//This program is to practice string
#include <stdio.h>

int main()
{
	char * str = "love you";
	
	char a [10] = "xymn";
	
	printf ("%c, %d, %s\n", * (a+3), (int) a, a);
	
}





//======161======
//This program is to practice testing the returning value of a function when it is very
//small, will it be in %f or in scientific notation.
#include <stdio.h>
#include <math.h>

double tes_func();

int main()
{
	double a = tes_func();
	
	//By testing it, I found that though the number is very small, it's still represented
	//by as accuartely as possible in the computer, but it can be output as 0 in some
	//formats.
	for (int i = 0; i <= 10; i++)
	{
		printf ("%.7f, %e\n", a*pow(10, i), a);
	}
	
}

double tes_func()
{
	return 0.00000000023;
}




//=====160=====
//This program is to practice division
#include <stdio.h>
#include <math.h>

int main()
{
	printf ("%f\n", 2.0/pow(2+3, 2));
	printf ("%f\n", exp(1));
	
	
	
}



//=====159======
//This program is to practice natural exponent
#include <stdio.h>
#include <math.h>	//provide the declaration of function exp()

int main()
{
	printf ("%.9e, %.3e\n", exp(2), 23.2352323);
	
}




//=====158======
//This program is to practice raising a power using pow() function in math.h hearder.
#include <stdio.h>
#include <math.h>

int main()
{
	double a = 1.60218*pow(10, -16);
	
	printf ("%f, %e\n", a, a);	
}




//=====157=====
//This program is to practice scanf
#include <stdio.h>

int main()
{
	int a = 2323;
	//I thought the unmatched input should be discarded, but not.
	//fscanf(stdin, "%d", &a);
	scanf ("%d", &a);

	printf ("%d\n", a);

}




//=======156=======
//This program is to practice printf with undetermined width and precision
#include <stdio.h>

int main()
{
	printf ("%*.*f\n", 9, 2, 23.234);
}





//=====155=====
//This program is to practice an array of strings
#include <stdio.h>
#include <string.h>

int main()
{
    char * a[] = {"I love", "you !"};
    
    printf ("%s\n", a[1]);
    
    //char * b = a[1];
    char b [9];
    strcpy(b, a[1]);
    printf("%s_%c\n", b, b[2]);
    
}





//======154======
//This program is to practice allocate memory to an array of strings and then deallocate 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * a[3], buffer;
	a[0] = & buffer;
	* a[0]=3;
	
	printf ("%d\n", * a[0]);
	
	for (int i = 0; i < 3; i++)
	{
		a[i] = (int *) malloc(sizeof(int));
		* a[i] = i*i;
	}
	
	for (int i = 0; i < 3; i++)
	{
		free((int *)a[i]);
		printf ("%d\n", *a[i]);
		//free(a[i]);
	}
}




//=====153======
//This program is to practice free() and its return value
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * a = (int *) malloc(sizeof(int)), * b;
	free (b);
	
}





//======152=====
//This program is to practice fgets() and '\0'
#include <stdio.h>

int main()
{
	char a[40];
	
	//it turns out neither gets nor fgets treat '\0' as a special character.
	gets(a);
		
	printf ("%s\n", a);
	
	fgets(a, 8, stdin);
	printf ("%s\n", a);

}






//======151=======
//This program is to practice passing an array of strings to a function
#include <stdio.h>

void my_print(char * str[]);
int main()
{
	//Again string is terminated by '\0', and '\n' works
	char * str[3] = {"I love you\0!\n", "Do you understand?", "Yes, I do."};
	
	my_print(str);	
}

void my_print(char * str[])
{
	for (int i = 0; i < 3; i++)
	{
		printf ("%s", str[i]);
	}
}





//=======150========
//This program is to practice argv[], argc and envp[], which give us the ability to pass values to c-program
//and to access the environment variables.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[], char * envp[])
{
	printf ("%s\n", envp[1]);
	printf ("%d\n", argc);
	printf ("%s\n", argv[0]);

	if (argc <= 1)
	{
		printf ("Exiting\n");
		exit(1);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			printf ("%s_", argv[i]);
		}
		printf ("\n");
	}

	int a;
	sscanf (argv[1], "%d", & a);
	printf ("The intgeter is: %d\n", a);
}





//=======149======
//This program is to practice free()
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * a = malloc(sizeof(int));

	* a = 3;

	printf ("%d\n", *a);

	free((char *)a);
	* a = 33;
	printf ("%d\n", *a);
}





//======148=====
//This program is to practice binary tree (a circle)
#include <stdio.h>
#include <stdlib.h>

#define NUM_STU 10

struct location
{
	int i;
	struct location * left;
	struct location * right;
};

typedef struct location loc;

void set_left_right(loc * stu[]);

int main()
{
	loc * stu[NUM_STU];

	for (int i = 0; i < NUM_STU; i++)
	{
		stu[i] = (loc *) malloc(sizeof(loc));
		stu[i]->i = i;
	}

	set_left_right(stu);

	for (int i = 0; i < NUM_STU; i++)
	{
		printf ("%d_%d_%d\n", stu[i]->left->i, stu[i]->i, stu[i]->right->i);
	}
}

void set_left_right(loc * stu[])
{
	for (int i = 0; i < NUM_STU; i++)
	{
		if (i == 0)
		{
			stu[i]->left = stu[NUM_STU-1];
			stu[i]->right = stu[1];
		}
		else if (i > 0 && i < NUM_STU-1)
		{
			stu[i]->left = stu[i-1];
			stu[i]->right = stu[i+1];
		}
		else if (i == NUM_STU-1)
		{
			stu[i]->left = stu[i-1];
			stu[i]->right = stu[0];
		}
	}

}






//=====147=====
//This program is to practice malloc(size) and free(ptr)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STU 3
#define LENGTH 20
#define CODE 0	//For exit() function

struct per
{
	char * name;
	int age;
	struct per * ptr;
};
typedef struct per person;

int main()
{
	person * stu[NUM_STU];
	char buffer[LENGTH];

	for (int i = 0; i < NUM_STU; i++)
	{
		stu[i] = (person *) malloc(sizeof(person));
		fprintf (stdout, "Enter the name and age of student %d: ", i);
		fscanf (stdin, "%19s %d", buffer, & stu[i]->age);
		stu[i]->name = (char *) malloc(strlen(buffer)+1);

		if (stu[i] == NULL || stu[i]->name == NULL)
		{
			printf ("Malloc failed to allocate storage space for element %d, exiting\n", i);
			exit(CODE);
		}
		else
		{
			printf ("Malloc succeeded to allocate the space\n");
		}

		strcpy(stu[i]->name, buffer);

		if (i > 0)
		{
			stu[i-1]->ptr = stu[i];
		}
	}

	person * find_stu;
	int id;
	char cont = 'y';
	do
	{
		find_stu = stu[0];

		printf ("Enter the student number: ");
		fscanf (stdin, "%d", & id);	//every fscanf/scanf has to be followed by skipgarbage()
		while (fgetc(stdin) != '\n') {}

		if (id >= NUM_STU)
		{
			printf ("The id you entered is beyond the ragne, exiting!\n");
			exit(CODE);
		}

		for (int i = 0; i < id; i++)
		{
			find_stu = find_stu->ptr;
		}
		printf (">>>\n");
		printf ("%s_%d\n", find_stu->name, find_stu->age);
		fprintf (stdout, "Continue (y/n)? ");
		cont = fgetc(stdin);
		while (fgetc(stdin) != '\n') {}
	} while(cont == 'y');

	////============================
	//printf ("%lu\n", sizeof(person));
	//person // * per[NUM_STU],
			// * me = malloc(sizeof(person));
	//char buffer[LENGTH];
	//fprintf (stdout, "Enter your name: ");
	//fscanf (stdin, "%s", buffer);

	//printf ("%lu\n", strlen(buffer));
	//me->name = (char *) malloc(sizeof(strlen(buffer)+1));

	//strcpy(me->name, buffer);

	//fprintf (stdout, "%s\n", me->name);
	//printf("%lu\n",sizeof(person));
}




//=====146======
//This program is to practice strcpy(to, from), because we can not
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char * a="hido";	//You can define an array of characters like this, but if it's treated as a string, then
						//it's gonna be read with error because '\0' has been overwritten.
	char * b = malloc(5);
	fprintf (stdout, "%c_%c_%c_%c\n", a[0], a[1], a[2], a[3]);

	* b = * a;
	b[1] = 'x';
	printf ("%s\n", b);
	printf ("%d_%d_%d_%c\n", &a[0], &a[1], & a[2], a[2]);
	fprintf(stdout, "%d_%d\n", a, &a[0]);

	strcpy(b, a);
	printf ("%s\n", b);
}





//======145======
//This program is to practice malloc()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ELE 3
#define MAX_LENGTH 10

int main()
{
	char * str[NUM_ELE], buffer[MAX_LENGTH];

	for (int i = 0; i < NUM_ELE; i++)
	{
		printf ("Enter element %d: ", i);
		fscanf (stdin, "%9s", buffer);
		while (fgetc(stdin) != '\n') {}
		str[i] = (char *) malloc(strlen(buffer)+1);

		strcpy(str[i], buffer);
	}

	for (int i = 0; i < NUM_ELE; i++)
	{
		printf ("%s\n", str[i]);
	}

}





//======144=====
//This program is to practice store new data in a static string storage space.
#include <stdio.h>

int main()
{
	//CONFUSED: by using a staic string as a storage space, getting new string does not work.
	//static char * str = "1 3 5 7 9";

	//But declaring an character array does work.
	char str [10];
	//fscanf (stdin, "%9s", str);
	//while (fgetc(stdin) != '\n') {}
	fgets(str, 9, stdin);
	fprintf (stdout, "%s\n", str);

}





//======143========
//This program is to practice linked list
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

struct order
{
	int i;
	struct order * ptr;
};

typedef struct order ord;

int main()
{
	ord * root, * stu_1, * stu_2;

	root = (ord *) malloc(sizeof(ord));
	root->i = 0;
	root-> ptr = NULL;

	stu_1 = (ord *) malloc(sizeof(ord));
	stu_1->i = 1;
	stu_1->ptr = NULL;
	root->ptr = stu_1;

	stu_2 = (ord *) malloc(sizeof(ord));
	stu_2->i = 2;
	stu_2->ptr = NULL;
	stu_1->ptr = stu_2;

	//automate assigning values with a loop
	ord * a[LENGTH];

	for (int i = 0; i < LENGTH; i++)
	{
		a[i] = (ord *) malloc(sizeof(ord));
		a[i]->i = i*i;
		if (i > 0)
		{
			a[i-1]->ptr = a[i];
		}
	}

	fprintf (stdout, "%d\n", a[0]->ptr->ptr->i);

	//find the value of a specific structure.

	char yn='y';
	int j;
do
{
	fprintf (stdout, "Enter the element index you want to know: ");
	fscanf (stdin, "%d", &j);
	while(fgetc(stdin) != '\n') {}
	ord * temp_ptr = a[0];

	for (int i = 0; i <= j-1; i++)
	{
		temp_ptr = temp_ptr->ptr;
	}

	fprintf (stdout, "%d\n", temp_ptr->i);
	fprintf (stdout, "Continue (y/n)?");
	yn = fgetc(stdin);
	while(fgetc(stdin) != '\n') {}
} while (yn == 'y');
}






//======142======
//This program is to practice union
#include <stdio.h>

typedef union
{
	int age;
	double height;
} Height;

int main()
{
	Height my_height;

	//my_height.age = 27;
	my_height.height = 80.2;
	my_height.age = 7;
	//CONFUSED: they appear at the same time.
	fprintf(stdout, "%d_%f\n", my_height.age, my_height.height);
}





//======141======
//This program is to practice dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
	double b;
	char * str;
}test;

int main()
{
	test * ptr;

	for (int i = 1; i <= 3; i++)
	{
		ptr = (test *) malloc(sizeof(test));
		printf ("%d_%ld\n", (int) ptr, sizeof(test));
	}
}






//=====140======
//This program is to practice sizeof(type) which returns the bytes of the type
#include <stdio.h>

int main()
{
	printf ("%ld_%ld_%ld_%ld\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
}





//======139======
//This program is to practice initializing structures.
#include <stdio.h>

typedef struct
{
	char a[4];
	char * b;
	int c;
	double d;
} test;

int main()
{
	test my_test = {"love", "I love you", 27, 23.23};

	fprintf (stdout, "%s\n%s\n%d\n%f\n", my_test.a, my_test.b, my_test.c, my_test.d);
}





//=======138========
//This program is to practice fputc() or putchar()
#include <stdio.h>

int main()
{
	char ch = 'x';

	fputc (ch, stdout);
	fputc('\n', stdout);
	putchar ('\n');
	putchar (ch);
}





//======137======
//This program is to practice a pointer to a structure itself.
#include <stdio.h>

struct test
{
	int a;
	struct test	* ptr;
};

typedef struct test my_test;

int main()
{
	my_test num;
	num.a=3;
	num.ptr = & num;

	fprintf (stdout, "%d_%d_%d\n", num.a, (int) num.ptr, (int) & num);
}





//======136======
//This program is to practice nested structures.
#include <stdio.h>

typedef struct
{
	char family_name[8];
	char given_name[9];
} string;

typedef struct
{
	string name;
	int age;
	double height;
} person;

int main()
{
	person me;
	fprintf (stdout, "Enter your family name: ");
	fscanf (stdin, "%s", me.name.family_name);

	fprintf (stdout, "Enter your given name: ");
	fscanf (stdin, "%s", me.name.given_name);

	fprintf (stdout, "Enter your age and height: ");
	fscanf (stdin, "%d %lf", &me.age, &me.height);

	fprintf (stdout, "Your family name is %s\nYour given name is %s\nYour age is %d\nYour height is %f\n",\
			 me.name.family_name, me.name.given_name, me.age, me.height);
}




//======135=====
//This program is to practice fscanf and scanf with %4s
#include <stdio.h>

int main()
{
	char a [8];

	scanf ("%4s", a);
	while (getchar () != '\n') {}
	printf ("%s\n", a);

	fscanf (stdin, "%4s", a);
	while (getchar () != '\n') {}
	printf ("%s\n", a);

	fgets(a, 8, stdin);
	printf ("%s\n", a);
	//while (getchar () != '\n') {}

	gets(a);
	printf ("%s\n", a);

}





//======134======
//This program is to practice returning type of function is a structure type.
#include <stdio.h>

typedef enum {LianshuiZhao=1, MuziLi, PerryTeng} students;
typedef enum {Male, Female} gender;

typedef struct
{
	students name;
	char NAME [20];
	char DOB [15];
	double height;
	gender gen;
} person;

person info_person(students stu);

int main()
{
	person per[4];	//just like other fundamental types, structures can also have arrays.

	for (students stu = LianshuiZhao; stu <= PerryTeng; stu++)
	{
		per[stu] = info_person(stu);
	}

	for (students stu = LianshuiZhao; stu <= PerryTeng; stu++)
	{
		printf ("student ID = %d, DOB = %s, height = %f\n", per[stu].name, per[stu].DOB, per[stu].height);
	}

}

person	info_person(students stu)
{
	person per;

	per.name = stu;

	fprintf (stdout, "Your student ID is %d\n", stu);

	fprintf (stdout, "Enter your name: ");
	gets(per.NAME);
	//while (getchar() != '\n') {};

	fprintf (stdout, "Enter your DOB: ");
	gets(per.DOB);
	//while (getchar() != '\n') {};

	fprintf (stdout, "Enter your height: ");
	fscanf (stdin, "%lf", & per.height);
	while (getchar() != '\n') {};


	//switch (stu)
	//{
		//case LianshuiZhao:
			//per.name = LianshuiZhao;
			//printf ("Ente LianshuiZhao's DOB and height: ");
			//fscanf (stdin, "%s %lf", per.DOB, &per.height);
			//while (fgetc(stdin) != '\n') {}
			//break;
		//case MuziLi:
			//per.name = MuziLi;
			//printf ("Ente MuziLi's DOB and height: ");
			//fscanf (stdin, "%s %lf", per.DOB, &per.height);
			//while (fgetc(stdin) != '\n') {}
			//break;
		//case PerryTeng:
			//per.name = PerryTeng;
			//printf ("Ente PerryTeng's DOB and height: ");
			//fscanf (stdin, "%s %lf", per.DOB, &per.height);
			//while (fgetc(stdin) != '\n') {}
			//break;
		//default:
			//break;
	//}
	return per;

}





//=====133=======
//This program is to practice structures.
#include <stdio.h>

#define LENGTH 10

struct person
{
	char * name;
	char address[LENGTH];
	int age;
};

//typedef struct person PERSON;

int main()
{
	typedef struct person PERSON;	//A statement which can be in/out of the main() function.

	PERSON me;

	me.name = "lianshui zhao";

	fprintf (stdout, "%s_%c\n", me.name, me.name[2]);

	//fscanf (stdin, "%9s", me.address);
	fgets(me.address, 9, stdin);	//fgets can control the length of the sting, just like fscanf(stdin, "%9s", str)
	while (fgetc(stdin) !='\n') {}

	fprintf (stdout, "%s_%c\n", me.address, me.address[2]);

	scanf ("%d", & me.age);

	printf ("%d\n", me.age);

	PERSON * me_ptr;

	me_ptr = & me;

	printf ("%s; %s; %d\n", me_ptr -> name, me_ptr -> address, me_ptr -> age);
}






//======132======
//This program is to practice character array
#include <stdio.h>

int main()
{
	//character array and a string pointer is different in a few ways. One is that a = "hi" is not valid since
	//a denotes the address of the array, it can not be reassigned, while a pointer can be assigned like that
	//ptr = "hi", but characte array can be initialized that way. a and &a are the same, since a contains the
	//address of the array and &a means the address of the array, while ptr means the address pointed to by it,
	//& ptr means the address of ptr itself.
	char a[4] = "hik",
		 * str = a;

	printf ("%d_%d, %d_%d\n", a, & a, str, &str);

}




//======131=======
//This program is to practice declaring two varaibles of the same name in one block
#include <stdio.h>

int main()
{
	int a = 3;
	printf ("a = %d\n", a);

	{
		int a = 4;	//it belongs to the inner-most block. Without {}, compile error.
		printf ("a = %d\n", a);
	}
	printf ("a = %d\n", a);
}




//=====130======
//This program is to practice void pointer
#include <stdio.h>

int main()
{
	int a = 3;
	void * _ptr = &a;

	printf ("%d\n", * ((int *) _ptr));

	char b[4] = "lov";
	_ptr = b;
	printf ("%s\n", ((char *) _ptr));

	char c = 'x';
	_ptr = &c;
	printf ("%c\n", * ((char *) _ptr));

	char aa[2][8] = {"hi", "love"};
	_ptr = aa[1];
	printf ("%s\n", ((char *) _ptr));

	enum color {blue=9, red, white};
	enum color my = white;
	_ptr = & my;
	printf ("%d\n", *((enum color *) _ptr));

	const int bb = 3;	//read-only variable.

	//bb = 4;
}





//======129======
//This program is to practice enum and switch block
#include <stdio.h>

enum country {China = 86, USA = 89, UK = 90};

enum country from_country();

int main()
{
	printf ("Where do you come from?\n");

	printf ("%d\n", from_country());

}

enum country from_country()
{
	enum country you;

	printf ("Select the number in front of the country you are from\n>>86 China\n>>89 USA\n>>90 UK\n");

	scanf ("%u", & you);
	while (getchar() != '\n') {}

	switch (you)
	{
		case China:
			printf ("You are from China\n");
			break;
		case USA:
			printf ("You are from USA\n");
			break;
		case UK:
			printf ("You are from UK\n");
			break;
		default:
			printf ("%d is not listed\n", you);
			break;
	}
	return China;
}





//=======128======
//This program is to practice enum
#include <stdio.h>

#define TRUE 12

int main()
{
	enum color {red=-1, blue= 23, white= -2};

	enum color my = blue,
			   your = white,
			   his;
	char * str = "white";
	his = (enum color) (*str);	//enum color behaves like int.
	printf ("%d_%d\n", his, 'w');
	printf ("%d+%d=%d\n", my, your, my+your);
	//fprintf (stdout, "%d\n", true);
}





//========127======
//This program is to practice ftell(f_ptr), fseek(f_ptr, pos, mod), rewind(f_ptr)
#include <stdio.h>

int main()
{
	char ch;

	FILE * f_ptr = fopen("temp", "r");

	ch = fgetc(f_ptr);

	while (!feof(f_ptr))
	{
		printf ("%ld\n", ftell(f_ptr));	//ftell() returns long int.
		ch = fgetc(f_ptr);
	}

	fseek(f_ptr, 19, 0);

	ch = fgetc(f_ptr);
	fputc (ch, stdout);

	fseek(f_ptr, -9, 1);
	ch = fgetc(f_ptr);
	fputc (ch, stdout);

	fseek(f_ptr, -9, 2);
	ch = fgetc(f_ptr);
	fputc (ch, stdout);

	printf ("The current position is  %ld\n", ftell(f_ptr));
	rewind(f_ptr);
	printf ("After being rewinded, the position is now %ld\n", ftell(f_ptr));

}





//======126======
//This program is to practice fread and fwrite
#include <stdio.h>

#define LENGTH 100

int main()
{
	char str[LENGTH];

	FILE * f_ptr = fopen ("temp", "r");

	int num_cha = 21,
		num_blo = 4;
	if (num_blo * num_cha >= LENGTH)
	{
		fprintf (stdout, "CAUTION!!! num_blo * num_cha >= LENGTH: segmentation fault\n");
	}
	fread (str, num_cha, num_blo, f_ptr);
	fwrite (str, num_cha, num_blo, stdout);
}






//=======125======
//This program is to practice fprintf with pointer to stdout
#include <stdio.h>

int main()
{
	for (int i = 0; i <= 3; i++)
	{
		fprintf (stdout, "This is line %d\n", i);
	}

	int i;
	fscanf (stdin, "%i", &i);

	printf ("i = %d\n", i);

}





//=====124=====
//This program is to practice feof(fptr) and fgetc(f_ptr) == EOF?
#include <stdio.h>

int main()
{
	char ch;

	FILE * f_ptr;

	f_ptr = fopen ("temp", "r");

	ch = fgetc (f_ptr);

	while (! feof(f_ptr))
	{
		printf ("%c", ch);
		ch = fgetc (f_ptr);
	}


}




//======123======
//This program is practice fgets() and fputs()
#include <stdio.h>

#define LENGTH 10
int main()
{
	FILE * f_temp, * f_out;
	char buffer[LENGTH];

	f_temp = fopen ("temp", "r");
	f_out = fopen ("out", "w");

	int i =1;
	while (! feof(f_temp))
	{
		fgets(buffer, LENGTH-1, f_temp);
		fputs(buffer, f_out);
		//printf ("%s", buffer);
		if (i++ == 9)
		{
			break;
		}
	}
	printf ("i = %d\n", i-1);
	fgets(buffer, LENGTH-1, f_temp);
	fputs(buffer, f_out);
}




//=====122=======
//This program is to practie ungetc()
#include <stdio.h>

int main()
{
	char fname[5], fmode [3], ch;

	printf ("Enter the file name: ");
	scanf ("%4s", fname);
	while (getchar () != '\n') {}

	printf ("Enter the access mode of the file: ");
	scanf ("%2s", fmode);
	while (getchar () != '\n') {}

	FILE * f_ptr, * f_out;

	f_ptr = fopen (fname, fmode);
	f_out = fopen ("out", "w");

	int sum = 0;
	//move the control till it finds the starting signal.
	while ((ch = fgetc(f_ptr)) != EOF)
	{
		if (ch == 'T')
		{
			sum++;
		}
		else
		{
			//fprintf (f_out, "%c", ch);
			fputc(ch, f_out);

		}
	}
	printf ("%d\n", sum);
	//CONFUSED: ungetc()???
	//int i = -2;
	//ungetc(i, f_ptr);

	//printf ("%c\n", fgetc(f_ptr));

	fclose(f_ptr);
	fclose(f_out);

}






//======121======
//This program is to practice reading a file till the end.
#include <stdio.h>

int main()
{
	char fname[5], fmode[3];

	printf ("Enter the name of the file: ");
	scanf ("%s", fname);
	while (getchar() != '\n') {}

	printf ("Enter the access mode of the file: ");
	scanf ("%s", fmode);
	while (getchar() != '\n') {}

	FILE *f_ptr;
	char ch;
	f_ptr = fopen (fname, fmode);
	while ((ch = getc(f_ptr)) != EOF)	//both fgetc(f_ptr) and getc(f_ptr) exist.
	{
		printf ("%c", ch);
	}
//int i = 100;
	//fscanf (f_ptr, "%c", &ch);
	//while (i > 0)
	//{
		//if (ch == EOF) printf (">>>\n");
		//printf ("%c", ch);
		//fscanf (f_ptr, "%c", &ch);
		//i--;
	//}


}





//=====120======
//This program is to practice printing a string in reverse order.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CODE 0
int main()
{
	char str [] = "I love you";

	for (int i = strlen(str)-1; i >= 0; i--)
	{
		if (str[i] == 'v') exit(CODE);
		printf ("%c", str[i]);

	}
}





//======119======
//This program is to practice fscanf ()
#include <stdio.h>
#include <string.h>

#define LENGTH 10

char * get_fname_mode(char fnm[], char f);

int main()
{
	FILE * f_ptr;
	char a[20];
	//f_ptr = fopen (get_fname_mode('n'), get_fname_mode('m'));
	//printf ("%s\n", get_fname_mode('n'));
	//printf ("%s\n", get_fname_mode('m'));
	char fname[LENGTH];
	char fmode[LENGTH];
	get_fname_mode(fname, 'n');
	get_fname_mode(fmode, 'm');
	printf ("%s_%s\n", fname, fmode);
	//char * fname = "temp1";
	//char * fmode = "r";
	f_ptr = fopen (fname, fmode);
	printf (">>>\n");

	for (int i = 0; i <= 19; i++)
	{
		fscanf (f_ptr, "%c", & a[i]);
	}

	for (int i = 19; i <= 19; i++)
	{
		printf ("%c", a[i]);
	}
	fclose (f_ptr);
}

char * get_fname_mode(char fnm[], char f)
{
	int cont = 1;
	//static char fn [LENGTH];
	//static char fm[3];
	//static char fnm[LENGTH];	//bad idea.

do
{
	switch (f)
	{
		case 'n':
			//char fn [LENGTH]; 	//can not declare variables in switch block.
			printf ("Enter the file name you are interested in: ");
			scanf ("%s", fnm);
			while (getchar() != '\n') {}
			if (strlen(fnm) > 2)
			{
				cont = 0;
			}
			//return fn;
			break;
		case 'm':
			//char fm[3];
			printf ("Ente the mode you want to access the file: ");
			scanf ("%s", fnm);
			while (getchar () != '\n') {}
			if (strlen(fnm) > 0)
			{
				cont = 0;
			}
			//return fm;
			break;
		default:
			printf ("Please enter the word \"name\" or \"mode\": ");
			break;
	}
} while (cont);

	return fnm;
}






//=====118======
//This program is to practice scanf about inputing characters.
#include <stdio.h>

int main()
{
	char ch, cha;
	for (int i = 1; i < 11; i++)
	{
		scanf ("%c %c", &ch, &cha);	//one space between means a lot of spaces in sequence, if "ab"
									//have no space between them
		printf ("%c %c\n", ch, cha);	//It takes one spaces as one character.
		while (getchar() != '\n') {}
	}

}






//====117========
//This program is to practice sprintf() and fscanf()
#include <stdio.h>

#define LENGTH 5
#define LINE 5

int main()
{
	FILE * f_ptr;
	char str [2][LENGTH],
		 ch,
		 * fname = "temp",
		 * mode = "w";
	int a;
	double b;

	//f_ptr = fopen(fname, mode);

	//for (int i = 1; i < LINE; i++)
	//{
		//fprintf (f_ptr, "This is %d %f ;\n", i, i*1.2);
	//}

	//fclose(f_ptr);

	mode = "r";
	f_ptr = fopen(fname, mode);
	for (int i = 1; i < LINE; i++)
	{
		fscanf (f_ptr, "%s%s%d%lf %c\n", str[0], str[1], &a, &b, &ch);
		printf ("%s, %s, %d, %f, %c\n", str[0], str[1], a, b, ch);
	}
	fclose(f_ptr);


}




//=====116======
//This program is to practice files
#include <stdio.h>
#include <string.h>

#define LENGTH 100
#define SIZE 10

void get_fn(char * fn);

int main()
{
	FILE *file_ptr;
	char out[LENGTH],
		 buffer[SIZE],
		 * fn = buffer,
		 * mode = "w";

	get_fn(fn);
	file_ptr = fopen(fn, mode);

	if (file_ptr != NULL)
	{
		sprintf (out, "%-10.4s: %s\n", "File opened successfully!", fn);
	}

	printf ("%s: %d\n", out, (int) file_ptr);

	printf ("close the file: %s\n", fn);
	fclose(file_ptr);
}

void get_fn (char * fn)
{
	printf ("before get the name of the file, length of fn is %d\n", (int) strlen(fn));

	do
	{
		printf ("Enter the filename ([2, %d) characters): ", SIZE);
		scanf ("%9s", fn);
		while (getchar () != '\n') {}
	} while ((int) strlen(fn) < 2);
}







//======115======
//This program is to practice 2-d character array
#include <stdio.h>

int main()
{
	char a[2][3];

	scanf ("%2s", a[0]);	//control how scanf reads data.
	while (getchar () != '\n') {}
	puts(a[0]);
	puts(a[1]);

	//the new values will overwrite the old value.
	gets(a[1]);
	puts(a[0]);
	puts(a[1]);
}





//=====114====
//This program is to practice scanf() %.1s
//NO, it turns out that's not valid.
#include <stdio.h>

int main()
{
	char a[4];

	scanf ("%1s", a);

	printf ("%s\n", a);
}






//=====113======
//This program is to practice changing the elements of a 2-d character array
#include <stdio.h>

int main()
{
	//for some variables which will not changed, we can use static type.
	char arr[2][4] = {"XY", "mn"};

	printf ("%s\n", arr[0]);
	sprintf (arr[0], "%-2s", "x");		//sprintf () overwrites the old value.
	// * arr[0] = "xy";	//This is a 2-d array, you can not assign values like this.
	//arr[0][0] = 'x';
	//arr[0][1] = 'y';

	printf ("%s\n", arr[0]);
}






//======112========
//This program is to test modifying an array of strings.
#include <stdio.h>
#include <string.h>

int main()
{
	char * str[] = {"I love you", "I love you too"};

	printf ("%d\n%d\n", str[0], str[1]);

	str[0] = "ILOVEYOU";
	//When new value is assigned, the storage location is changed.
	printf ("%d\n%d\n", str[0], str[1]);

	printf (">>>>\n");
	char str_arr[2][15] = {"I love you", "I love you too"};
	printf ("%d\n", strlen(str_arr[0]));
	printf ("%d_%d\n", str_arr[0], str_arr[1]);

	//str_arr[0] = "ILOVEYOU";
	printf ("%d\n", strlen(str_arr[0]));
	printf ("%s_%d\n", str_arr[0], str_arr[1]);
}





//=====111=====
//This program is to practice writing more characters than the length of the storage.
#include <stdio.h>

int main()
{
	static char a[2][3];

	for (int i = 0; i < 2; i++)
	{
		scanf ("%2s", a[i]);
		while (getchar() != '\n') {}	//this skipgarbage() function make scanf controllable.
	}

	printf ("%s_%s\n", a[0], a[1]);

}





//======110======
//This program is to practice storing data in 2-d character array
#include <stdio.h>

#define NUM_PROPERTY 4
#define LENGTH 10

int main()
{
	char person[NUM_PROPERTY][LENGTH],
		 str [LENGTH-1];

	for (int i = 0; i < NUM_PROPERTY; i++)
	{
		gets(person[i]);		//scanf() does not control the length of the string, but since the
							//space is reserved for the data, so it will cause problem if overflow
							//thus we should we scanf, but which can not tolerate spaces. So bad.
		//scanf ("%4s", person[i]);	//In scanf(), %4s means maximum characters that can be taken,
									//In sscanf(), %4s means the same thing as that in scanf();
									//In printf (), %.4s means the maximum characters can be
									//printed out, in sprintf (), %.4s means the same thing as that
									//in printf ().
		//while (getchar () != '\n') {}	//this should accompany scanf(), not gets().
	}

	printf (">>>\n");
	sscanf (person[0], "%2s", str);
	printf ("%s\n", str);
	for (int i = 0; i < NUM_PROPERTY; i++)
	{
		printf ("%s\n", person[i]);
		//Concatenate the new values to the old one
		if (i == 0)
		{
			sprintf (str, "%.2s", person[i]);
		}
		else
		{
			sprintf (str, "%s%.2s", str, person[i]);
		}
	}
	printf ("str = %s\n", str);
}





//====109====
//This program is to practice gets() and scanf(), which requires storage space, not just pointers
//which are not initialized.
#include <stdio.h>

#define SIZE 5

int main()
{
	char buff[SIZE], * str = buff;
	//Since the pointer is pointing to buff array which is only capable of holding 5 characters, so
	//when a string pointer is pointed to this array, this string can actually take 4 characters,
	//the last one is reserved for '\0'. Beyond 4 characters, something unexpted will happen.
	//When store the value to a pointer, we have to make sure that the pointer is initialized, and
	//the maximum number of characters the pointer can take must be maintained, otherwise, error.
	for (int i = 1; i < 4; i++)
	{
		//when more than once scanf is used to get data from stdin, then skipgarbage() should be
		//used, otherwise the unused input is feed into the next scanf().
		//The reason why array of strings does not work is that each string is not assigned a space
		//to hold the value. But 2-d character arrays should do.
		scanf ("%s", buff);
		while (getchar() != '\n') {}
		printf ("%s\n", buff);
	}
}





//======108=====
//This program is to practice array of strings initalized to a buffer.
#include <stdio.h>
#include <string.h>

#define LENGTH 5
#define NUM_ELE 3

int main()
{
	char str[NUM_ELE][LENGTH], buff[LENGTH], * ptr[NUM_ELE];
	//get value from a string.
	sscanf ("I love 520", "%s %s %s", str[0], str[1], str[2]);

	for (int i = 0; i < NUM_ELE; i++)
	{
		printf ("%s-", str[i]);
	}
	printf ("\n");
	printf ("length of 123 is: %d\n", (int) strlen("123\0"));
	printf ("1234\0 34\n");	//the first argument in printf is a string which is terminated by '\0'.
							//So the rest of the string is ignored.

	//get value from stdin.
	for (int i = 0; i < NUM_ELE; i++)
	{
		ptr[i] = gets(str[i]);
		printf ("%d_", ptr[i]);
	}
	printf ("\n");
	for (int i = 0; i < NUM_ELE; i++)
	{
		printf ("%s\n", ptr[i]);
	}
}





//======107=====
//This program is to practice ???
#include <stdio.h>
#include <string.h>

#define LENGTH 3

int main()
{
	char str[4][LENGTH];

	for (int i = 0; i <= 3; i++)
	{
		//sprintf (str[i], "i=%d", i);
		scanf ("%2s", str[i]);
		while (getchar() != '\n') {}
	}

	int sum = 0;
	char buff[23], * record_ptr = buff;

	for (int i = 0; i <= 3; i++)
	{
		sum += strlen(str[i]);
		//Here I append the previous record to the current one to build a total string.
		if (i == 0)
		{
			sprintf (record_ptr, "%s_%d, ", str[i], sum);
		}
		else
		{
			sprintf (record_ptr, "%s%s_%d, ", record_ptr, str[i], sum);
		}
	}
	printf ("%s\n", record_ptr);


}






//======106========
//This program is to verify some things about arrays of strings.
#include <stdio.h>
#include <string.h>

#define SIZE 6

int main()
{
	//1. initialize array of strings.
	//char * str [SIZE] = {
		//"Lianshui Zhao",
		//"1990/04/02",
		//"Male"
	//};

	static char * str[SIZE];	//SIZE means there are SIZE elements in this array.
		str[0] = "LZhao ";
		str[1] = "1990";
		str[2] = "xo";
		str[3] = "Male";
	int a;

	for (int i = 0; i < SIZE; i++)
	{
		//a = (str[i] != NULL);	//test whether a string is an empty one or not.
		printf ("element %d: %d\n", i, a = (str[i] != NULL));
		if (a)
		{
			printf ("%s_%d_%d\n", str[i], (int) str[i], (int) strlen(str[i])+1);
		}
	}

}







//=======105=====
//This program is to practice scanf() for strings.
#include <stdio.h>

int main()
{
	char
		(* str) [5] ;	//Here [5] means the total length of the character array is 5, so when
						//writing a string to it, it can actually contain 4 characters, plus '\0'

	for (int i = 1; i <= 3; i++)
	{
		scanf ("%s", str[i]);	//4s means maximum 4 characters when getting the values.

		while (getchar() != '\n'){}
	}

	printf (">>>\n");
	for (int i = 1; i <=3; i++)
	{
		printf ("%s\n", str[i]);
	}

}




//=====104=======
//This program is again to pracitce array of strings.
#include <stdio.h>

#define SIZE 3

int main()
{
	char * str [SIZE] =
		{
			"Lianshui Zhao",
			"1990/04/02",
			"Male"
		};

	for (int i = 0; i < SIZE; i++)
	{
		printf ("%s\n", str[i]);
	}

	printf (">>>>\n");

	char (* out) [SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		sprintf (out[i], "%.1s", str[i]);
		//printf ("%s\n", out[i]);	//works fine here, but not outside of the block when i is a
									//variable.
	}
	//CONFUSED: int a = 0; printf ("%s\n", out[a]); segmentation fault.
	int a = 0;
	printf ("_%s\n", out[a]);
	//printf ("_%s\n", out[1]);
	//printf ("_%s\n", out[2]);
	//for (int i = 0; i < SIZE; i++)
	//{
		//printf ("%s\n", out[i]);
	//}
}



//======103=======
//This program is to practice opening a file
//CONFUSED
#include <stdio.h>

int main()
{
	char a,
		* str = &a;

	scanf ("%s", & str);
	while (getchar() != '\n') {}
	printf ("%s\n", & str);

	str = gets(str);
	puts (str);
}





//======102=====
//This program is to practice string
#include <stdio.h>

int main()
{
	char *str = "lovesd";

	//str[4] = 'x';		//CONFUSED, why this does not work?

	printf ("%s\n", str);
}



//=====101======
//This program is to practice the length of a static string.
#include <stdio.h>
#include <string.h>

char * charac(int i);

int main()
{
	char * ch;
	int j;

	for (int i = 1; i < 4; i++)
	{
		ch = charac(i);
		j = strlen(ch);
		//ch[j] = 'x';
		printf ("%s_%d\n", ch, j);
	}

}

char * charac(int i)
{
	char * str = "I love you";
	int j = strlen(str);
	//str[j] = 'x';
	return str;
}




//======100======
//This program is to practice skipgarb()
#include <stdio.h>
void skipgarb();

int main()
{
	int c;

	for (int i = 1; i <= 3; i++)
	{
		scanf ("%d", &c);
		//scanf ("\n%d\n", &c);
		skipgarb();

	}
}

void skipgarb()
{
	while(getchar() != '\n')
	{}
}






//======99======
//This program is to practice exit();
#include <stdio.h>
#include <stdlib.h> 	//exit()
#include <string.h>		//strlen() and other string-related built-in functions.

void my_func();

int main()
{
	for (int i = 1; i < 4; i++)
	{
		//my_func();
	}

	printf ("%d\n", (int) strlen("HI MY LVOE"));
}

void my_func()
{
	static int i = 1;
	printf ("from my_func: %d\n", i++);
	if (i == 3)
	{
		printf ("Exiting from the whole program\n");
		exit(i);
	}
}





//=======98========
//This program is to practice strlen()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * str = "Hi love\0",
		 * str_2 = "l";

	int len = strlen(str);
	printf ("%d\n", len);



	printf ("%d\n", strcmp("me", "me"));

	printf ("%d_%d\n", strstr(str, str_2), &str[3]);

	exit(0);
	printf ("hi\n");
}





//=======97========
#include <stdio.h>

#define SIZE 3

char * my_func(int i);

int main()
{
	char * line;

	for (int i = 1; i <= SIZE; i++)
	{
		line = my_func(i);
		printf ("%c\n", line[3]);

		if (i == 2)
		{
			int year, month, day;
			sscanf (line, "%d %d %d", & year, & month, & day);
			printf ("%d, %d, %d\n", year, month, day);
		}
	}
}

char * my_func(int i)
{
	char * text[] = {
		"LIANSHUI ZHAO",
		"1990 04 02   ",
		"MALE         "
	};

	//(text[0])[3] = 'X';	//CONFUSED: bus error 10.
	return text[i-1];
}





//======96======
//This program is to practice ??
#include <stdio.h>

int main()
{
	char * a = "8";

	int b;
	//If you want to get the number from a string, you can not use cast operator, which will only
	//return the ASCII number of the first character, but you should use sscanf to extract the
	//number.
	sscanf (a, "%d", &b);

	printf ("%d\n", b);
}





//======95======
//This program is to puts()
//WEIRD.
#include <stdio.h>

#define SIZE 4

int main()
{
	char (* str) [SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		//printf ("Enter string %d: ", i);
		sprintf(str[i], "This is loop %d", i);
		printf ("%i: %s\n", i, str[i]);
	}

	//for (int i = 0; i < SIZE; i++)
	//{
		//puts(str[i]);
	//}
}






//======94======
//This program is to practice puts()
#include <stdio.h>

int main()
{
	static char * str[] = {
		"Lianshui Zhao",
		"Muzi Li",
		"Pan Yun"
	};

	for (int i = 0; i <= 2; i++)
	{
		puts(str[i]);
	}
}





//=====93=====
//This program is to practice sprintf() which writes to a string in a specific format.
#include <stdio.h>

#define SIZE 50
int main()
{
	int a = 3;
	double b = 3.434;
	char c = 'x',
		 * d = "hi my love",
		 * e = "Hi my love",
		 store[SIZE];

	sprintf (store, "%d, %f, %c, %s, %s", a, b, c, d, e);
	printf ("%s\n", store);
}





//======92=====
//This program is to practice ???
#include <stdio.h>

int main()
{
	char * str [2] = {
		"I LOVE YOU",
		"I LOVE YOU TOO"
		};

	printf ("%s_%s\n", str[1], str[0]);

}






//======91=====
//This program is to practice array of strings.
#include <stdio.h>

int main()
{
	char * str[2] =
		{
		"I love you",
		"I love you too"
		};

	printf ("%s\n%s\n", str[0], str[1]);

	int a = 3,
		* b = &a;
	printf ("%d_%d\n", (int) &a, b);

}




//======90======
//This program is to practice sscanf() many strings.
#include <stdio.h>

#define SIZE 10

int main()
{
	static char * str = "LOVE 3";

	int a;
	char b, * fetch;

	fetch = &b;

	sscanf (str, "%*s %d", & a);

	//printf ("%s_%s\n", fetch[0], fetch[1]);

	//printf ("%s\n", fetch);
	printf ("%d\n", a);
}





//=====89======
//This program is to practice gets(), puts(), sscanf(), sprintf()
#include <stdio.h>

int main()
{
	static char * st_1 = "Score: 90 92.3 100";

	char a,
		 * st_store = & a;

	int score_1, score_3;
	double score_2;

	sscanf (st_1, "%s %d %lf %d", st_store, &score_1, &score_2, &score_3);


	printf ("%d_%.1f_%d_%s\n", score_3, score_2, score_1, st_store);

	printf (">>>>\n");
	float score_2_2;

	sscanf (st_1, "%*s %*d %f", &score_2_2);
	printf ("%.1f\n", score_2_2);
	puts(st_store);
}




//=======88=======
//This program is to practice pointer to a function
#include <stdio.h>

int * my_print();

int main()
{
	int (* f_ptr) (), a;

	f_ptr = my_print;	//This assignment fails.
	a = (* f_ptr) ();
	printf ("From my_print: %d\n", * my_print() );
}

int * my_print()
{
	static int a = 30;
	printf ("In my_print: %d\n", (int) (& a));
	return (& a);
}





//=======87========
//This program is to practice static variable in the program.
#include <stdio.h>

int * value();

int main()
{
	int * a_ptr;

	a_ptr = value();

	//Very good demonstration. The non-static variable is destryoed. But the static variable is
	//kept intact.
	for (int i = 1; i < 5; i++)
	{
		printf ("* a_ptr = %d (%d)\n", * a_ptr, (int) a_ptr);
	}

}


int * value()
{
	//Usually it's better to make the address of the variable returned as static type, cause static
	//variable is stored as part of the executable, while non-static local variable can be
	//destroyed. static eliminates the warning.
	static int a = 3;

	return (& a);
}




//======86=======
//This program is to practice retrieving a line from a poem.
#include <stdio.h>

#define TRUE 1
#define FALSE 0

char * poem (int i);
int continue_read();

int main()
{
	int line;
	do
	{
		printf ("Which line would you like to read (<5): ");
		scanf ("\n%d", & line);
		printf ("%s\n", poem(line));

	} while (continue_read());
}

char * poem (int i)
{
	static char * content[] = {
		"line 1: (NAME) LIANSHUI_ZHAO",
		"line 2: (DOB) 04/02/1990",
		"line 3: (AGE) 27",
		"line 4: (SCHOOL) the_Ohio_State_University"
	};

	return content[i-1];
}

int continue_read()
{
	char ch;
	do
	{
		printf ("Are you interested? Do you want to continue to read (y/Y for yes, n/N for no)\n");
		scanf ("\n%c", & ch);

		switch (ch)
		{
			case 'y':
			case 'Y':
				return TRUE;
				break;
			case 'n':
			case 'N':
				return FALSE;
				break;
		}
	} while (ch != 'y' || ch != 'Y' || ch != 'n' || ch != 'N');

	printf ("YOU SHOULD NEVER REACH HERE!!!!\n");
	return 0;
}




//======85=======
//This program is to practice arrays of strings.
#include <stdio.h>

int main()
{
	//Here "\n" actually is effective
	char * t[5] = {
		"My name is Lianshui Zhao.\n",
		"I love you.\n",
		"Would you like to marry me?\n",
		"Yes, I would love you!\n",
		"Happy forever ~~\n"
	};

	for (int i = 0; i < 5; i++)
	{
		printf ("%s", t[i]);

	}
}





//=======84======
//This program is to practice returning the address
#include <stdio.h>

int * my_arr();

int main()
{
	int * arr;

	arr = my_arr();

	printf ("%d\n", * arr);

}


int * my_arr()
{
	//static stores the variable in the program when compiling, so in run time, when it's
	//called many times, then the time needed to create and store it is saved. Thus it
	//imporves efficiency. But we should not make all variables static, otherwise the
	//executable will be huge, and the compilation time will be very long.
	//static int a[] = {1, 289, 3};
	static int a = 3;
	return & a;
}




//======83======
//This program is to practice initializing an array without length in square brackets.
#include <stdio.h>

int main()
{
	//In this case the size of the array is determined by the compiler by counting the
	//number of elements in the braces.
	int a[] = {1, 2, 3};

	printf ("%d\n", a[1]);
}





//======82======
//This program is to practice static variable
//CONFUSED about STATIC type
#include <stdio.h>

void my_print();

int main()
{

	static int a = 2;
	my_print();
	a = 3;

	printf ("%d\n", a);

}

void my_print()
{
	printf ("my_print: %d\n", a);
}






//=======81========
//This program is to practice multi-dimensional arrays
#include <stdio.h>

#define ROW 2
#define COLUMN 3

int main()
{
	//this shows that the inner {} does make a difference where they are put.
	//int a[ROW][COLUMN] = { {1, 2} , {3 , 4}, {5 ,6} };	//complains excess elements.
	int a[ROW][COLUMN] = { {1, 2, 3}, {2, 3, 4} };

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}

	printf (">>>>\n");
	//Rotate the array 90 degrees clockwisely.
	for (int i = 0; i < COLUMN; i++)
	{
		for (int j = ROW-1; j >= 0; j--)
		{
			printf ("%d ", a[j][i]);
		}
		printf ("\n");
	}
}




//=======80=======
//This program is to practice sieve procedure.
#include <stdio.h>

#define SIZE 40
#define DELETED 0

void fillarry(int a[]);
void delete(int a[]);
void delete_mult(int i, int a[]);
void print_prime(int a[]);

int main()
{
	int arr[SIZE];

	fillarry(arr);

	delete(arr);

	print_prime(arr);

}

void print_prime(int a[])
{
	for (int i = 2; i < SIZE; i++)
	{
		if (a[i] != DELETED)
		{
			printf ("%d ", a[i]);
		}
	}

}



void fillarry(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = i;
	}

}

void delete(int a[])
{
	for (int i = 2; i < SIZE; i++)
	{
		if (a[i] == DELETED)
		{
			continue;
		}

		delete_mult(i, a);
	}
}

void delete_mult(int i, int a[])
{
	for (int j = 2; i*j < SIZE; j++)
	{
		a[i*j] = DELETED;
	}
}






//=======79=======
//This program is to practice for loop
#include <stdio.h>

int main()
{
	int i, j=1;
	for (i = 1; i <= 10; j++, i += j)	//In the third expression, execute left-right.
	{
		printf ("%d_%d\n", i, j);
	}
}



//=======78========
//This program is to practice writing beyond the bounds of an array
#include <stdio.h>

int main()
{
	int a[3] = {};

	for (int i = 0; i < 30; i++)
	{
		printf ("%d_", a[i]);
	}

	a [30] = 34;

}




//=======77========
//This program is to practice something, lol
#include <stdio.h>

#define ELE_1 1
#define ELE_2 2
#define ELE_0 0

int main()
{
	int a[3] = {12, 2, 3};
	//const int b = 2;
	//char c[b] = {'x'};	//"variable-sized object may not be initialized." But it's a
						//character.
	//b = 3;
	printf ("%d_%d\n", a[ELE_0], a[2]);
}




//=======76=======
//This program is to practice declaring arrays.
#include <stdio.h>

int main()
{
	//a space between the name and [ is allowed.
	int a [20]={};

	printf ("%d\n", a      [1]);
}




//======75=======
//This program is to practice adding 10 numbers together from the user.
#include <stdio.h>

#define SIZE 4

int main()
{
	double a[SIZE],
		   sum = 0;

	printf ("Enter 10 numbers: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf ("Enter number %d: ", i);
		scanf ("%lf", &a[i]);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf ("%.1f_", a[i]);
		sum += a[i];
	}
	printf ("sum = %f\n", sum);
}





//======74======
//This program is to practice jumping out of the inner most loop
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (j < i) continue;
			printf ("%4d", i*j);
			//if (j == i) break;	//break: jump out of the inner most loop.
		}
		printf ("\n");

	}
}






//========73========
//This program is to practice selection statement.
#include <stdio.h>

int main()
{
	int a = 21,
		b = 3,
		c;
	(a > b) ? printf(" a > b\n") : printf ("a < b\n");
	(a > b) ? (b = a) : (a = b);
	printf ("a = %d, b = %d\n", a, b);
}




//======72========
//This program is to practice for loop with its condition changed.
#include <stdio.h>

int main()
{
	int cond = 4;

	for (int i = 1; i <= cond; i++)
	{
		printf ("i = %d\n", i);
		//if (i == 3)
		//{
			//cond = 5;
			//printf ("cond is changed to %d\n", cond);
		//}

		cond = (i == 3) ?  5: 4;
		printf (">>>%d\n", cond);
	}

}




//=======71========
//This program is to practice if a for loop can omit its condition
#include <stdio.h>

int main()
{
	int i = 1;
	for ( ; ; )
	{
		printf ("i = %d\n", i);
		i++;
		if (i == 4)
			break;
	}
}




//======70=======
//This program is to practice finding the primes from 1 to a value
#include <stdio.h>

#define MAXINT 50
#define TRUE 1
#define FALSE 0

int prime(int i);
int main()
{
	int (* a)();	//a function pointer to prime()
	a = prime;
	for (int i = 1; i <= MAXINT; i++)
	{
		if ((* a)(i))
		{
			printf ("%d_", i);
		}
	}
}


int prime(int i)
{
	for (int j = 2; j <= i/2; j++)
	{
		if (i%j == 0)
		{
			return FALSE;
		}
	}
	return TRUE;
}





//======69=======
//This program is to practice if macros can be chagned in the program
#include <stdio.h>

#define CONST 3.3e-23

int main()
{
	printf ("CONST = %.3g\n", CONST);
	//NO, you can not change it.
}



//=====68======
//This program is to practice for loop
#include <stdio.h>

int main()
{
	char a;

	for (a = 'A'; a <= 'z'; a++)
	{
		printf ("%c ", a);
		//a += 2;
	}
}





//======67=====
//This program is to practice getchar and putchar
#include <stdio.h>

int main()
{
	char ch;

	for (int i = 1; i <= 3; i++)
	{
		ch = getchar();
		putchar (ch);
		printf ("%c_", ch);

	}


}





//======66=======
//This program is to practice printing out the string in double quotes.
#include <stdio.h>

int main()
{
	char ch;

	do
	{
		if ((ch = getchar()) == '"')
		{
			//skip all the characters before encountering " before get out of if-statement.
			while ((ch = getchar()) != '"')
			{
				putchar(ch);

			}

		}
	} while (ch != '\n');

}







//=======65=======
//This program is to practice printing out the string enclosed by ""
#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (ch == '"')
		{
			printf ("\nThe string in the double quotes is: \n");

			while ((ch = getchar()) != '"')
			{
				if (ch == '\n')
				{
					printf ("\n***the string is not complete!\n");
					break;
				}
				putchar(ch);
			}
		}

		if (ch == '\n')
		{
			break;
		}
	}
}




//======64=======
//This program is to practice counting spaces
#include <stdio.h>

int main()
{
	char ch;
	int count = 0;

	printf ("Enter your string: \n");
	while ((ch = getchar()) != '\n')
	{
		if (ch == 'i')
		{
			count ++;
		}
	}

	if (count < 2 && count >= 0)
	{
		printf ("You have entered %d \'i\'.\n", count);
	}
	else if (count >= 2)
	{
		printf ("You have entered %d \'i\'s\n", count);
	}
}





//======63======
//This program is to practice TRUE and FALSE values in macros
#include <stdio.h>

//#define TRUE 2
//#define FALSE 3

int main()
{
	//printf ("%d_%d\n", TRUE, FALSE);
	//so weird, it says TRUE is undeclared.
	if (TRUE)
	{
		printf ("true\n");
	}


}




//=======62========
//This program is to practice finding out the maximum and minimum numbers
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int yes();

int main()
{
	double a, min, max;

	printf ("Enter a number: ");
	scanf ("%lf", &a);
	min = max = a;

	printf ("Do you want to continue (y/Y/N/n): \n");

	while (yes())
	{
		printf ("Enter a number: ");
		scanf ("%lf", &a);

		if (max < a)		max = a;
		if (min > a) 	min = a;
	}

	printf ("max = %f, min = %f\n", max, min);
}

int yes()
{
	char c;
	scanf ("%c", &c);
	switch (c)
	{
		case 'Y':
		case 'y':
			return TRUE;
			break;
		case 'n':
		case 'N':
			return FALSE;
			break;
		default :
			printf ("Neither yes or no, but take it as yes\n");
			return TRUE;
			break;
	}

}





//=======61=========
//This program is to practice getchar() and switch
#include <stdio.h>

int yes();

int main()
{
	if (yes ())
	{
		printf ("You agreed!\n");
	}
	else
	{
		printf ("You did not agree!\n");
	}
}

int yes()
{
	switch (getchar())
	{
		case 'y':
		case 'Y':
			printf ("Good\n");
			return 1;
		default:
			printf ("Bad\n");
			return 0;
	}

}




//=======60=========
//This program is to practice return in main function
#include <stdio.h>

int main()
{
	int a = 3;

	if (a == 3)
	{
		printf ("a==3\n");
		return 3;
	}
	printf ("Outside of the if-statement\n");
}




//======59======
//This program is to practice switch statement.
#include <stdio.h>

int main()
{
	char i = (char) 88;

	switch (i)
	{
		case 'Y'+1:
			printf ("%c\n", (char) 88);
			break;
		default:
			printf ("No\n");
			break;
	}

	printf (">>>>>\n");
	char a = 'x';

	switch (a)
	{
		case 'x':
			printf ("%c\n", a);
			break;
		case 'y':
			printf ("%c\n", 'y');
			break;
		default :
			printf ("default\n");
			break;
	}
}





//=========58========
//This program is to practice if-statement.
#include <stdio.h>

#define NUM_ELE 3
int main()
{
	int a[NUM_ELE];

	for (int i = 0; i <= NUM_ELE-1; i++)
	{
		printf ("Enter the %dth element: ", i);
		scanf ("%d", &a[i]);

		if (a[i] > 0 )
		{
			printf ("a[%d] is positive\n", i);
		}
		else if (a[i] == 0)
		{
			printf ("a[%d] is 0\n", i);
		}
		else if (a[i] < 0)
		{
			printf ("a[%d] is negative\n", i);
		}
	}
}




//======57=======
//This program is to practice subtraction
#include <stdio.h>
#include <math.h>	//fabs(), which returns a double-type number.

int main()
{
	int a = 2, b = -3;

	//in bc(basic calculator), if a negative value is subtracted from another number, error.
	//Just because ther are two signs, - and -. But in c or other programming language, it's
	//not a problem.
	printf ("%d\n", a-b);
	printf ("%f\n", fabs(-2));
}




//=====56======
//This program is to practice expression
#include <stdio.h>

int main()
{

	float x, y = 2.3;
	x = y * 2.5;

	printf ("%f\n", x);
	int a = (1 == 1);
	printf ("%d\n", a);


}





//=======55========
//This program is to practice 2/3, 2.0/3
#include <stdio.h>

int main()
{
	//Even though a is double, 2/3 still produce 0, but 2.0/3 will get 0.66667.
	double a = 2./3;
	printf ("%f\n", a);
}




//======54=========
//This program is to practice gets and puts.
#include <stdio.h>

int main()
{
	putchar(getchar());
	char b, * a = &b;

	a = gets(a);
	printf (">>>\n");
	puts(a);
}




//=======53========
//This program is to practice getchar and putchar
#include <stdio.h>

int main()
{
	char a;

	a = getchar();
	printf (">>>%c\n", a);
	while (a != 'x')
	{
		a = getchar();
		//b=putchar(a);
		printf (">>>%c\n", putchar(a));
	}

}




//======52=======
//This program is to practice %*d (skip)
//This may be useful when some of the values in the file are not needed, so we don't need
//to create variables to hold them when reading.
#include <stdio.h>

int main()
{
	int a=3, b, c;
	char f, * e = &f;

	scanf ("%[ab]", e);
	printf ("%s\n", e);

	scanf ("%*d, %2d, %d", &b, &c);

	printf ("%d_%d_%d\n", a, b, c);

}




//========51======
//This program is to practice scanf
#include <stdio.h>

int main()
{
	char a;
	//scanf does not care about spaces, as long as the other characters are matched.
	scanf ("You have to match this: %c", &a);
	printf ("%c\n", a);
}





//======50========
//This program is to practice scanf
#include <stdio.h>

int main()
{
	char a, b;
	int c;

	scanf ("%c, %c", &a, &b);
	printf ("%c_%c\n", a, b);

	scanf ("%c, %c, %d", &a, &b, &c);
	printf ("%c_%c_%d\n", a, b, c);
}






//======49=======
//This program is to practice scanf
#include <stdio.h>

int main()
{
	int e, f;
	scanf ("%d %d", &e, &f);
	printf ("%d_%d\n", e, f);

	printf (">>>\n");
	float c;
	char d;
	//so dangerous if more inputs are provided, which will go to the next scanf.
	scanf ("%f%c", &c, &d);
	printf ("%f_%c\n", c, d);

	printf (">>>\n");
	int a;
	char b;

	scanf ("%d %c", &a, &b);

	printf ("%d_%c\n", a, b);
}





//=======48=========
//This program is to practice scanf
# include <stdio.h>

int main()
{
	char f, * e = &f;
	scanf ("%s", e);
	printf ("%s\n", e);

	printf (">>>\n");
	long int d;
	scanf ("%ld", &d);
	printf ("%ld\n", d);

	printf (">>>>\n");
	int a,
		* b = &a;

	scanf ("%d", b);
	printf ("%d\n", a);

	printf (">>>>\n");
	double c;
	scanf ("%le", &c);
	printf ("%f\n", c);


}




//======47========
//This program is to practice printing multiplication table
#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (i == j)
			{
				printf ("%5d", i*j);
			}
			else
			{
				printf ("     ");
			}
		}
		printf ("\n");
	}
}




//=======46========
//This program is to practice %4.2s in printf
# include <stdio.h>

int main()
{
	char * a = "i!";

	printf ("%.4s\n", a);

	int b = 234234;

	printf ("%12.10d\n", b);
}




//========45=========
//This program is to practice %g %f %e
#include <stdio.h>

int main()
{
	double a = 22;

	printf ("%G_%f_%E\n", a, a, a);
	printf ("%g_%f_%e\n", a, a, a);
}





//=======44=======
//This program is to practice scanf()
#include <stdio.h>

int main()
{
	int a;

	float c;
	char d, *f = "xo";

	scanf("%d %f %c", &a, &c, &d);
	printf ("%d %.2f %c %s", a, c, d, f);
}





//=======43========
//This program is to practice changing pointers to one type to another type.
#include <stdio.h>

int main()
{
	int a = 2,
		* _ptr = &a;

	double b = 2.34;

	printf ("*_ptr = %d\n", * _ptr);
	//The compiler complains, not sure if it's still a valid c-feature.
	_ptr = (int *) b;

	printf ("*_ptr = %f\n", * _ptr);



}





//======42=======
//This program is to practice pointers to functions
# include <stdio.h>

#define SQ(x) x*x
//#define QUOTES "In this case: %s is called, result is %d\n"

int add_a_b(int a, int b);

int subt_a_b(int a, int b);

int mult_a_b(int a, int b);

int main()
{
	int a = 2,
		b = 3,
		(* f_ptr) ();
	char * name,
		 * QUOTES = "XXIn this case: %s is called, result is %d\n";

	for (int i = 1; i <= 3; i++)
	{
		printf (">>>> %d <<<<\n", i);
		switch (SQ(i))
		{
			case 1:
				f_ptr = add_a_b;
				name = "add_a_b";
				printf (QUOTES, name, (* f_ptr)(a, b));
				break;
			case 4:
				f_ptr = subt_a_b;
				name = "subt_a_b";
				printf (QUOTES, name, (* f_ptr)(a, b));
				break;
			case 9:
				f_ptr = mult_a_b;
				name = "mult_a_b";
				printf (QUOTES, name, (* f_ptr)(a, b));
				break;
			default:
				printf ("Can find the righ function\n");
				break;
		}
	}
}

int add_a_b (int a, int b)
{
	return (a+b);
}

int subt_a_b (int a, int b)
{
	return (a-b);
}

int mult_a_b (int a, int b)
{
	return (a*b);
}





//========41========
//This program is to practice pointers to functions
#include <stdio.h>

int my_print(int a, int b);
int my_print_2(int a, int b);
double my_print_3(int a, int b);
int main()
{
	int (* f_ptr) (), a, b = 4;

	f_ptr = my_print;

	a = (* f_ptr) (b, b);
	printf ("a = %d\n", a);

	f_ptr = my_print_2;

	a = (* f_ptr) (b, b);
	printf ("a = %d\n", a);

	double (* fd_ptr) (), d;
	fd_ptr = my_print_3;

	d = (* fd_ptr) (b, b);
	printf ("d = %f\n", d);
}

int my_print(int a, int b)
{
	printf ("This is my_print\n");
	return (a*b);
}

int my_print_2(int a, int b)
{
	printf ("This is my_print_2\n");
	return (a+b);
}


double my_print_3(int a, int b)
{
	printf ("This is my_print_2\n");
	return (a+b+2.3);
}





//=======40========
//This program is to practice passing a function to another function by pointer (redirection)
#include <stdio.h>

int value();

void my_print(int (* func) ());

int main()
{
	//make sure no other variable is called value.
	my_print(value);

}

int value()
{
	return 5;
}

void my_print(int (* func) ())
{
	printf ("in my_print: %d\n", (* func)());
}





//=======39========
//This program is to practice swapping numbers using pointers
#include <stdio.h>

void swap(int * a, int * b);

int main()
{
	int a = 3,
		b = 4;
	swap (&a, &b);

	//You can not change the physical addresses of the two locations, only the values stored
	//in them.
	printf ("a = %d, b = %d\n", a, b);
}

//In this function, a, b are addresses, and are local variables. So even though these two
//variables are swapped, they do not change the physical address, thus in main a and b are
//not swapped.
void swap(int * a, int * b)
{
	int d = 0,
		* c = &d;
	* c = * a;
	* a = * b;
	* b = * c;

	printf ("%d_%d\n", *a, *b);
}




//========38========
//This program is to practice scanf() function
#include <stdio.h>

int main()
{

	int b = 2,
		* a = &b;

	scanf("%d", a);

	printf ("a = %d, b = %d\n", *a, b);
}





//=======37=========
//This program is to practice the address of an array of type int.
#include <stdio.h>

int main()
{
	double a[3] = {1., 3.};

	printf("%d_%d_%d_%d\n", (int) a, (int) &a[0], (int) &a[1], (int) &a[2]);

	char b[3] = {'x', '6'};

	printf("%d_%d_%d_%d\n", (int) b, (int) &b[0], (int) &b[1], (int) &b[2]);



}





//=========36=======
//This program is to practice some other macros.
#include <stdio.h>

#define FIRST 3
#define SECOND 2

#if (FIRST == 1)
#undef FIRST
#define FIRST "ONE"
#else
#ifdef SECOND
#undef SECOND
#define SECOND "SECOND"
#endif
#ifndef THIRD
#define THIRD FIRST+2
#endif
#endif

int main()
{
	printf ("%d_%s\n", FIRST, SECOND);
	printf ("%d\n", THIRD);


}





//========35========
//This program is to practice macros
#include <stdio.h>

#define EXPRESSION 1+2+3+4	//look with and without double-quotes are very different.
							//with quotes, it is a string
							//without quotes, it is an expression
int main()
{
	printf ("%d\n", EXPRESSION);
}




//======34=======
//This program is to practice selection statement
#include <stdio.h>

#define ABS(x) (x < 0)? -x : x
#define SQR(x) x*x

int return_value();

int main()
{
	int a = -3;

	printf ("ABS(%d) = %d\n", a, ABS(a));

	a = 2;

	printf ("ABS(%d) = %d\n", a, ABS(a));
	double b = 2.3;
	printf ("SQR(%.2f) = %.2f\n", b, SQR(b));

	printf (">>>\n%d\n<<<\n", ABS(return_value()));
}

int return_value()
{
	return 2;
}




//=======33=========
//This program is to practice EOF and NULL macros.
//It turns out EOF is -1 and NULL (null).
#include <stdio.h>

int main()
{

	printf ("%s_%i\n", NULL, EOF);

}



//=========32=========
//This program is to practice arrays of characters.
#include <stdio.h>

void my_print(char a[]);

int main()
{
	char a[] = {'i', 'l', 'o', 'v', 'e'};

	printf ("array [2] = %c\n", a[2]);
	my_print(a);

	//string literals
	char * b = "ilove";
	printf ("string literals: %c\n", b[2]);
}

void my_print(char a[])
{
	printf ("In my_print: a[2] = %c\n", a[2]);
}




//======31======
//This program is to practice macros
#include <stdio.h>


#define PI "3.141592653"
#define PI_NUM 3.14159265323


void my_print(char * a);

int main()
{
	printf ("%s\n", PI);


	//Now I know that string is an array of char type.
	char *a;
	a = "hi";

	printf ("a[1]=\'%c\'\n", a[1]);
	printf ("a[0]=\'%c\'\n", a[0]);

	printf ("a = \"%s\"\n", a);
	printf (">>>\n");
	my_print(a);
}

void my_print(char * a)
{
	printf ("%s %23.12f\n", "my_print: ", PI_NUM);
	printf ("a[1] = %c\n", a[1]);
}





//======30========
//This program is to practice a special case, where two variable of the same name are allowed
//in the same space, then the more local one wins.
#include <stdio.h>

int main()
{
	int a = 1,

		c = 3;

	if ( a == 1)
	{
		//here c is declared in the if-statement block, so it only exists till }, and it's
		//not the same c as that declared at the beginning of the main () function.
		int c = 4;
		printf ("Inside the if-statement, c = %d\n", c);
	}
	printf ("Outside of the if-statement, c = %d\n", c);
}




//=======29======
//This program is to practice whether it's possible to define a function inside another one.
//No you can not define another function inside one function, so be sure that it's defined
//outside of the functions, i.e. functions are global.
#include <stdio.h>

int main()
{
	void my_print();
	printf (">>>>\n");
	my_print();



}

void my_print()
	{
		printf ("<<<<\n");

	}



//======28========
//This program is to practice the scope of a variable.
#include <stdio.h>

int main()
{
	int j =2;
	//here i is only existing in the for loop block, beyond which it's not existing.
	for (int i = 2; i <= 4; i++, j++)
	{
		printf ("i = %d\n", i);
	}
	printf ("j = %d\n", j);
}



//======27=======
//This program is to practice static using apple's gcc compiler.
#include <stdio.h>

static int a=3;	//still looks like static does not have its functionality any more.

int main()
{
	printf ("a = %d\n", a);
	a = 4;
	printf ("a = %d\n", a);
}





//======26=======
//This program is to practice initializing arrays.
#include <stdio.h>

int main()
{
	int a[2] = {2, 3};

	printf ("a = {%d, %d}\n", a[0], a[1]);

	printf ("%d\n", a);
}




//=======25=======
//This program is to practice passing array to a function
#include <stdio.h>

void change_array(int a[]);

int main()
{
	int arr[3];
	arr[1] = 1;
	arr[2] = 4;
	arr[3] = 5;

	change_array(arr);

	printf ("arr[1] = %d\n", arr[1]);

}

void change_array(int a[])
{
	a [1] = 23;
}





//=======24=======
//This program is to practice pointers in functions
#include <stdio.h>

void rescale(double * length, double * height, double scale);

int main()
{
	double length = 23.23,
		   height = 2.34,
		   scale = 100;
	//Here we apply two ways of passing arguments to functions in one go, by value and by
	//reference.
	rescale(& length, &height, scale);

	printf ("After rescaling, length = %.0f, height = %.0f\n", length, height);
}

void rescale(double * length, double * height, double scale)
{
	* length = scale * (* length);
	* height = (* height) * scale;
}





//=======23=======
//This program is to practice pointers
#include <stdio.h>

int main()
{
	int a =3,
		*b =&a;
	printf ("%d_%d\n", b, &a);

	printf ("%d+%d=%d\n", *b, a, *b+a);


}





//=========22==========
//This program is to practice passing by reference
#include <stdio.h>

void switch_a_b(int * a, int * b);

int main()
{
	int i = 2,
		j = 3;

	switch_a_b(&i, &j);

	printf ("i = %d, j = %d\n", i, j);
}


void switch_a_b(int * a, int * b)
{
	int c;
	//since a contains the address of i, so deferencing of *a means the variable i. Thus *b
	//means the variable j.
	c = * a;
	* a = * b;
	* b = c;
}




//=======21========
//This program is to practice passing one function value to another function.
#include <stdio.h>

char nutoch(int a);

int chtonu(char b);

int main ()
{
	int a = 88;

	printf ("a = %d\n", chtonu(nutoch(a)));

	if (a == chtonu(nutoch(a)))
	{
		printf ("Yes, it matches with the initial value of a\n");
	}
}

char nutoch(int a)
{
	return ((char) a);
}

int chtonu(char b)
{
	return ((int) b);
}





//=======20=========
//This program is to practice overloading of functions
#include <stdio.h>

void add (int a, int b);

int main()
{
	int a = 2,
		b = 4;
	add(a, b);

	//it turns out c does not support overloading of functions.

}

void add (int a, int b)
{
	printf ("%d + %d = %d\n", a, b, a+b);


}




//======19========
//This program is to practice passing arguments
#include <stdio.h>

void add(int a, int b);

int main()
{
	int i = 2;
		//j = 3;
	//here the compiler does not warn about this mismatch of types.
	add(i, 3.4);
}

void add(int a, int b)
{
	printf ("%d + %d = %d\n", a, b, a+b);

}






//======18=======
//This program is to practice extern keyword
#include <stdio.h>

extern int i;	//looks like extern is NOT that necessary, cause it also works without it.

int main()
{
	printf ("Extern i = %d\n", i);
}



//======17========
//This program is to practice static keyword
#include <stdio.h>

//void my_print();
static int a=9;		//So weird that static does not protect the variable from being modified.

int main()
{
	//static int a =3;
	//functions can be declared outside
	void my_print();
	void call_my_print();
	call_my_print();
	printf ("in main: a = %d\n", a);
	a= 4;
	my_print();
	printf ("in main: a = %d\n", a);
}

void my_print()
{
	printf ("in my_print: a = %d\n", a);
	a =43;
}

void call_my_print()
{
	my_print();
}



//=======16======
//This script is to practice cast operator, ()
#include <stdio.h>

int main()
{
	int a = 97;
	//it does not work if char (a) is applied.
	char ach = (char) a;

	printf ("The character of the ASCII code %d is \"%c\"\n", a, ach);

	double c = 100.23;
	a = (int) c;
	double d = (double) a;
	char cch = (char) c;

	printf ("a = %d, cch = %c, d = %f\n", a, cch, d);

	printf (">>>%.9f\n", 2./3);
}



//=======15=======
//This program is to practice char.
#include <stdio.h>

int main()
{
	char a = 'a';
	int b = 98;

	printf ("%d_%c, %c\n", a, b, 78);

}



//======14======
//This program is to practice scientific form of the float/doulbe numbers
#include <stdio.h>

int main()
{
	float a = 3.4,
		  b = 2.34E-3,
		  c = 9.32e-2;


	double ad = 3.423234524,
		   bd = 2.34E-3,
		   cd = 9.32e-2;

	printf ("%f, %f, %f\n", a, b, c);
	printf ("%E, %.3e, %f\n", ad, bd*1E+3, cd);


}




//=====13========
//This program is to practice \r
#include <stdio.h>

int main()
{
	int i, j;

	for (i = 14, j = 2; i >= 12 && j <= 10; i--, j += 2)
	{
		//printf("%d\r", i);
		printf ("%d\n", j);
	}

}




//======12=======
//This program is to practice characters and strings.
# include <stdio.h>

int main ()
{
	char a = '9',
		*b = "\' \', \" \"I \\ \t\vlove you!\r";

	printf ("a= %c, b = %s\n", a, b);

	printf ("BEEP: \7\n");

	printf ("Hi, my love \r ");
	printf ("Hibhhhj over write\n");

}




//======11=======
//This program is to practice declaration
#include <stdio.h>

int main()
{
	//The compiler looks for ; for the termination of the statement.
	int a = 3,
		b = 4,
		c = 23,
		d = 98;
	char * e = "hi";
	//Here \ means the continuation of the line.
	printf ("a = %d, b = %d\nc = %d, d = %d\n",\
			 a, b, c, d);

	printf ("%s\n", e);
}




//========10=======
//This program is to practice variable declaration
#include <stdio.h>

void my_print ();

//int a = 3;	//this has to be before main()? NO, be declared before it's used for the
				//first time.

int main()
{
	//printf ("a = %d\n", a);
	//a = 49;
	//printf ("a = %d\n", a);

	my_print();

	printf (">>>\n");
	int b = 4;

	printf ("b = %d\n", b);

}
int a = 3;	//Since a is used for the first time in my_print() function, so it has to be
				//declared before the definition of that function.
void my_print()
{
	printf ("In my_print, a = %d\n", a);

}




//======9=======
//This program is to practice 8a in which a is a variable.
#include <stdio.h>

int main ()
{
	int a = 3;
	//It turns out * has to be specified, otherwise the compiler expects ) before a.
	printf ("3a = %d\n", 3 * a);


}





//=======8=======
//This program is to practice exit function
#include <stdio.h>

int main()
{
	printf ("Before exit \n");
	//Can find the exit function in stdio, but which header file should it be?
	exit (2);
}



//=======7=========
//This program is to practice return function
#include <stdio.h>

#define VALUE_GLOBAL 2
int compare(int a, int b);

int main()
{
	int a, b;
	a = 20;
	b = 22;
	printf ("%d\n", compare(a, b));
}


int compare(int a, int b)
{
	while (a > b)
	{
		a--;
		if (a - b == 2)
		{
			return a+b;
		}
	}
	printf ("out of while loop: ");
	return (a+b);
}





//=======6========
//This is practice function
#include <stdio.h>

#define VALUE_ADD 3

int add_value(int a);

int main()
{
	int a, c=0;
	a = 4;


	add_value(a);
	printf ("c = %d%%\n", c);

}

int add_value(int a)
{
	int b;
	b = a + VALUE_ADD;
	printf ("%d is added to %d: %d\n", a, VALUE_ADD, b);
	return b;

}




//========5=======
//This program is to practice do-while statement
#include <stdio.h>

#define VALUE 20

int main()
{
	int a = 0;

	do
	{
		printf ("a = %d, VALUE = %d\n", a, VALUE);
		a ++;
	} while (a < 4);
}



//=======4=======
//This is to practice define
#include <stdio.h>

#define VALUE 3.141592653
void my_func(void);	//without this the compiler will complain that implicit declaration.

//return type of main is not void, but int.
int main()
{
	printf ("In main: VALUE = %.9f\n", VALUE);
	my_func();
}

void my_func(void)
{
	printf ("In my_func: VALUE = %.9f\n", VALUE);
}



//======3========
#include <stdio.h>
#include <math.h>

int main()
{
	printf ("Wow big deal\n");
	int a = 22;
	printf ("%d\n", a);
	printf ("The 3 Wise Men\nThe %d Wise Men", 3);

	double y = sin(3.141592653);
	//again printf has to be acompanied by ()
	printf ("\v(y = %.4E)\n", y);
}




//========2==========

#include <stdio.h>

int main () // Poem //
{
	printf ("Astronomy is %dderful \n",1);
	printf ("And interesting %d \n",2);
	printf ("The ear%d volves around the sun \n",3);
	printf ("And makes a year %d you \n",4);
	printf ("The moon affects the sur %d heard \n",5);
	printf ("By law of phy%d great \n",6);
	printf ("It %d when the the stars so bright \n",7);
	printf ("Do nightly scintill%d \n",8);
	printf ("If watchful providence be%d \n",9);
	printf ("With good intentions fraught \n");
	printf ("Should not keep up her watch divine \n");
	printf ("We soon should come to %d \n",0);
}



//==========1=============
# include <stdio.h>

int main()
{
	printf ("Hi my love!\n");

}
*/
