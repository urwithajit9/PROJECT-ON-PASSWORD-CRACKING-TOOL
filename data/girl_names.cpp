#!/usr/bin/python
#remove meaning of each names
import os
#print("hello")
fin=open("/root/girl_names.txt","r");
fout=open("Indian_name_girl.txt","a");
lines=fin.readlines()
for line in lines:
	lines=line.strip();
	split_line=lines.split("=")
	line1=split_line[0]
	print(line1);	
	fout.write(line1);
	fout.write("\n");			
fin.close();
fout.close();


