#!/bin/bash

if [ "$#" = 2 ]
	then
	if   [ "$1" = "excalibur" ]
		then
			echo "Running Hierarchical Upscaling Code on excalibur.arl.hpc.mil"
			cd ./source/excalibur/

			if [ -f "$2" ]
			then
				cp ./"$2" ../../
				cd ../../

				qsub "$2"
				rm "$2"

			else
				echo "$2 is not a file"
			fi

	elif [ "$1" = "topaz" ]
		then
			echo "Running Hierarchical Upscaling Code on topaz.erdc.hpc.mil"
			cd ./source/topaz/

			if [ -f "$2" ]
			then
				cp ./"$2" ../../
				cd ../../
				
				qsub "$2"
				rm "$2"
				
			else
				echo "$2 is not a file"
			fi

	else
		echo "Need to specify recognized machine: excalibur or topaz"
	fi
else
	echo "Incorrect number of arguments"
fi
