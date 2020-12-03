#include <iostream>
#include<assert.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

class MV

{
    private:  char*nume,*mail,*adresa;
              int nr_telefon,user_password ,r;
              static int nr;


  public: MV(char*,char*,char*,int,int,int);
          inline void afisare();
          get_user_password();
         ~MV();
          MV();
          friend int get_r(MV&);
          static int get_nr();

};
int MV::nr=0;

    MV::MV(char*N,char*M,char*A,int n,int d,int a)
{
    nume=new char[strlen(N)+1];
    strcpy(nume,N);
    assert(nume!=0);
    mail=new char[strlen(M)+1];
    strcpy(mail,M);
    assert(mail!=0);
    adresa=new char[strlen(A)+1];
    strcpy(adresa,A);
    assert(adresa!=0);
    nr_telefon=n;
    user_password=d;
    r=a;
    nr++;
}

void MV::afisare()
{
    cout<<"\n Spider Electronics";
    cout<<"\n SpiderE@yahoo.com";
    cout<<"\n Bucuresti,Str.Eliade,nr 21";
    cout<<"\n 0751453455";
    cout<<"\n";
    cout<<"\nClasificat in vanzari pe locul:";
}
MV::MV()
{   }

MV::~MV()

{ delete nume;
  delete mail;
  delete adresa;
  --r;
}
 int get_r(MV&x)
  {return x.r=1;}

 int MV::get_nr()
{ return nr;}

MV::get_user_password()
{
string username;
string password;
do {
  cout << "\nUsername: ";
  getline(cin, username);
  if (username == "Cristache") {
    cout << "\nPassword: ";
    getline(cin, password);
    if (password != "1010") {
      cout << "\ninvalid password->try again." <<endl;
    }
  } else {
    cout << "\ninvalid username->try again." <<endl;
  }
} while (password != "1010");

}
class Produse

{
    protected: char*laptop,*pc,*tv;
              int garantie;


  public:Produse(char*,char*,char*,int);
         inline void afisare();
          gestiune();
         ~Produse();
          Produse();
};


class produse_noi:public Produse
{
    protected: char*tablete,*gaming,*telefoane;


    public:produse_noi(char*,char*,char*,int,char*,char*,char*);
          inline void afisare();
          studiu_p();
          int gestiune_promotie();
         ~produse_noi();
          produse_noi();

};



    Produse::Produse(char*N,char*M,char*A,int n)
{
    laptop=new char[strlen(N)+1];
    strcpy(laptop,N);
    assert(laptop!=0);
    pc=new char[strlen(M)+1];
    strcpy(pc,M);
    assert(pc!=0);
    tv=new char[strlen(A)+1];
    strcpy(tv,A);
    assert(tv!=0);
    garantie=n;

}
void Produse::afisare()
{
    cout<<"\nModele:";
    cout<<"\n Laptop:"<<laptop;
    cout<<"\n Pc:"<<pc;
    cout<<"\n Televizoare LED:"<<tv;
    cout<<"\n Garantie:"<<garantie;
    cout<<"\n";
}
Produse::Produse()
{   }

Produse::~Produse()

{ delete laptop;
  delete pc;
  delete tv;

}

Produse::gestiune()
{ int x,a,b,v,r,s,r1,r2;
    cout<<"\nGestiune produselor electronice";
    cout<<"\nIntroduceti numarul produselor:";
    cout<<"\nLaptop:";
    cin>>x;
    cout<<"\nTelevizoare LED:";
    cin>>a;
    cout<<"\nPc:";
    cin>>b;
    v=x+a+b;
    cout<<"\n";
    cout<<"\nStocul  produselor este:"<<v;
    cout<<"\nCare este stocul minim impus:";
    cin>>s;
 if(x<=v)
    { r=s-x;
     cout<<"\nS-a realizat comanda stabilita de laptop:"<<r;}
 if(a<=v)
    { r1=s-a;
     cout<<"\nS-a realizat comanda stabilita de TV LED:"<<r1;}
 if(b<=v)
    { r2=s-b;
     cout<<"\nS-a realizat comanda stabilita PC:"<<r2;}
}

produse_noi::produse_noi(char*N,char*M,char*A,int n,char*t,char*g,char*h):Produse(N,M,A,n)
{
    tablete=new char[strlen(t)+1];
    strcpy(tablete,t);
    assert(tablete!=0);
    gaming=new char[strlen(g)+1];
    strcpy(gaming,g);
    assert(gaming!=0);
    telefoane=new char[strlen(h)+1];
    strcpy(telefoane,h);
    assert(telefoane!=0);
}


void produse_noi::afisare()
{
    Produse::afisare();
    cout<<"\nModele produse noi:";
    cout<<"\n Tablete:"<<tablete;
    cout<<"\n Gaming:"<<gaming;
    cout<<"\n Telefoane:"<<telefoane;
    cout<<"\n";
}

produse_noi::produse_noi()
{   }

produse_noi::~produse_noi()

{ delete tablete;
  delete gaming;
  delete telefoane;
}
produse_noi::studiu_p()
{
     cout<<"\nStudiu de piata.";
int r,j,x;

 cout<<"\nIntroduceti rezultatul sondajului de opinie pozitiv(%):";
 cin>>r;
 cout<<"\n Total cereri de piata(Telefoane,Gaming,Tablete):";
 cin>>j;
 cout<<"\nIntorduceti feedback-ul clientilor pozitiv(%):";
 cin>>x;
if(r<j,x>=r)
    cout<<"Studiu de piata corespunzator";
else
    cout<<"Studiu de piata necorespunzator pentru urmatoarele modele ";
}

produse_noi::gestiune_promotie()

{ cout<<"\nResigilabile si promomti";
     int x;
     cout<<"\nProduse laptop:";
     cin>>x;
     if(x>=5)
     cout<<"\nProdus in promotie";
     else
      cout<<"\nStoc ok";
    int y;
     cout<<"\nProduse pc:";
     cin>>y;
     if(y>=9)
     cout<<"\nProdus in promotie";
     else
      cout<<"\nStoc ok";
int a;
     cout<<"\nProduse tv:";
     cin>>a;
     if(a>=5)
     cout<<"\nProdus in promotie";
     else
      cout<<"\nStoc ok";

}

class furnizor
 {
      public: virtual void afisare();
              virtual float livrare()=0;
 };


 class furnizor_n:public furnizor

  {
        private:int t;
        public: furnizor_n();
                furnizor_n(int);
                furnizor_n(furnizor_n&);
                void afisare();
                float livrare();
  };


  void furnizor::afisare()
  {
      cout<<"\n";
      cout<<"\nFurnizor:Apex electronix";

  }


  float furnizor::livrare()
  {
   return 0.0;
  }

  furnizor_n::furnizor_n()
  {t=0;}

  furnizor_n::furnizor_n(int r)
  {t=r;}

  furnizor_n::furnizor_n(furnizor_n&x)
  {t=x.t;}

  void furnizor_n::afisare()
    {
        furnizor::afisare();
        cout<<"\nPrecizie de livrare(h)=";
    }
    float furnizor_n::livrare()
    { return 280.5/t;}


int main()
{
   MV ob,ob10,ob11;
   ob.afisare();
   cout<<""<<get_r(ob);
   cout<<"\nReclamatii:"<<ob.get_nr();
   ob11.get_user_password();

   Produse ob1("Acer","Samsun","eXpert",3),ob2("Dell","Philips","Asus ",2),ob4;
  ob1.afisare();
  ob2.afisare();
  ob4.gestiune();

  produse_noi ob5("Acer500","Samsun21X","eXpert30Xc",3,"Samsun Galaxy","Microsoft Xbox One Slim","iphone x"),ob6("Acer j+","Samsun k4","eXpert 2G",3,"Asus ZenPod","Microsoft Xbox one Scorpion","iphone 8 "),ob7,ob8;
  ob7.studiu_p();
  ob5.afisare();
  ob2.afisare();
  ob8.gestiune_promotie();

  furnizor*ptr;
  furnizor_n ob9(50);
  ptr=&ob9;
  ptr->afisare();
  cout<<ptr->livrare();
}







