# CWE_Scanner
CWE classifier using Word Embeddings

Files named as dir_list.txt contain the names of directories where C/C++ CWE vulnerable code is located (in Juliet testcases)

Scripts named list_dir.sh, list_dir_NV.sh creates the files with C/C++ CWEXX vulnerable/not vulnerable samples, per each CWEXX in Juliet testcases

Script mutare_csv.sh moves between folders and concatenate csv tokenized files per each CWE, and creates files X_CWEXX  (both for HAC and KMEANS)

Script creare_Y.sh creates files Y_CWEXX  (identical for HAC and KMEANS), starting with value 0 (per line) for non-vulnerable samples, and 1 for vulnerable samples (at the end)

parser_Java_591tk_ctrl_flow.exe - parser for Java code and C code, using the all Java and C tokens we could identify in NIST suite.
