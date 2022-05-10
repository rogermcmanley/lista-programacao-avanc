int main(){
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p, *p+2, **&p, 3**p, **&p+4);
}

/* o que será impresso:

p=4094
*p+2 = 7
**&p = 5
3**&p = 15
**&p+4 = 9 */

