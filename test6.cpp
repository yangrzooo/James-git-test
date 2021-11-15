#include <stdio.h>
#include <stdlib.h>
int main(void){
 	char *p = malloc(0);
	if (p != NULL){
		printf("size of pointer: %lu apply buffer is successful:  Address: %p\n", sizeof(p), p);
//		printf("apply buffer is successful: \n Address-: 0x%lx\n", p);
		free(p);
		p = NULL;
	}else{
		printf("failed to apply buffer\n");
	}
	printf("STDC info:%d\n", __STDC__);
	printf("STDC info:%ld\n", __STDC_VERSION__);

        return 0;
}
