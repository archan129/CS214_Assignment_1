#include<stdio.h>
#include<stdlib.h>

/*void triangle(unsigned width)
{
    unsigned i, j;
    
    i = 0;
    while (i <= width) {
        j = 0;
        while (j < i) {
            putchar('*');
            ++j;
        }
        putchar('\n');
        ++i;
    }
}*/

void triangle(unsigned width) //with for loops instead of while loops
{
    unsigned i, j;
    
    i = 0;
     for(i = 1; i <= width; ++i){ //while (i <= width)
        j = 0;
        for(j = 0; j < i; ++j) { //while (j < i)
            putchar('*');
            //++j;
        }
        putchar('\n');
        //++i;
    }
}

void v_triangle(unsigned width) //upside down triangle
{
    unsigned i, j;
    
    
     for(i = 0; i <= width; ++i){
        
        for(j = 0; j < width-i; ++j) { 
            putchar('*');
            
        }
        putchar('\n');

    }
}

void h_triangle(unsigned width) //right side vertical triangle
{
     unsigned i, j;
    
    
     for(i = 0; i <= width; ++i){
	for(unsigned k = 0; k < i; k++){
		putchar(' ');
	}
        
        for(j = 0; j < width-i; ++j) { 
            putchar('*');
            
        }
        putchar('\n');

    }
}

int main(int argc, char* argv[argc+1]){
	if(argc > 3 || argc == 1){ // make sure there is either one or two inputs 
		return EXIT_FAILURE;
	}

	unsigned w = atoi(argv[1]); //converting first input into number for width

	if(w == 0){
		return EXIT_FAILURE;
	}
	
	if(argc == 3){ //check to see of argv[2] exists
		if(*argv[2] == 'v'){ //if input is v
			v_triangle(w);
		}else if(*argv[2] == 'h'){ //if input is h
			h_triangle(w);
		}else{ //checks to make sure that theres no input for argv[2] other than v or h
			return EXIT_FAILURE;	
		}
	}else{ //if second input is blank
		triangle(w);	
	}

	return EXIT_SUCCESS;


}
