#!/bin/bash
while nume_fisier= read -r line
do
   if [ -n "$line" ]; then   
      echo "$line"; cd ~/phd/dataset/juliet_testcases/"$line";
      pwd;
      find . -iname '*.ready.cpp' -exec ~/phd/dataset/juliet_testcases/parser_193tk_ctrl_data_flow_numeric_KMEANS.exe {} > "$line"_V_KMEANS.csv \;
      find . -iname '*.ready.cpp' -exec ~/phd/dataset/juliet_testcases/parser_193tk_ctrl_data_flow_numeric_HAC.exe {} > "$line"_V_HAC.csv \;
   fi
done < dir_list.txt;
echo Gata!
