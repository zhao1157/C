#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
	char * rm_mesh_dir = "RM_mesh_dir/",
		 * ave_thresh_dir = "../average_threshold_1/ave_threshold/",
		 * fac_mesh_dir = "FAC_mesh_dir/",
		 rm_mesh_file_name [20],
		 fac_mesh_file_name [20],
		 ave_thresh_file_name [45],
		 ave_thresh_energy [20];
		 
	double ave_energy, photon_energy;
	int line_num;
	
	sprintf (rm_mesh_file_name, "%s%s", rm_mesh_dir, argv[1]);
	sprintf	(ave_thresh_file_name, "%s%s", ave_thresh_dir, argv[1]);
	sprintf (fac_mesh_file_name, "%s%s", fac_mesh_dir, argv[1]);
	
	FILE * f_rm_ptr = fopen(rm_mesh_file_name, "r"),
		 * f_ave_ptr = fopen(ave_thresh_file_name, "r"),
		 * f_fac_ptr = fopen(fac_mesh_file_name, "w");
		 
	fscanf (f_ave_ptr, "%s", ave_thresh_energy);
	fclose(f_ave_ptr);
	
	//Deal with the case where the ave_thresh_energy is "NONE"
	if (strcmp(ave_thresh_energy, "NONE") == 0)
	{
		fprintf (f_fac_ptr, "0\n");
		exit(-1);	//This is an easy way to avoid using else branch.
	}
	
	//Deal with the case where the ave_thresh_energy is some value.
	sscanf (ave_thresh_energy, "%lf", & ave_energy);
	
	line_num = 1;
	fscanf (f_rm_ptr, "%lf", & photon_energy);
	
	while (photon_energy * 13.605693 <= ave_energy)
	{
		line_num ++;
		fscanf (f_rm_ptr, "%lf", & photon_energy);
	}
	
	//output the first instance where the incident photon energy is larger than the 
	//energy threshold.
	fprintf (f_fac_ptr, "%d\n%f\n", line_num, photon_energy*13.605693 - ave_energy);
	line_num ++;
	for (;line_num <= 24751; line_num++)
	{
		fscanf (f_rm_ptr, "%lf", & photon_energy);
		fprintf (f_fac_ptr, "%f\n", photon_energy*13.605693 - ave_energy);
	}	
	
	fclose(f_rm_ptr);
	fclose(f_fac_ptr);
	
	
}
