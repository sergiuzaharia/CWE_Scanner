#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


const char *LISTED_TOKENS[] = {"command" , "executable" , "program" , "run" , "dir" , "ls" , "not" , "popen" , "system" , "full" , "path" , "argv" , "file" , "finished" , "return" , "srand" , "template" , "time" , "unsigned" , "all" , "as" , "binary" , "for" , "is" , "main" , "this" , "tools" , "when" , "code" , "int" , "note" , "one" , "or" , "source" , "alternate" , "d" , "end" , "function" , "in" , "letter" , "on" , "to" , "char" , "data" , "databuffer" , "pipe" , "static" , "void" , "wchar_t" , "and" , "control" , "execute" , "expression" , "from" , "put" , "true" , "use" , "variant" , "_pclose" , "exit" , "failed" , "false" , "if" , "null" , "sink" , "sources" , "argument" , "files" , "_popen" , "_wpopen" , "global" , "value" , "any" , "array" , "default" , "newline" , "strcmp" , "strlen" , "struct" , "values" , "case" , "declared" , "else" , "fgets" , "flags" , "hit" , "rand" , "statement" , "string" , "filename" , "generated" , "label" , "search" , "strcpy" , "wcscpy" , "with" , "extern" , "fixed" , "switch" , "where" , "while" , "break" , "by" , "const" , "evaluate" , "of" , "tool" , "typedef" , "union" , "cast" , "goto" , "other" , "remove" , "stdin" , "trailing" , "type" , "baseline" , "dereference" , "into" , "random" , "clean" , "comment" , "compiler" , "entry" , "fabs" , "ints" , "skip" , "sqrt" , "src" , "style" , "_wfopen" , "_wgetenv" , "abstract" , "eof" , "invoke" , "sum" , "test" , "var" , "verify" , "cloneable" , "divide" , "rows" , "secondary" , "show" , "tr" , "transient" , "urlencoder" , "illegalmonitorstateexception" , "insert" , "short" , "threshold" , "times" , "xpathconstants" , "bufferedwriter" , "calendar" , "img" , "objectoutputstream" , "sslsocket" , "successful" , "_wspawnvp" , "calloc" , "chars" , "fputwc" , "getnameinfo" , "getobject" , "kerberosprincipal" , "sequence" , "spawnl" , "equivalent" , "minutes" , "script" , "strdup" , "canonicalize" , "classname" , "console" , "create" , "format" , "language" , "leading" , "memset" , "putc" , "comments" , "container" , "convert" , "tags" , "typeof" , "bufferedimage" , "environment" , "executebatch" , "literal" , "option" , "primary" , "td" , "_wputenv" , "addition" , "last" , "maximum" , "mkdirs" , "putenv" , "resolution" , "strong" , "unlock" , "datetime" , "execlp" , "executeupdate" , "inet_ntoa" , "params" , "sides" , "submit" , ".data" , "fputc" , "greater" , "provider" , "_spawnvp" , "datavector" , "long" , "readstring" , "release" , "throw" , "writeobject" , "naming" , "putwc" , "signal" , "truncated" , "createdirectory" , "directory" , "html" , "replace" , "inetaddress" , "stringbuffer" , "concurrent" , "hide" , "readline" , "cipher" , "cover" , "leave" , "readobject" , "view" , "consume" , "fclose" , "messagedigest" , "numbers" , "replacement" , "zipexception" , "base" , "fputws" , "handler" , "memcmp" , "namespace" , "objectinputstream" , "security" , "tostring" , "undefined" , "common" , "constructor" , "days" , "entered" , "exists" , "hashmap" , "preparestatement" , "reader" , "setpassword" , "stream" , "visible" , "connected" , "datainputstream" , "entity" , "fwrite" , "holding" , "inputstreamreader" , "line" , "rectangle" , "securerandom" , "box" , "id" , "interrupted" , "keep" , "nosuchfieldexception" , "prior" , "vsnprintf" , "_unlink" , "date" , "enter" , "ioexception" , "throwable" , "fprintf" , "sha1" , "unsafe" , "check" , "getpassword" , "widechartomultibyte" , "assert" , "connection" , "error" , "io" , "notify" , "reentrantlock" , "resource" , "sql" , "capture" , "compile" , "exiting" , "graphics" , "pi" , "resultset" , "strtol" , "strtoul" , "why" , "buffer" , "information" , "copy" , "auth" , "entries" , "getenv" , "initialize" , "properties" , "unchecked" , "vprintf" , "enable" , "owner" , "passwordauthentication" , "wait" , "zip" , "br" , "concatenate" , "crypto" , "down" , "invalid" , "required" , "shutdown" , "public" , "puts" , "query" , "socket" , "wcscat" , "activator" , "limit" , "mkstemp" , "sprintf" , "action" , "execl" , "sha512" , "transform" , "awtexception" , "block" , "dircontext" , "throws" , "getsockname" , "left" , "port" , "store" , "add" , "contains" , "manual" , "opened" , "recv" , "args" , "assign" , "connect" , "pass" , "delete" , "objectstreamexception" , "operation" , "parameter" , "point" , "scoped" , "side" , "urisyntaxexception" , "year" , "createfile" , "replaceall" , ".clear" , "append" , "classnotfoundexception" , "decrement" , "location" , "pm" , "fwprintf" , "hashtable" , "map" , "may" , "name" , "small" , "standard" , "vfwprintf" , "warning" , "abort" , "httpcontext" , "info" , "iso" , "login" , "filter" , "inputstream" , "outputstream" , "prepare" , "systemexception" , "finish" , "future" , "import" , "datenow" , "htons" , "private" , "_wspawnv" , "allocate" , "both" , "drivermanager" , "key" , "redirect" , "using" , "fwscanf" , "iszero" , "parse" , "sigprocmask" , "top" , "version" , "absolute" , "condition" , "generic" , "loadlibraryw" , "notserializableexception" , "over" , "period" , "so_reuseaddr" , "stored" , "xpathfactory" , "out" , "declare" , "disable" , "minute" , "acquire" , "alert" , "element" , "preparedstatement" , "exceptions" , "execvp" , "imageio" , "mutable" , "preferred" , "reverse" , "set" , "collector" , "instantiate" , "none" , "root" , "_wunlink" , "available" , "begin" , "https" , "integer" , "malloc" , "open" , "thread" , "up" , "bufferedreader" , "call" , "contents" , "final" , "following" , "padding" , "illegalargumentexception" , "nullpointerexception" , ".push_back" , "_snwprintf" , "alignment" , "getc" , "output" , "ssl" , "components" , "equals" , "foreach" , "include" , "wcslen" , "wcsncat" , "isinitialized" , "spawnvp" , "supported" , "ldap" , "overflow" , "package" , "print" , "raise" , "wrapper" , "byte" , "character" , "complete" , "minimum" , "plus" , "relative" , "close" , "decode" , "failure" , "iterator" , "scanf" , "tempnam" , "intbuffer" , "mail" , "memmove" , "searchresult" , "sslsocketfactory" , "uninitialized" , "dateformat" , "form" , "spawnv" , ".end" , "boolean" , "getdate" , "january" , "message" , "permission" , "printstacktrace" , ".back" , "inclusive" , "printwriter" , "str" , "_wrename" , "document" , "input" , "log" , "managed" , "member" , "printf" , ".begin" , ".insert" , "_access" , "_putenv" , "extends" , "implicit" , "validate" , "finally" , "uint" , "lines" , "dictionary" , "reading" , "sentence" , "wmemset" , "compare" , "gets" , "let" , "putchar" , "freopen" , "fscanf" , "getparameter" , "httpcookie" , "class" , "inside" , "number" , "rename" , "model" , "robot" , "uri" , "setsockopt" , "snwprintf" , "writer" , "characters" , "charbuffer" , "copies" , "field" , "lang" , "objects" , "serializable" , "setdate" , "stat" , "valid" , "am" , "catch" , "header" , "logmanager" , "signed" , "vfprintf" , "volatile" , "abs" , "bounds" , "mode" , "sscanf" , "stacktraceelement" , "sub" , "super" , "tag" , "_spawnlp" , "ctx" , "logging" , "persistent" , "written" , "_wspawnlp" , "len" , "readonly" , "setlastmodified" , "stdout" , "trim" , "unauthorized" , "monitor" , "namingenumeration" , "virtual" , "configuration" , "double" , "synchronized" , "unnecessary" , "except" , "fill" , "setmessage" , "address" , "after" , "extension" , "inetsocketaddress" , "ivparameterspec" , "math" , "object" , "validation" , "atoi" , "build" , "fgetws" , "linkedlist" , "management" , "printmessage" , "body" , "copied" , "destination" , "link" , "readable" , "reference" , "unsupportedencodingexception" , "context" , "keyname" , "right" , "zero" , "_wspawnl" , "before" , "channel" , "completed" , "descriptor" , "halt" , "http" , "seconds" , "systemroot" , "attributes" , "exception" , "fileoutputstream" , "instance" , "underflow" , "_write" , "closed" , "done" , "objectoutput" , "stop" , "keygenerator" , "locks" , "order" , "sbyte" , "send" , "service" , "derive" , "handle" , "hash" , "offset" , "unmanaged" , "bit" , "image" , "lock" , "unlink" , "between" , "bind" , "lastmodified" , "listener" , "persist" , "quote" , "second" , "url" , "_vsnwprintf" , "bytes" , "encoding" , "filenotfoundexception" , "instantiationexception" , "min" , "obsolete" , "permissions" , "continue" , "purpose" , "serversocket" , "_open" , "dynamic" , "fields" , "fileinputstream" , "implements" , "load" , "minor" , "namingexception" , "uniontype" , "unsupportedoperationexception" , "bool" , "empty" , "finalize" , "get" , "initialdircontext" , "vwprintf" , "checked" , "interruptedexception" , "level" , "off" , "protected" , "sign" , "_wtmpnam" , "bytearrayinputstream" , "credentials" , "filetime" , "native" , "numeric" , "registry" , "settime" , "socketexception" , "xpath" , "gc" , "getconnection" , "ok" , "click" , "do" , "listen" , "select" , "ushort" , "comparing" , "constant" , "wcstombs" , "explicit" , "memcpy" , "runnable" , "sqlexception" , "accept" , "changed" , "encode" , "match" , "next" , "destroy" , "exclusive" , "home" , "_putws" , "big" , "list" , "method" , "month" , "realloc" , "spec" , "window" , "base64" , "encrypt" , "float" , "nan" , "text" , "years" , "current" , "endpoint" , "fopen" , "vector" , "zipfile" , "arguments" , "bytearrayoutputstream" , "clear" , "clonenotsupportedexception" , "getcookies" , "head" , "report" , "serialize" , "sizeof" , "strncpy" , "_spawnl" , "clone" , "multiply" , "va_end" , ".size" , "atomic" , "deleteonexit" , "stderr" , "uid" , "update" , "access" , "length" , "server" , "setup" , "stack" , "table" , "tmpnam" , "us" , "hashcode" , "reinitialize" , "result" , "change" , "equal" , "free" , "iterate" , "execv" , "property" , "synchronize" , "_snprintf" , "_wmktemp" , "_wtempnam" , "freelibrary" , "index" , "override" , "response" , "wcschr" , "wprintf" , "collection" , "layout" , "names" , "numberformatexception" , "reinterpret_cast" , "save" , "secretkey" , "setheader" , "try" , "wcsncpy" , "addheader" , "authenticate" , "fdopen" , "ignore" , "iserror" , "kerberoskey" , "matches" , "shortbuffer" , "types" , "first" , "hashset" , "illegalaccessexception" , "_spawnv" , "generate" , "max" , "receive" , "require" , "serialversionuid" , "terminated" , "fputs" , "space" , "ms" , "strncat" , "count" , "crypt" , "init" , "sized" , "spawnlp" , "active" , "display" , "multi" , "outputstreamwriter" , "putws" , "real" , "secretkeyspec" , "start" , "util" , "config" , "no" , "size" , "stringtokenizer" , "swscanf" , "new" , "operator" , "sleep" , "arraylist" , "decrypt" , "desktop" , "force" , "logger" , "precision" , "word" , "_stat" , "attempted" , "hour" , "increment" , "inputsource" , "process" , "runtime" , "swprintf" , "deprecated" , "family" , "max_value" , "multiple" , "principal" , "range" , "stringbuilder" , "duplicate" , "wcsdup" , "errno" , "throwing" , "unsatisfiedlinkerror" , "_close" , "exec" , "imaxabs" , "sqrtl" , "until" , "wscanf" , "read" , "transfer" , "area" , "atof" , "forget" , "fread" , "lower" , "param" , "status" , "strcat" , "timeout" , "_wopen" , "_wremove" , "loop" , "mktemp" , "snprintf" , "browse" , "executequery" , "filereader" , "loadlibrarya" , "request" , "subtract" , "validating" , "attribute" , "dump" , "escape" , "general" , "now" , "putwchar" , "strchr" , "ulong" , "urlconnection" , "write"};   // The reduced list of 920 NIST code tokens in Java samples

int CWE_TOKEN_COUNT =0;			// identified CWE ToKEN position in the CWE_TOKENS vector
int CWE_TOKENS_PER_CELL = 250;                  //CWE tokens per cell to be considered (cell is chosen currently as a two lines code) ***MODIFIED from two lines to a longer piece of code***
char* CWE_TOKENS[250];				// Vector of TOKENS with CWE importance; the size should be CWE_TOKENS_PER_CELL, but there is an error to be solved later


char* chars_cwe_tokens[250];
int numeric_cwe_tokens[250];  		//CWE tokens are mapped to numerical values, to be easily used as input to subsequent Machine Learning algorithms
							// token position is important; max tokens to be considered is CWE_TOKENS_PER_CELL

int NUMBER_OF_LISTED_TOKENS = 920;		// number of tokens listed as possible to exist in Java source code


int IDENTIFIERS_COUNT =0;			// identified IDENTIFIER position in the IDENTIFIERS vector
int IDENTIFIERS_PER_CELL = 250;                  //IDENTIFIERS per cell to be considered (cell is chosen currently as a two lines code) ***MODIFIED from two lines to a longer piece of code***
char* IDENTIFIERS[250];				// Vector of IDENTIFIERS; the size should be IDENTIFIERS_PER_CELL, but there is an error to be solved later

int generic_identifiers[250];  			//these identifiers are not linked to the name of the source code IDENTIFIERS
						// they give each identifier a value from 1 (the first identifier) to IDENTIFIERS_PER_CELL
							// padding is with 0, meaning no identifier remained
							// identifiers that re-appear have the same value in all positions in the generic_identifiers vector

char *CLUSTERS_KMEANS[] = {"0" , "command" , "0" , "executable" , "0" , "program" , "0" , "run" , "1" , "dir" , "1" , "ls" , "1" , "not" , "1" , "popen" , "1" , "system" , "2" , "full" , "2" , "path" , "3" , "argv" , "3" , "file" , "3" , "finished" , "3" , "return" , "3" , "srand" , "3" , "template" , "3" , "time" , "3" , "unsigned" , "4" , "all" , "4" , "as" , "4" , "binary" , "4" , "for" , "4" , "is" , "4" , "main" , "4" , "this" , "4" , "tools" , "4" , "when" , "5" , "code" , "5" , "int" , "5" , "note" , "5" , "one" , "5" , "or" , "5" , "source" , "6" , "alternate" , "6" , "d" , "6" , "end" , "6" , "function" , "6" , "in" , "6" , "letter" , "6" , "on" , "6" , "to" , "7" , "char" , "7" , "data" , "7" , "databuffer" , "7" , "pipe" , "7" , "static" , "7" , "void" , "7" , "wchar_t" , "8" , "and" , "8" , "control" , "8" , "execute" , "8" , "expression" , "8" , "from" , "8" , "put" , "8" , "true" , "8" , "use" , "8" , "variant" , "9" , "_pclose" , "9" , "exit" , "9" , "failed" , "9" , "false" , "9" , "if" , "10" , "null" , "10" , "sink" , "10" , "sources" , "11" , "argument" , "12" , "files" , "13" , "_popen" , "13" , "_wpopen" , "14" , "global" , "14" , "value" , "15" , "any" , "15" , "array" , "15" , "default" , "15" , "newline" , "15" , "strcmp" , "15" , "strlen" , "15" , "struct" , "15" , "values" , "16" , "case" , "16" , "declared" , "16" , "else" , "16" , "fgets" , "16" , "flags" , "16" , "hit" , "16" , "rand" , "16" , "statement" , "16" , "string" , "17" , "filename" , "17" , "generated" , "17" , "label" , "17" , "search" , "18" , "strcpy" , "18" , "wcscpy" , "18" , "with" , "19" , "extern" , "19" , "fixed" , "19" , "switch" , "19" , "where" , "19" , "while" , "20" , "break" , "20" , "by" , "20" , "const" , "20" , "evaluate" , "20" , "of" , "20" , "tool" , "21" , "typedef" , "21" , "union" , "22" , "cast" , "22" , "goto" , "22" , "other" , "22" , "remove" , "22" , "stdin" , "22" , "trailing" , "22" , "type" , "23" , "baseline" , "23" , "dereference" , "23" , "into" , "23" , "random" , "24" , "clean" , "24" , "comment" , "24" , "compiler" , "24" , "entry" , "24" , "fabs" , "24" , "ints" , "24" , "skip" , "24" , "sqrt" , "24" , "src" , "24" , "style" , "25" , "_wfopen" , "25" , "_wgetenv" , "25" , "abstract" , "25" , "eof" , "25" , "invoke" , "25" , "sum" , "25" , "test" , "25" , "var" , "25" , "verify" , "26" , "cloneable" , "26" , "divide" , "26" , "rows" , "26" , "secondary" , "26" , "show" , "26" , "tr" , "26" , "transient" , "26" , "urlencoder" , "27" , "illegalmonitorstateexception" , "27" , "insert" , "27" , "short" , "27" , "threshold" , "27" , "times" , "27" , "xpathconstants" , "28" , "bufferedwriter" , "28" , "calendar" , "28" , "img" , "28" , "objectoutputstream" , "28" , "sslsocket" , "28" , "successful" , "29" , "_wspawnvp" , "29" , "calloc" , "29" , "chars" , "29" , "fputwc" , "29" , "getnameinfo" , "29" , "getobject" , "29" , "kerberosprincipal" , "29" , "sequence" , "29" , "spawnl" , "30" , "equivalent" , "30" , "minutes" , "30" , "script" , "30" , "strdup" , "31" , "canonicalize" , "31" , "classname" , "31" , "console" , "31" , "create" , "31" , "format" , "31" , "language" , "31" , "leading" , "31" , "memset" , "31" , "putc" , "32" , "comments" , "32" , "container" , "32" , "convert" , "32" , "tags" , "32" , "typeof" , "33" , "bufferedimage" , "33" , "environment" , "33" , "executebatch" , "33" , "literal" , "33" , "option" , "33" , "primary" , "33" , "td" , "34" , "_wputenv" , "34" , "addition" , "34" , "last" , "34" , "maximum" , "34" , "mkdirs" , "34" , "putenv" , "34" , "resolution" , "34" , "strong" , "34" , "unlock" , "35" , "datetime" , "35" , "execlp" , "35" , "executeupdate" , "35" , "inet_ntoa" , "35" , "params" , "35" , "sides" , "35" , "submit" , "36" , ".data" , "36" , "fputc" , "36" , "greater" , "36" , "provider" , "37" , "_spawnvp" , "37" , "datavector" , "37" , "long" , "37" , "readstring" , "37" , "release" , "37" , "throw" , "37" , "writeobject" , "38" , "naming" , "38" , "putwc" , "38" , "signal" , "38" , "truncated" , "39" , "createdirectory" , "39" , "directory" , "39" , "html" , "39" , "replace" , "40" , "inetaddress" , "40" , "stringbuffer" , "41" , "concurrent" , "41" , "hide" , "41" , "readline" , "42" , "cipher" , "42" , "cover" , "42" , "leave" , "42" , "readobject" , "42" , "view" , "43" , "consume" , "43" , "fclose" , "43" , "messagedigest" , "43" , "numbers" , "43" , "replacement" , "43" , "zipexception" , "44" , "base" , "44" , "fputws" , "44" , "handler" , "44" , "memcmp" , "44" , "namespace" , "44" , "objectinputstream" , "44" , "security" , "44" , "tostring" , "44" , "undefined" , "45" , "common" , "45" , "constructor" , "45" , "days" , "45" , "entered" , "45" , "exists" , "45" , "hashmap" , "45" , "preparestatement" , "45" , "reader" , "45" , "setpassword" , "45" , "stream" , "45" , "visible" , "46" , "connected" , "46" , "datainputstream" , "46" , "entity" , "46" , "fwrite" , "46" , "holding" , "46" , "inputstreamreader" , "46" , "line" , "46" , "rectangle" , "46" , "securerandom" , "47" , "box" , "47" , "id" , "47" , "interrupted" , "47" , "keep" , "47" , "nosuchfieldexception" , "47" , "prior" , "47" , "vsnprintf" , "48" , "_unlink" , "48" , "date" , "48" , "enter" , "48" , "ioexception" , "48" , "throwable" , "49" , "fprintf" , "49" , "sha1" , "49" , "unsafe" , "50" , "check" , "50" , "getpassword" , "50" , "widechartomultibyte" , "51" , "assert" , "51" , "connection" , "51" , "error" , "51" , "io" , "51" , "notify" , "51" , "reentrantlock" , "51" , "resource" , "51" , "sql" , "52" , "capture" , "52" , "compile" , "52" , "exiting" , "52" , "graphics" , "52" , "pi" , "52" , "resultset" , "52" , "strtol" , "52" , "strtoul" , "52" , "why" , "53" , "buffer" , "53" , "information" , "54" , "copy" , "55" , "auth" , "55" , "entries" , "55" , "getenv" , "55" , "initialize" , "55" , "properties" , "55" , "unchecked" , "55" , "vprintf" , "56" , "enable" , "56" , "owner" , "56" , "passwordauthentication" , "56" , "wait" , "56" , "zip" , "57" , "br" , "57" , "concatenate" , "57" , "crypto" , "57" , "down" , "57" , "invalid" , "57" , "required" , "57" , "shutdown" , "58" , "public" , "58" , "puts" , "58" , "query" , "58" , "socket" , "58" , "wcscat" , "59" , "activator" , "59" , "limit" , "59" , "mkstemp" , "59" , "sprintf" , "60" , "action" , "60" , "execl" , "60" , "sha512" , "60" , "transform" , "61" , "awtexception" , "61" , "block" , "61" , "dircontext" , "61" , "throws" , "62" , "getsockname" , "62" , "left" , "62" , "port" , "62" , "store" , "63" , "add" , "63" , "contains" , "63" , "manual" , "63" , "opened" , "63" , "recv" , "64" , "args" , "64" , "assign" , "64" , "connect" , "64" , "pass" , "65" , "delete" , "65" , "objectstreamexception" , "65" , "operation" , "65" , "parameter" , "65" , "point" , "65" , "scoped" , "65" , "side" , "65" , "urisyntaxexception" , "65" , "year" , "66" , "createfile" , "66" , "replaceall" , "67" , ".clear" , "67" , "append" , "67" , "classnotfoundexception" , "67" , "decrement" , "67" , "location" , "67" , "pm" , "68" , "fwprintf" , "68" , "hashtable" , "68" , "map" , "68" , "may" , "68" , "name" , "68" , "small" , "68" , "standard" , "68" , "vfwprintf" , "68" , "warning" , "69" , "abort" , "69" , "httpcontext" , "69" , "info" , "69" , "iso" , "69" , "login" , "70" , "filter" , "70" , "inputstream" , "70" , "outputstream" , "70" , "prepare" , "70" , "systemexception" , "71" , "finish" , "71" , "future" , "71" , "import" , "72" , "datenow" , "72" , "htons" , "72" , "private" , "73" , "_wspawnv" , "73" , "allocate" , "73" , "both" , "73" , "drivermanager" , "73" , "key" , "73" , "redirect" , "73" , "using" , "74" , "fwscanf" , "74" , "iszero" , "74" , "parse" , "74" , "sigprocmask" , "74" , "top" , "74" , "version" , "75" , "absolute" , "75" , "condition" , "75" , "generic" , "75" , "loadlibraryw" , "75" , "notserializableexception" , "75" , "over" , "75" , "period" , "75" , "so_reuseaddr" , "75" , "stored" , "75" , "xpathfactory" , "76" , "out" , "77" , "declare" , "77" , "disable" , "77" , "minute" , "78" , "acquire" , "78" , "alert" , "78" , "element" , "78" , "preparedstatement" , "79" , "exceptions" , "79" , "execvp" , "79" , "imageio" , "79" , "mutable" , "79" , "preferred" , "79" , "reverse" , "79" , "set" , "80" , "collector" , "80" , "instantiate" , "80" , "none" , "80" , "root" , "81" , "_wunlink" , "81" , "available" , "81" , "begin" , "81" , "https" , "81" , "integer" , "81" , "malloc" , "81" , "open" , "81" , "thread" , "81" , "up" , "82" , "bufferedreader" , "82" , "call" , "82" , "contents" , "82" , "final" , "82" , "following" , "82" , "padding" , "83" , "illegalargumentexception" , "83" , "nullpointerexception" , "84" , ".push_back" , "84" , "_snwprintf" , "84" , "alignment" , "84" , "getc" , "84" , "output" , "84" , "ssl" , "85" , "components" , "85" , "equals" , "85" , "foreach" , "85" , "include" , "85" , "wcslen" , "85" , "wcsncat" , "86" , "isinitialized" , "86" , "spawnvp" , "86" , "supported" , "87" , "ldap" , "87" , "overflow" , "87" , "package" , "87" , "print" , "87" , "raise" , "87" , "wrapper" , "88" , "byte" , "88" , "character" , "88" , "complete" , "88" , "minimum" , "88" , "plus" , "88" , "relative" , "89" , "close" , "89" , "decode" , "89" , "failure" , "89" , "iterator" , "89" , "scanf" , "89" , "tempnam" , "90" , "intbuffer" , "90" , "mail" , "90" , "memmove" , "90" , "searchresult" , "90" , "sslsocketfactory" , "90" , "uninitialized" , "91" , "dateformat" , "91" , "form" , "91" , "spawnv" , "92" , ".end" , "92" , "boolean" , "92" , "getdate" , "92" , "january" , "92" , "message" , "92" , "permission" , "92" , "printstacktrace" , "93" , ".back" , "93" , "inclusive" , "93" , "printwriter" , "93" , "str" , "94" , "_wrename" , "94" , "document" , "94" , "input" , "94" , "log" , "94" , "managed" , "94" , "member" , "94" , "printf" , "95" , ".begin" , "95" , ".insert" , "95" , "_access" , "95" , "_putenv" , "95" , "extends" , "96" , "implicit" , "96" , "validate" , "97" , "finally" , "97" , "uint" , "97" , "lines" , "98" , "dictionary" , "98" , "reading" , "98" , "sentence" , "98" , "wmemset" , "99" , "compare" , "99" , "gets" , "99" , "let" , "99" , "putchar" , "100" , "freopen" , "100" , "fscanf" , "100" , "getparameter" , "100" , "httpcookie" , "101" , "class" , "101" , "inside" , "101" , "number" , "101" , "rename" , "102" , "model" , "102" , "robot" , "102" , "uri" , "103" , "setsockopt" , "103" , "snwprintf" , "103" , "writer" , "104" , "characters" , "104" , "charbuffer" , "104" , "copies" , "104" , "field" , "104" , "lang" , "104" , "objects" , "104" , "serializable" , "104" , "setdate" , "104" , "stat" , "104" , "valid" , "105" , "am" , "105" , "catch" , "105" , "header" , "105" , "logmanager" , "105" , "signed" , "105" , "vfprintf" , "105" , "volatile" , "106" , "abs" , "106" , "bounds" , "106" , "mode" , "106" , "sscanf" , "106" , "stacktraceelement" , "106" , "sub" , "106" , "super" , "106" , "tag" , "107" , "_spawnlp" , "107" , "ctx" , "107" , "logging" , "107" , "persistent" , "107" , "written" , "108" , "_wspawnlp" , "108" , "len" , "108" , "readonly" , "108" , "setlastmodified" , "108" , "stdout" , "108" , "trim" , "108" , "unauthorized" , "109" , "monitor" , "109" , "namingenumeration" , "109" , "virtual" , "110" , "configuration" , "110" , "double" , "110" , "synchronized" , "110" , "unnecessary" , "111" , "except" , "111" , "fill" , "111" , "setmessage" , "112" , "address" , "112" , "after" , "112" , "extension" , "112" , "inetsocketaddress" , "112" , "ivparameterspec" , "112" , "math" , "112" , "object" , "112" , "validation" , "113" , "atoi" , "113" , "build" , "113" , "fgetws" , "113" , "linkedlist" , "113" , "management" , "113" , "printmessage" , "114" , "body" , "114" , "copied" , "114" , "destination" , "114" , "link" , "114" , "readable" , "114" , "reference" , "114" , "unsupportedencodingexception" , "115" , "context" , "115" , "keyname" , "115" , "right" , "115" , "zero" , "116" , "_wspawnl" , "116" , "before" , "116" , "channel" , "116" , "completed" , "116" , "descriptor" , "116" , "halt" , "116" , "http" , "116" , "seconds" , "116" , "systemroot" , "117" , "attributes" , "117" , "exception" , "117" , "fileoutputstream" , "117" , "instance" , "117" , "underflow" , "118" , "_write" , "118" , "closed" , "118" , "done" , "118" , "objectoutput" , "118" , "stop" , "119" , "keygenerator" , "119" , "locks" , "119" , "order" , "119" , "sbyte" , "119" , "send" , "119" , "service" , "120" , "derive" , "120" , "handle" , "120" , "hash" , "120" , "offset" , "120" , "unmanaged" , "121" , "bit" , "121" , "image" , "121" , "lock" , "121" , "unlink" , "122" , "between" , "122" , "bind" , "122" , "lastmodified" , "122" , "listener" , "122" , "persist" , "122" , "quote" , "122" , "second" , "122" , "url" , "123" , "_vsnwprintf" , "123" , "bytes" , "123" , "encoding" , "123" , "filenotfoundexception" , "123" , "instantiationexception" , "123" , "min" , "123" , "obsolete" , "123" , "permissions" , "124" , "continue" , "124" , "purpose" , "124" , "serversocket" , "125" , "_open" , "125" , "dynamic" , "125" , "fields" , "125" , "fileinputstream" , "125" , "implements" , "125" , "load" , "125" , "minor" , "125" , "namingexception" , "125" , "uniontype" , "125" , "unsupportedoperationexception" , "126" , "bool" , "126" , "empty" , "126" , "finalize" , "126" , "get" , "126" , "initialdircontext" , "126" , "vwprintf" , "127" , "checked" , "127" , "interruptedexception" , "127" , "level" , "127" , "off" , "127" , "protected" , "127" , "sign" , "128" , "_wtmpnam" , "128" , "bytearrayinputstream" , "128" , "credentials" , "128" , "filetime" , "128" , "native" , "128" , "numeric" , "128" , "registry" , "128" , "settime" , "128" , "socketexception" , "128" , "xpath" , "129" , "gc" , "129" , "getconnection" , "129" , "ok" , "130" , "click" , "130" , "do" , "130" , "listen" , "130" , "select" , "130" , "ushort" , "131" , "comparing" , "131" , "constant" , "131" , "wcstombs" , "132" , "explicit" , "132" , "memcpy" , "132" , "runnable" , "132" , "sqlexception" , "133" , "accept" , "133" , "changed" , "133" , "encode" , "133" , "match" , "133" , "next" , "134" , "destroy" , "134" , "exclusive" , "134" , "home" , "135" , "_putws" , "135" , "big" , "135" , "list" , "135" , "method" , "135" , "month" , "135" , "realloc" , "135" , "spec" , "135" , "window" , "136" , "base64" , "136" , "encrypt" , "136" , "float" , "136" , "nan" , "136" , "text" , "136" , "years" , "137" , "current" , "137" , "endpoint" , "137" , "fopen" , "137" , "vector" , "137" , "zipfile" , "138" , "arguments" , "138" , "bytearrayoutputstream" , "138" , "clear" , "138" , "clonenotsupportedexception" , "138" , "getcookies" , "138" , "head" , "138" , "report" , "138" , "serialize" , "138" , "sizeof" , "138" , "strncpy" , "139" , "_spawnl" , "139" , "clone" , "139" , "multiply" , "139" , "va_end" , "140" , ".size" , "140" , "atomic" , "140" , "deleteonexit" , "140" , "stderr" , "140" , "uid" , "140" , "update" , "141" , "access" , "141" , "length" , "141" , "server" , "141" , "setup" , "141" , "stack" , "141" , "table" , "141" , "tmpnam" , "141" , "us" , "142" , "hashcode" , "142" , "reinitialize" , "142" , "result" , "143" , "change" , "143" , "equal" , "143" , "free" , "143" , "iterate" , "144" , "execv" , "144" , "property" , "144" , "synchronize" , "145" , "_snprintf" , "145" , "_wmktemp" , "145" , "_wtempnam" , "145" , "freelibrary" , "145" , "index" , "145" , "override" , "145" , "response" , "145" , "wcschr" , "145" , "wprintf" , "146" , "collection" , "146" , "layout" , "146" , "names" , "146" , "numberformatexception" , "146" , "reinterpret_cast" , "146" , "save" , "146" , "secretkey" , "146" , "setheader" , "146" , "try" , "146" , "wcsncpy" , "147" , "addheader" , "147" , "authenticate" , "147" , "fdopen" , "147" , "ignore" , "147" , "iserror" , "147" , "kerberoskey" , "147" , "matches" , "147" , "shortbuffer" , "147" , "types" , "148" , "first" , "148" , "hashset" , "148" , "illegalaccessexception" , "149" , "_spawnv" , "149" , "generate" , "149" , "max" , "149" , "receive" , "149" , "require" , "149" , "serialversionuid" , "149" , "terminated" , "150" , "fputs" , "150" , "space" , "150" , "ms" , "150" , "strncat" , "151" , "count" , "151" , "crypt" , "151" , "init" , "151" , "sized" , "151" , "spawnlp" , "152" , "active" , "152" , "display" , "152" , "multi" , "152" , "outputstreamwriter" , "152" , "putws" , "152" , "real" , "152" , "secretkeyspec" , "152" , "start" , "152" , "util" , "153" , "config" , "153" , "no" , "153" , "size" , "153" , "stringtokenizer" , "153" , "swscanf" , "154" , "new" , "154" , "operator" , "154" , "sleep" , "155" , "arraylist" , "155" , "decrypt" , "155" , "desktop" , "155" , "force" , "155" , "logger" , "155" , "precision" , "155" , "word" , "156" , "_stat" , "156" , "attempted" , "156" , "hour" , "156" , "increment" , "156" , "inputsource" , "156" , "process" , "156" , "runtime" , "156" , "swprintf" , "157" , "deprecated" , "158" , "family" , "158" , "max_value" , "158" , "multiple" , "158" , "principal" , "158" , "range" , "158" , "stringbuilder" , "159" , "duplicate" , "159" , "wcsdup" , "160" , "errno" , "160" , "throwing" , "160" , "unsatisfiedlinkerror" , "161" , "_close" , "161" , "exec" , "161" , "imaxabs" , "161" , "sqrtl" , "161" , "until" , "161" , "wscanf" , "162" , "read" , "162" , "transfer" , "163" , "area" , "163" , "atof" , "163" , "forget" , "163" , "fread" , "163" , "lower" , "163" , "param" , "163" , "status" , "163" , "strcat" , "163" , "timeout" , "164" , "_wopen" , "164" , "_wremove" , "164" , "loop" , "164" , "mktemp" , "164" , "snprintf" , "165" , "browse" , "165" , "executequery" , "165" , "filereader" , "165" , "loadlibrarya" , "165" , "request" , "165" , "subtract" , "165" , "validating" , "166" , "attribute" , "166" , "dump" , "166" , "escape" , "166" , "general" , "166" , "now" , "166" , "putwchar" , "166" , "strchr" , "166" , "ulong" , "166" , "urlconnection" , "166" , "write"};  // There are 167 K-Means clusters for the 920 Java CWE tokens





char* CLUSTERS_KMEANS_NAME[920];
char* CLUSTERS_KMEANS_NUMBER[920];




// Returns 'true' if the character is a DELIMITER.
bool isDelimiter(char ch)
{
	if	(ch == ' ' || ch == '+' || ch == '-' || ch == '*' || 
		 ch == '/' || ch == ',' || ch == ';' || ch == '>' || 
		 ch == '<' || ch == '=' || ch == '(' || ch == ')' || 
		 ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
		 ch == '.' || ch == '"' || ch == '|' || ch == '&' ||
		 ch == ':' || ch == '!' || ch == '%')

		return (true);
	return (false);
}


// Returns 'true' if the string is a VALID IDENTIFIER.
bool validIdentifier(char* str)
{
	if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
		str[0] == '3' || str[0] == '4' || str[0] == '5' || 
		str[0] == '6' || str[0] == '7' || str[0] == '8' || 
		str[0] == '9' || isDelimiter(str[0]) == true)
		return (false);
	else {IDENTIFIERS_COUNT++; return (true);}
}


// Returns 'true' if the string is a TOKEN (for CWE) by Sergiu Zaharia
bool isCweToken(char* str)
{

for (int tkn=0; tkn<NUMBER_OF_LISTED_TOKENS; tkn++)

{
	
	if (!strcasecmp(str, LISTED_TOKENS[tkn]))



		{
		CWE_TOKEN_COUNT++;
		return (true);
		}
	

}

return (false);
}



// Extracts the SUBSTRING.
char* subString(char* str, int left, int right)
{
	int i;
	char* subStr = (char*)malloc(
				sizeof(char) * (right - left + 2));

	for (i = left; i <= right; i++)
		subStr[i - left] = tolower(str[i]);
	subStr[right - left + 1] = '\0';
	return (subStr);
}

// Parsing the input STRING.
void parse(char* str)
{
	int left = 0, right = 0;
	int len = strlen(str);
        
	
	while (right <= len && left <= right) 

	{
		if (isDelimiter(str[right]) == false)
			right++;

		if (isDelimiter(str[right]) == true && left == right) 
		{                 
			
			if (str[right] == '.') 	{right++;}			// to include tokens starting with dot, like .open, .data
			else			{right++; left = right;}	
		} 	
		else if (isDelimiter(str[right]) == true && left != right
				|| (right == len && left != right)) 
		{
			
			char* subStr = subString(str, left, right - 1);

			if (isCweToken(subStr) == true)
				{
					if (CWE_TOKEN_COUNT < CWE_TOKENS_PER_CELL+1) 
						{
													
						CWE_TOKENS[CWE_TOKEN_COUNT-1]=subStr;
						 	
						}
				}	

			else if (validIdentifier(subStr) == true && isDelimiter(str[right - 1]) == false)
			{
								
				if (IDENTIFIERS_COUNT < IDENTIFIERS_PER_CELL+1) 
						{
														
							IDENTIFIERS[IDENTIFIERS_COUNT-1]=subStr;
						 }
			}  

			
			 left = right;
		}
	}
	return;
}



char* numbered_identifiers (char* id_vector[IDENTIFIERS_PER_CELL])
{


	
	

	for (int i=0; i<IDENTIFIERS_PER_CELL; i++)
		generic_identifiers[i] = 0;

	
	if (id_vector[0] != "0") 
		generic_identifiers[0]=1;

	
int max_generic_identifier = 1;
int delta = 1;

	
	for (int i=1; i<IDENTIFIERS_PER_CELL; i++)
	{
		if (id_vector[i]!= "0")
		{
			
			max_generic_identifier = max_generic_identifier + delta;
			generic_identifiers[i] = max_generic_identifier;

			delta = 1;
			

				
			for (int j=0; j<i; j++)
			{
				if ((strlen(id_vector[i])==strlen(id_vector[j])) && (!strcasecmp(id_vector[i], id_vector[j])))
				{
				generic_identifiers[i] = generic_identifiers[j] ;
				delta = 0;
							
				}
				
				max_generic_identifier = (max_generic_identifier<generic_identifiers[i])?generic_identifiers[i]:max_generic_identifier;	
			}
		}
		
		 
	}

}



char* numbered_cwe_tokens (char** token_vector)

{


// For the characters parser (produces the ordered list of used tokens)

	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		chars_cwe_tokens[i] = " ";


	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		{		

		chars_cwe_tokens[i] = token_vector[i];
		}

// For the numeric parser (produces the ordered list of used tokens, coverted the the numerical cluster elements)

	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		numeric_cwe_tokens[i] = 0;
	





	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		{
		for (int j=0; j<NUMBER_OF_LISTED_TOKENS; j++)
			{
			if (!strcasecmp(token_vector[i], CLUSTERS_KMEANS_NAME[j]))
				numeric_cwe_tokens[i] = atoi(CLUSTERS_KMEANS_NUMBER[j])+1;
			}
		}






	return(0);
}


// DRIVER FUNCTION
int main(int argc, char **argv)
{
	
//int argc;
//char **argv;

FILE *file; 
char str[500];


int INPUT_CELL_SIZE = CWE_TOKENS_PER_CELL + IDENTIFIERS_PER_CELL;  				//input size for the ML algorithm	

// For character parser
char* input_ml2_tokens[CWE_TOKENS_PER_CELL];		   // numerical input for ML no 2 (CWE pattern recognition within the Intermediate Representation)
int input_ml2_identifiers[IDENTIFIERS_PER_CELL];
char* input_ml2_characters[INPUT_CELL_SIZE];

// For numeric parser
int input_ml2_tokens_numeric[CWE_TOKENS_PER_CELL];



//// FUNCTION TO GENERATE HAC Clusters Values for the tokens
/// Should be commented when we generate KMEANS cluster values

	for (int i=0; i<NUMBER_OF_LISTED_TOKENS; i++)
		{	
		CLUSTERS_KMEANS_NUMBER[i] = CLUSTERS_KMEANS[2*i];
		CLUSTERS_KMEANS_NAME[i] = CLUSTERS_KMEANS[2*i+1];
		}

//// FUNCTION TO GENERATE K-Means Clusters Values for the tokens
// Should be commented when we generate HAC cluster values	
/*
	for (int i=0; i<NUMBER_OF_LISTED_TOKENS; i++)
		{	
		CLUSTERS_HAC_NUMBER[i] = CLUSTERS_KMEANS[2*i];
		CLUSTERS_HAC_NAME[i] = CLUSTERS_KMEANS[2*i+1];
		}
*/



/*

for (int i=0; i<NUMBER_OF_LISTED_TOKENS; i++)
	{
		printf("%s ", CLUSTERS_KMEANS_NUMBER[i]);
		}

for (int i=0; i<NUMBER_OF_LISTED_TOKENS; i++)
	{
		printf("%s ", CLUSTERS_KMEANS_NAME[i]);
		}

*/


//prepareTokenList(); 
/*for (int tkn=0; tkn<1782; tkn++)
	printf(LISTED_TOKENS[tkn], "%s");*/

// For character parser


for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		CWE_TOKENS[i] = "0";

/*
for (int i=0; i<CWE_KEYWORDS_PER_CELL; i++)
		CWE_KEYWORDS[i] = "0";*/

for (int i=0; i<IDENTIFIERS_PER_CELL; i++)
		IDENTIFIERS[i] = "0"; 

for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		input_ml2_tokens[i] = "0";

for (int i=0; i<IDENTIFIERS_PER_CELL; i++)
		input_ml2_identifiers[i] = 0;

for (int i=0; i<INPUT_CELL_SIZE; i++)
		input_ml2_characters[i] = "0";

// For Numeric parser

for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
		input_ml2_tokens_numeric[i] = 0;



  if(argc > 1) {
    if(!(file = fopen(argv[1], "r+"))) {
      perror(argv[1]);
      return (1);
    }
 }

//printf("File name: %s \n", argv[1]); 	

while (fscanf(file, "%s", str)!=EOF)
		parse(str); // calling the parse function

	

	fclose(file);



	numbered_identifiers (IDENTIFIERS); 
	numbered_cwe_tokens (CWE_TOKENS);  


// For the character parser

	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)				// concatenate CWE Tokens, IDENTIFIERS and CWE KEYWORDS in one numerical INPUT for ML2 (CWE //pattern recogniser)
		{
		//if 	(i<CWE_TOKENS_PER_CELL) 			{	}
		input_ml2_tokens[i] = chars_cwe_tokens[i];

		//else 
		//if (i<CWE_TOKENS_PER_CELL) //+IDENTIFIERS_PER_CELL) 
		//						 	{input_ml2[i] = IDENTIFIERS[i-CWE_TOKENS_PER_CELL];}
									//{input_ml2[i] = generic_identifiers[i-CWE_TOKENS_PER_CELL];}
		//else 							{input_ml2[i] = nr_cwe_keywords[i-(CWE_TOKENS_PER_CELL+IDENTIFIERS_PER_CELL)];}
		}


	

	
	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
	{
		if (strcasecmp(input_ml2_tokens[i], "0"))
			{
			input_ml2_characters[i] = input_ml2_tokens[i];
			//printf("%s ", input_ml2_tokens[i]);
			}

	}

/*
	for (int i=0; i<IDENTIFIERS_PER_CELL; i++)
	{
		if (strcasecmp(input_ml2_identifiers[i], "0"))
		{
		input_ml2_characters[CWE_TOKENS_PER_CELL+i] = input_ml2_identifiers[i];
			//printf("%s ", input_ml2_identifiers[i]);
		}
	}
*/

/*
	for (int i=0; i<INPUT_CELL_SIZE; i++)
	{
		//if (strcasecmp(input_ml2_characters[i], "0"))
		//	{
			printf("%s ", input_ml2_characters[i]);
		//	}

	}
*/

//printf("\n");

// For the numeric parser

	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
	{
		input_ml2_tokens_numeric[i] = numeric_cwe_tokens[i];
		printf("%d,", input_ml2_tokens_numeric[i]);
		}
/*
	for (int i=0; i<CWE_TOKENS_PER_CELL; i++)
	{
		printf("%d ", numeric_cwe_tokens[i]);
		}

*/
	for (int i=0; i<IDENTIFIERS_PER_CELL; i++)				
				{input_ml2_identifiers[i] = generic_identifiers[i];}
	
	for (int i=0; i<IDENTIFIERS_PER_CELL; i++)				
				{printf("%d,", input_ml2_identifiers[i]);}
	
	printf("\n");
	


	return (0);

}

