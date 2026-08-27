# Linux-Fundamentals

## $ls : Displays information about files in the current directory.

## $pwd: Displays the current working directory.

## $mkdir: Creates a directory.

- Syntax: **$mkdir directory_name**
- Example: **$mkdir /home/test**
- Here new directory **/home/test** will be created if /home directory exists.

variant: If parent directory does not exist, we can create parent as well as child directories using -p option alongwith **$mkdir** command as follows
**$mkdir -p /home/test.**


## $cd: To navigate between different folders.

- Syntax: **$cd desitantion_directory_name**
- Example: **$cd /home/test**
Here user will move to the **/home/test** directory from the current working directory.

## $rmdir: Removes empty directories from the directory lists.

## $cp: Copy files from one directory to another.

- Syntax: **$cp source_file_location destination_location_path
- Example: **$cp /home/test/file1.py   /home/Music/**
- Here **/home/test/file1.py** is source file name and **/home/Music/** destination directory path

## $rm: Delete files
- Syntax: **$rm filename**
- Example: **$rm /home/test/test.py**

## $cat: Display file contents on terminal
- Syntax: **$cat filename**
- Example: **$cat /home/test/test.py**

## $rmdir: Remove the directory 
- Syntax: **$rmdir directory_name**
- Example: **$rmdir /home/test/**
- NOTE: directory will be removed if it is empty, otheriwse use the option -f to forcefully delete it.

## $mv: Rename the files/directories 
- Syntax for files: **$mv source filename destination filename**
- Example: **$mv /home/test/file1.txt file2.txt**
- Syntax for directories: **$mv source directory destination direcroty**
- Example: **$mv /home/test test2**         

## $clear: Clears the terminal screen
- Syntax: **$clear**
- Example: **$clear**
