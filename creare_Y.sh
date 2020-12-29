#!/bin/bash
total_linii=106205;
while nume_fisier= read -r line
do
   if [ -n "$line" ]; then   
      echo "$line";
      numar_linii_V=$(wc -l < "$line"_V_KMEANS.csv);
      numar_linii_NV=$total_linii-$numar_linii_V;
      i=0; j=0;
      while (($i<$numar_linii_NV))
      do      
	echo 0 >> y_"$line".csv;
        i=$i+1;
      done;
      while (($j<$numar_linii_V))
      do      
	echo 1 >> y_"$line".csv;
        j=$j+1;
      done;
   fi
done < dir_list_1.txt;
echo Gata
