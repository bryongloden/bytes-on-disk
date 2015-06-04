//
//  main.c
//  bytes-on-disk
//
//  Created by Bryon Gloden on 6/4/15.
//  Copyright (c) 2015 Bryon Gloden. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE * pFile;
    char buffer[] = { ' ' };
    pFile = fopen ("myfile.bin", "w+b");
    int i;
    for (i=0; i<30439314; i++)
    {
        fwrite (buffer, sizeof(char), sizeof(buffer), pFile);
    }
    fclose (pFile);
    return 0;
}

// [1]
// [2] http://www.programiz.com/c-programming/c-file-input-output
// [3]
// [4] http://www.tutorialspoint.com/c_standard_library/c_function_fwrite.htm
// [5]
// [6] http://stackoverflow.com/questions/9180006/how-to-use-fread-and-fwrite-functions-to-read-and-write-binary-files
// [7]
// [8] http://www.cplusplus.com/reference/cstdio/fwrite/
// [9]
// [10] http://www.programmingsimplified.com/c-program-examples

