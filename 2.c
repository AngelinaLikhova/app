#include <stdio.h>
int main(void)
{
    long double result;
    FILE *f,*ff;

    f=fopen("input.txt","r");
    if (!f) {
        fprintf(stderr, "error opening data file\n");
        return -1;
    }
    int last=0
    if (fscanf(f,"%d",&last)!=1) {
        fprintf(stderr, "cannot read first element\n");
        fclose(f);
        return -1;
    }
    result=max_distance(f);

    if (result==-1) {
        fprintf(stderr,"file is empty\n");
        return -1;
    }
    fclose(f);
    ff=open("output.txt","w");
    if(!ff) 
    {
        fprintf(stderr, "cannot open file output.txt\n");
        return -1;
    }
    fprintf(ff, "max distance between local maximums: %lld\n", result);
    fclose(ff);
    return 0;
}
