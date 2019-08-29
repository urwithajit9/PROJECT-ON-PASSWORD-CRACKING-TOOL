#!/usr/bin/python

import os
import hashlib
#print("hello")
fin=open("/root/Documents/Indian_name_girl.txt","r");
fout=open("hash256_conversion.txt","a");
lines=fin.readlines()

for line in lines:
	m = hashlib.sha256()
	line=line.strip();
	print(line)
	y=input()
	m.update(line);
	fout.write(m.hexdigest());
	print(m.hexdigest())
	fout.write("\n");
				
fin.close();
fout.close();
