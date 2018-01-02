//This program is to calculate dB/dT data and store them in a file, them find the maximum 
//value and normalize all the data, output the normalized one
//We need to define a function that returns the value of dBdT at one energy

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define LEN_NAME 10

double dBdT(double E);	//calculate dB/dT for each energy
double max_data(char * file_name); 	//Find the maximum value in the file
void norm_data(char * file_name, char * file_name_norm, double max); 	//Normalize the data

int main()
{	
	char file_name [LEN_NAME] = "data",
		 file_name_norm [LEN_NAME];
	double max;
	
	FILE * f_ptr = fopen(file_name, "w");
	
	for (double E = 0.0001; E <=2.5; E += 0.001)	
	{
		fprintf (f_ptr, "%f     %E\n", E, dBdT(E));
	}
	
	fclose(f_ptr);
	
	//find the maximum data point
	max = max_data(file_name);
	printf ("max = %E\n", max);
	
	//normalize the data by dividing each data point by max
	sprintf (file_name_norm, "%s_norm", file_name);
	norm_data(file_name, file_name_norm, max);
	
}

void norm_data(char * file_name, char * file_name_norm, double max)
{
	FILE * f_ptr = fopen(file_name, "r"),
		 * f_norm_ptr = fopen (file_name_norm, "w");
	double E, dBdT;
	
	while (! feof(f_ptr))
	{
		fscanf(f_ptr, "%lf %lf\n", & E, & dBdT);
		fprintf(f_norm_ptr, "%f     %E\n", E, dBdT/max);	
	}
	
	fclose(f_ptr);
	fclose(f_norm_ptr);
	
	
}

double dBdT(double E)
{
	double T = 2.11 * pow(10, 6),
		   k = 1.38064852 * pow(10, -23);
	E = E * 1.60218 * pow(10, -16);	//E is in kev unit
	
	return pow(E, 4) * exp(E/(k*T))/pow(exp(E/(k*T))-1, 2);	
}

double max_data(char * file_name)
{
	FILE * f_ptr = fopen(file_name, "r");
	double column_1, column_2, max;
int i = 1,
	i_max;
	
	fscanf (f_ptr, "%lf%lf\n", &column_1, &column_2);
	max = column_2;
	
	while (! feof(f_ptr))
	{	
		i++;
		//fprintf (stdout, ">>%d: ", i++);
		fscanf (f_ptr, "%lf%lf\n", &column_1, &column_2);	//here we can skip the first
															//column by %*lf.
		if (column_2 > max)
		{
			i_max = i;
			max = column_2;
		}
	}
	fclose(f_ptr);
	fprintf (stdout, "i_max = %d, ", i_max);
	return max;
}





