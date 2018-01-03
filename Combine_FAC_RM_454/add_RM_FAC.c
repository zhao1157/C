//This c program is to add the RM and FAC data together into RM_FAC_${i}

#include <stdio.h>

int main(int argc, char * argv[])
{
	char * RM_file = "../../fe17_454_tail/outfile/combine_sultana_fac_5/fe17.px.60cc.fac",
		 * FAC_dir = "../add_levels_5/bound_topup/",
		 * lines_dir = "../generate_mesh_2/FAC_mesh_dir/",
		 * out_file = argv[2];
	char FAC_file[40], lines_file[40], temp[90];
	
	double data [4];
	int index, i, flag, line;
	sscanf (argv[1], "%d", & index);
	
	sprintf (FAC_file, "%s%d", FAC_dir, index);
	sprintf (lines_file, "%s%d", lines_dir, index);
	
	FILE * f_ptr_RM = fopen (RM_file, "r"),
		 * f_ptr_FAC = fopen (FAC_file, "r"),
		 * f_ptr_lines = fopen(lines_file, "r"),
		 * f_ptr_out = fopen (out_file, "a");
		 
	//Move the control in RM to the position just before the bound level i data starts.
	for (i = 1; i <= 24767*(index-1); i++)
	{
		fgets (temp, 90, f_ptr_RM);
	}
	
	fscanf (f_ptr_FAC, "%*s %d\n", & flag);
	
	if (flag == 1)
	{
		//Copy the 16 lines into the output file.
		for (i = 1; i <= 16; i++)
		{
			fgets (temp, 90, f_ptr_RM);
			fprintf (f_ptr_out, "%s", temp);
		}
		
		//read the line where the topup starts
		fscanf (f_ptr_lines, "%d\n", &line);
		
		//Continue before topup shows
		for (i = 1; i <= line-1; i++)
		{
			fscanf (f_ptr_RM, "%le %le %le %*le\n", & data[0], & data[1], & data[2]);
			fprintf (f_ptr_out, "  %.9E  %.9E    %.3E  %.3E\n", data[0], data[1], data[2],\
												data[2]);	
		}
		
		//Now is the time to add FAC to RM.
		for (i = line; i <= 24751; i++)
		{
			fscanf (f_ptr_RM, "%le %le %le %*le\n", & data[0], & data[1], & data[2]);
			fscanf (f_ptr_FAC, "%le\n", & data[3]);
			//The unit of PI cross section from FAC is in unit of 10^-20 cm^2, while RM in
			//unit of Mb which is 10^-18 cm^2, thus multiply data[3] by 0.01. 
			fprintf (f_ptr_out, "  %.9E  %.9E    %.3E  %.3E\n", data[0], data[1], data[2],\
												data[2]+data[3]*0.01);	
		}	
	}
	
	else if (flag == 0)
	{
		for (i = 1; i <= 16; i++)
		{
			fgets (temp, 90, f_ptr_RM);
			fprintf (f_ptr_out, "%s", temp);
		}
		
		for (i = 1; i <= 24751; i++)
		{
			fscanf (f_ptr_RM, "%le %le %le %*le\n", & data[0], & data[1], & data[2]);
			fprintf (f_ptr_out, "  %.9E  %.9E    %.3E  %.3E\n", data[0], data[1], data[2],\
												data[2]);	
		}	
	}
	
	fclose (f_ptr_FAC);
	fclose (f_ptr_RM);
	fclose (f_ptr_lines);
	fclose (f_ptr_out);
}


