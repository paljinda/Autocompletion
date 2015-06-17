#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
   char pre[50];
    char ch;
    int fr;
    int c;
    struct node *p[26];
};

struct trie {
    struct node *root;
};
struct trie *t; 
struct node *p;

struct node *st;

struct sort{
    char *a;
    int fr;
    struct sort *l,*r;
};
struct sort  *si;
//struct node t[1000];
int fr,re;
int x=0;
//int y=0;
void insert(char ch)
{
    int i,j,k,l,m,n;
    struct node *s;
    for(i=0;i<=((t->root->c)-1);i++)
    {
        if( t-> root -> p[i]!=NULL )
        if( t->root->p[i]->ch == ch )
            {
                st=t->root->p[i];

                return;
            }
    }
    s = (struct node *)malloc(sizeof(struct node));
    st=t->root;
    st->p[st->c]=s;
      st->p[st->c]->ch=ch;
      st->p[st->c]->pre[0]='\0';
    st->p[st->c]->fr=0;
    st->p[st->c]->c=0;
    (st-> c)++;
    st->pre[0]='\0';
    for(i=0;i<26;i++)
    {
        s->p[i]=NULL;
    }
    st=st->p[((st->c)-1)];
   printf("\nzzzzzzzzzz");
}

void insert1(char ch, char buf[], int n)
{
    int i,j,k,l,m;
    struct node *s;
    for(i=0;i<=((st->c)-1);i++)
    {
        if( st-> p[i]!=NULL )
        if( st->p[i]->ch == ch )
            {
                st=st->p[i];
                return;
            }
    }
    s = (struct node *)malloc(sizeof(struct node));
    st->p[st->c]=s;
    st->p[st->c]->ch=ch;
    st->p[st->c]->fr=0;
    st->p[st->c]->c=0;
    st-> c++;
    for(i=0;i<n;i++)
    {
    st->p[(st->c)-1] ->pre[i]=buf[i];
    }
    st->p[(st->c)-1] ->pre[i]='\0';
    for(i=0;i<26;i++)
    {
        s->p[i]=NULL;
    }
    st=st->p[((st->c)-1)];
    printf("\nppppppppppp");
}

void insert2(char buf[], int n)
{
    int i,j,k,l,m;
    struct node *s;
    st->fr=st->fr+1;
    printf("\nqqqqqqqqqqqqqq");
 }

void print(struct node *s)
{
    int i,j,k,l,m,n;

    for(i=0;i<=((s->c)-1);i++)
    {
        if((s->p[i])!=NULL)
        {
            if(s->p[i]->fr!=0)
            printf("\n%d",s->p[i]->fr);

        if(s->p[i]->fr!=0)
        {
            printf("   %s",s->p[i]->pre);
            printf("%c",s->p[i]->ch);
                      
        }
        }
        if(s->p[i]!=NULL)
          print(s->p[i]);

    }
    return;
}

show(struct sort *p)
{
    int i,j,k,l,m;
    struct sort *poin;
 //   printf("\ncccccccccc");
    if(p!=NULL)
    {
         if(p->fr!=0)
         {
             printf("\n %s",p->a);
         }
         if(p->l!=NULL)
         show(p->l);
         if(p->r!=NULL)
         show(p->r);

    }
}



int search(char ch)
{
    int i,j,k,l,m,n;
    char ch2, ch1;
    for(i=0;i<26;i++)
    {
        if(st->p[i]!=NULL)
        {
            if(st->p[i]->ch==ch)
            {
                st=st->p[i];
                return 1;
            }
            else 
            {
             }
        }
    }
  return 0;

}


void heapify1()
{
    int i,j,k,l;
    char z[30];
    struct sort *poin;
    poin=si;
//    printf("\n    %s",poin->a);
    while(poin->l!=NULL || poin->r!=NULL)
    {
       // if(poin->l!=NULL)
      //  printf("\nmmmmmmmmmmm");
     //   printf(" %d  %d", poin->fr ,poin->l->fr);
        if((poin->l!=NULL)&&(poin->l->fr==0))
        {
              strcpy(z,poin->l->a);
              strcpy(poin->l->a,poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->l->fr;
              poin->l->fr=j;
              poin=poin->l;
          //    printf("\n1nnnnnnnn");

        }
        else  if((poin->r!=NULL)&&(poin->r->fr==0))
        {
              strcpy(z,poin->r->a);
              strcpy(poin->r->a,poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->r->fr;
              poin->r->fr=j;
              poin=poin->r;
            //  printf("\n2pppppppppppp");

        }
        else 
        {
            break;
          //  printf("\n3qqqqqqqqqqqq");
        }
    }
///    printf("\n--------------");
   // show(si);
}

    /*    if((poin->l!=NULL)&&(poin->l->fr < poin->fr)&&(poin->l->fr <= poin->r->fr))
        {
          //  printf("\nqqqqqqqqqqqqqqqqq"); 
            strcpy(z,poin->l->a);
              strcpy(poin->l->a,poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->l->fr;
              poin->l->fr=j;
              poin=poin->l;
            //  heapify(poin);
        }
        
        else if((poin->r!=NULL)&&(poin->r->fr < poin->fr)&&(poin->r->fr <= poin->l->fr))
        {
          //  printf("\nppppppppp"); 
            strcpy(z,poin->r->a);
              strcpy(poin->r->a, poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->r->fr;
              poin->r->fr=j;
              poin=poin->r;
              printf("\n%s",poin->a);
              //heapify(poin);
        }
        else 
            break;*/
  //   }
//    printf("  \n%s ",poin->a);

//}





void heapify()
{
    int i,j,k,l;
    char z[30];
    struct sort *poin;
    poin=si;
  //  printf("\n    %s",poin->a);
    while(poin->l!=NULL || poin->r!=NULL)
    {
       // if(poin->l!=NULL)
    //    printf("\nmmmmmmmmmmm");
     //   printf(" %d  %d", poin->fr ,poin->l->fr);
        if(((poin->l!=NULL)&&(poin->r!=NULL)&&(poin->l->fr < poin->fr)&&(poin->l->fr <= poin->r->fr))||((poin->l!=NULL)&&(poin->r==NULL)&&(poin->l->fr < poin->fr)))

        {
          //  printf("\nqqqqqqqqqqqqqqqqq"); 
            strcpy(z,poin->l->a);
              strcpy(poin->l->a,poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->l->fr;
              poin->l->fr=j;
              poin=poin->l;
            //  heapify(poin);
        }
        
        else if(((poin->r!=NULL)&&(poin->l!=NULL)&&(poin->r->fr < poin->fr)&&(poin->r->fr <= poin->l->fr))||((poin->r!=NULL)&&(poin->l==NULL)&&(poin->r->fr < poin->fr)))

        {
          //  printf("\nppppppppp"); 
            strcpy(z,poin->r->a);
              strcpy(poin->r->a, poin->a);
              strcpy(poin->a,z);
              j=poin->fr;
              poin->fr=poin->r->fr;
              poin->r->fr=j;
              poin=poin->r;
          //    printf("\n%s",poin->a);
              //heapify(poin);
        }
        else 
            break;
     }

}



int maxheap( struct sort *poin, int y)
{
    int i,j,k,l,m,n;
    struct sort *p,*f;
  //  printf("\n%s",poin->a);
    if((poin!=NULL)&&(poin->fr!=0)&&(si->fr < poin->fr))
    {
        //poin->l=si->l;
        //poin->r=si->r;
        //si=poin;
        strcpy(si->a,poin->a);
        si->fr=poin->fr;
        y++;
       //   printf("\nppppppppppp");
   //    printf("\n%s",si->a);
     /*   if(y<=10)
        {
               heapify1();

         //   printf("\n%d",y);
        }
        else*/ 
            heapify();

        
       //  printf("\n%s",si->a);
    }
    return y;
   
}

int makenode(struct node *q, int y)
{
    int i,j,k,l,m,n;
    struct sort *poin;
    l=y;
    if(q!=NULL)
    {
     poin  =(struct sort *)malloc(sizeof(struct sort));
     poin->fr = q->fr;
     poin->a = (char *) malloc (((strlen(q->pre))+2)*sizeof(char));
        
     for(i=0;i<((strlen(q->pre)));i++)
     {
          poin->a[i] = q->pre[i];
     }
     poin->a[i++]=q->ch;
     poin->a[i]='\0';
     poin->l=poin->r=NULL;
//     printf("\npal  %s",poin->a);
        // y++;
    // if(poin->fr!=0)
     for(i=0;i<26;i++)
     {
         if(q->p[i]!=NULL)
         {
         //    printf(" \n%d  %c",i,q->p[i]->ch);
            l= makenode(q->p[i],y);
         }
       //  printf("\nnew");
     }
         l=maxheap(poin,l);
    }
    return l;
}


void createheap()
{
    int i,j,k,l,z;
    struct sort *so;
    struct sort *t[10];
     so=(struct sort *)malloc(sizeof(struct sort));
      so->a = (char *) malloc (50*sizeof(char));
    //  printf("\ndddddddddddd");
     so->a[0]='\0';
     so->fr=0;
     so->l=so->r=NULL;
     si=so;
     t[0]=si;
    for(i=1;i<10;i++)
    {
        so=(struct sort *)malloc(sizeof(struct sort));
        so->fr = 0;
        so->l=so->r=NULL;
         so->a = (char *) malloc (50*sizeof(char));
           so->a[0]='\0';
        //so->a = (char *) malloc (((strlen(poin->pre))+2)*sizeof(char));
        t[i]=so;
  //      printf(" %d\n",i);
    }

    for(i=0;i<4;i++)
    {
        t[i]->l=t[2*i+1];
        t[i]->r=t[2*i+2];
    }
     t[4]->l=t[9];

}


int main()
{
    int i,j,k,l,m,n,z,y;
    char ch,ch1,ch2,ch3, buffer[50];
    FILE *fp;
    char str[50];
    //char str[1000]="is good mi ,,,    am.,.,.,. good 5455girl girl mi going";
    struct sort *poin;
    fp=fopen("new.txt","r");
    
       if(fp==NULL)
        {
             printf("ERROR");
         }
        
    ch1=' ';
    fr=re=-1;
    t = (struct trie *)malloc(sizeof(struct trie));
    t->root=(struct node *)malloc(sizeof(struct node));
    t->root->c=0;
    t->root->fr=0;
    t->root->ch=' ';
    t->root->pre[0]='\0';
    for(i=0;i<26;i++)
    {
       t->root->p[i] = NULL ;
    }
   j=0;
   k=0;
  // print();
   
  //ch3=fgetc(fp);
  //printf("%c",ch3);
 ch3=' ';
  while(ch3!=EOF)
  {
   ch3=' ';
   ch3=fgetc(fp);
   printf("%c",ch3);
    while((ch3>=65 && ch3<91)||(ch3>=97 && ch3<123))
   {
          
        str[k++]=ch3;
        ch3=fgetc(fp);
        printf("%c",ch3);
   }
   str[k]='\0';
      k=0;                         
   while(1)
   {
       if(ch1!='\0')       
       ch2=str[k++];
         if(ch1=='\0')
         {
                   break;
         }
         else if(((ch2>=65 && ch2<91)||(ch2>=97 && ch2<123))&& (ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))
          {
             
             j=0;
            /// printf("\nbbbbbbb");
              buffer[j++]=ch2;
              insert(ch2);
              ch1=ch2;
              continue;
                                    
          }
         else if(((ch2>=65 && ch2<91)||(ch2>=97 && ch2<123))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              buffer[j++]=ch2;
              insert1(ch2,buffer,j-1);
              ch1=ch2;
              continue;
          }
         else if((((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              buffer[j]='\0';
              insert2(buffer,j);
              ch1=ch2;  
              st=t->root;     
              continue;          
          }

         else if((((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))) 
          {
              ch1=ch2;
              continue;
          }        
   }
   ch1=' ';
   k=0;
   j=0;
   }
   fclose(fp);
   print(t->root);
   j=0;
   z=0;
   st=t->root;
   k=0;
   ch2='a';
   //print(t->root);
   ch1=' ';
   //fflush(stdin);
  // ch2=getchar();  
   scanf(" %c",&ch2);
  // printf("\n%c%c%c",ch2,ch1,ch2);
 //  buffer[j++]=ch2;
   while(ch2!=46)
   {
        printf("\naaaaaaaaa");
        if((ch2>=65 && ch2<91)||(ch2>=97 && ch2<123))
        {
           if(z==0)
           {
               k=search(ch2);
           }
           else 
           {
               k=0;
           }
            if(k==1)
            {
                y=0;
                si=NULL;
                buffer[j++]=ch2;
                createheap();
                l=makenode(st,y);
              //  fflush(stdout);
                show(si);
                ch1=ch2;
                        
            }
        
            else  
            {
                if((ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))
                {
             
                      j=0;
                      z=1;
                    //   printf("\nbbbbbbb");
                       buffer[j++]=ch2;
                        insert(ch2);
                       ch1=ch2;
                 //      continue;
                }
              else if((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123))
              {
                     buffer[j++]=ch2;
                     z=1;
                //   printf("\ncccccccc");
                     insert1(ch2,buffer,j-1);
                    ch1=ch2;
                   //  continue;
              }
            }
        }
         else if((z==0)&&(((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              st->fr=st->fr+1;
              st=t->root;
              j=0;
              z=0;
          }

         else if((z==1)&&(((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              buffer[j]='\0';
              insert2(buffer,j);
              ch1=ch2;   
              z=0;
              st=t->root;
              j=0;
          //    continue;          
          }

         else if((((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))) 
          {
              ch1=ch2;
              z=0;
              j=0;
              st=t->root;
          //    continue;
          }
          
   //  fflush(stdin);
 //  ch2=getchar();
 //  printf("\nDDDDDDDDDDD");
         scanf(" %c",&ch2);
         k=0;

   }
   
   if((ch2==46)&&((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
   {
        if((ch2>=65 && ch2<91)||(ch2>=97 && ch2<123))
        {
           if(z==0)
           {
               k=search(ch2);
           }
           else 
           {
               k=0;
           }
            if(k==1)
            {
                y=0;
                si=NULL;
                buffer[j++]=ch2;
                createheap();
                l=makenode(st,y);
              //  fflush(stdout);
                show(si);
                ch1=ch2;
                        
            }
        
            else  
            {
                if((ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))
                {
             
                      j=0;
                      z=1;
                    //   printf("\nbbbbbbb");
                       buffer[j++]=ch2;
                        insert(ch2);
                       ch1=ch2;
                 //      continue;
                }
              else if((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123))
              {
                     buffer[j++]=ch2;
                     z=1;
                //   printf("\ncccccccc");
                     insert1(ch2,buffer,j-1);
                    ch1=ch2;
                   //  continue;
              }
            }
        }
         else if((z==0)&&(((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              st->fr=st->fr+1;
              st=t->root;
              j=0;
              z=0;
          }

         else if((z==1)&&(((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1>=65 && ch1<91)||(ch1>=97 && ch1<123)))
          {
              buffer[j]='\0';
              insert2(buffer,j);
              ch1=ch2;   
              z=0;
              st=t->root;
              j=0;
          //    continue;          
          }

         else if((((ch2<65 || (ch2>=91&&ch2<97) || ch2>=123))||(ch2=='\0'))&& ((ch1<65 || (ch1>=91&&ch1<97) || ch1>=123))) 
          {
              ch1=ch2;
              z=0;
              j=0;
              st=t->root;
          //    continue;
          }
          
   //  fflush(stdin);
 //  ch2=getchar();
 //  printf("\nDDDDDDDDDDD");
       //  scanf(" %c",&ch2);
       //  k=0;

   }
   
   
   
 // printf("\n%c",ch2);
   print(t->root);

}





