#!/bin/bash
while nume_fisier= read -r line
do
   if [ -n "$line" ]; then   
      echo "$line"; cd ~/phd/dataset/juliet_testcases/"$line";
      pwd;
      cp "$line"_V_KMEANS.csv ~/phd/dataset/juliet_testcases/;
      cp "$line"_V_HAC.csv ~/phd/dataset/juliet_testcases/;
      cd ~/phd/dataset/juliet_testcases
      cat "$line"_NV_KMEANS.csv "$line"_V_KMEANS.csv > X_"$line"_KMEANS.csv;
      cat "$line"_NV_HAC.csv "$line"_V_HAC.csv > X_"$line"_HAC.csv
   fi
done < dir_list_1.txt;
echo Gata!
