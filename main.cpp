 #include <iostream>

using namespace std;

void arrange(int x[]) {

    for(int n=0; n<8;n++){
        for(int n2=n+1;n2<8;n2++){
           if( x[n]==x[n2] ){
              for(int y=n2;y<8;y++){
                  x[y]=x[y+1];

              }

           }

        }
    }


}

int main()
{
    int x[8]= {2,3,5,2,4,5,8,1};
    arrange(x);
    cout << "Numeros" << endl;
    for(int n=0;n<8;n++)
        cout << x[n]<<endl;


    return 0;
}

