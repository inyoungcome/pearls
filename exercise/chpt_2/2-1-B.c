#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


int main(int argc, char* argv[])
{
    //char*   m    = argv[1];
    //int     nn   = (int)(*argv[2]);
    //int     n    = strlen(m);

    char m[] = "abcabcabcdefghij123412451234klmnopq";
    int nn = 15;
    int n = strlen(m);

    char* tmp = (char *)malloc(sizeof(char) * (n+1));

    assert(tmp != NULL);
    //int j = 0;
    //// one
    //int i = 0;
    //for(i = nn; i < n; i++){
    //    tmp[j++] = m[i];
    //}
    //for (j = 0,i = n - nn; i < n; i++){
    //    tmp[i] = m[j++];
    //}
    //tmp[n] = '\0';
    //printf("%s\n", tmp);

    ////two
    //for (i = 0; i < n; i++){
    //    tmp[(i+n-nn)%n] = m[i];
    //}
    //tmp[n] = '\0';
    //printf("%s\n", tmp);
    
    //three
   // char t = m[0];
   // int i = 0;
   // int j = 0;
   // do {
   //     printf("[BEGIN|%d]i=%d nn=%d\n",j, i,nn);
   //     printf("%d\n", nn%n);
   //     m[i] = m[nn%n];
   //     i = nn%n;
   //     nn +=nn;
   //     printf("[END|%d]i=%d nn=%d\n",j++,i,nn);
   //     
   // }while((nn%n)!= 0);
   // m[i] = t;
   // printf("[FINAL]%s\n", m);

    //four
    int cur = 0;
    int start = 0;
    int step = nn;
    int next_step = start;
    int count = 0;
    int total_l = n;
    int t = m[start];

    do{
        if (next_step == start){
            m[cur] = t;
            start += 1;
            printf("%d|%d\n", start, step);
            assert(start < step);
            t = m[start];
            next_step = start;
        }else{
            m[cur] = m[next_step];
        }

        cur = next_step;
        next_step += step;
        next_step = next_step%total_l;
        ++count;

    }while(count <= total_l);
    printf("%s\n",m);

    return 0;
}
        


