//This c program is to add all the partial transitions together to obtain the final data
//in this region.

#include <stdio.h>

int main(int argc, char * argv[])
{
	char * file_name = argv[1],
		 * out_file = argv[4];

	double data[20], temp;
	
	int iteration, num_points;
	sscanf(argv[2], "%d", & iteration);
	sscanf(argv[3], "%d", & num_points);
	
	FILE * f_ptr = fopen (file_name, "r");
	
	for (int i = 1; i <= iteration; i++)
	{
		for (int j = 0; j <= num_points-1; j++)
		{
			if (i == 1)
			{
				fscanf (f_ptr, "%*lf %*lf %lf %*lf\n", & data[j]);
			}
			else 
			{
				fscanf (f_ptr, "%*lf %*lf %lf %*lf\n", & temp);
				data[j] += temp;
			}
		}
	}
	
	fclose(f_ptr);
	
	//Now all the data in this region are ready, so we need to append them to the correct
	//file.
	f_ptr = fopen (out_file, "a"); 
	
	for (int i = 0; i < num_points; i++)
	{
		fprintf (f_ptr, "%.3E\n", data[i]);
	}
	
	fclose(f_ptr);
} 
