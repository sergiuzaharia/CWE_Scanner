#!/bin/bash
while nume_fisier= read -r line
do
   if [ -n "$line" ]; then   
      echo "$line"; 
      pwd;
      mv ~/phd/dataset/juliet_testcases/"$line"/  ~/phd/dataset/temporar_nv_code_mover/ ;
      find . -iname '*.ready.cpp' -exec ~/phd/dataset/juliet_testcases/parser_193tk_ctrl_data_flow_numeric_KMEANS.exe {} > "$line"_NV_KMEANS.csv \;
      find . -iname '*.ready.cpp' -exec ~/phd/dataset/juliet_testcases/parser_193tk_ctrl_data_flow_numeric_HAC.exe {} > "$line"_NV_HAC.csv \;
      mv ~/phd/dataset/temporar_nv_code_mover/"$line"/  ~/phd/dataset/juliet_testcases/;
   fi
done < dir_list_1.txt;
echo Gata
