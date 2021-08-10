#include <iostream>
using namespace std;
class player {
    private:
    
    string name;
    double hp;
    int level;

    public:
    void getname(string & m){
        m=name;
    }
    string setname(){
        if(name.length()>3 &&name.length()<14 ){
            return name;
        }
        else  {
            cout << "error";
            exit(EXIT_FAILURE);
        }
        if(name.find('.') != string::npos ){
            cout << "error";
            exit(EXIT_FAILURE);
        }
        else if( name.find(',') != string::npos){
            cout << "error";
            exit(EXIT_FAILURE);
        }
        else if(name.find(';')!= string::npos){
            cout << "error";
            exit(EXIT_FAILURE);
        }
        else{
            return name;
        }

    }
    void gethp(int & u){
        u=hp;
    }
    int sethp(){
        if (hp==100){
            return hp;
        }
        else{
            cout << "error";
            exit(EXIT_FAILURE);
        }
    }
    void getLevel(int & y){
        y=level;
    }
    int setlevel(){
        if (level>0){
            return level;
        }
        else {
            cout <<"error";
            exit(EXIT_FAILURE);
        }
    }

};
int main(){
    player monster;
    cout << "enter your name";
    string m{};
    cin >> m ;
    
    monster.getname(m);
    monster.setname();
    
    cout <<"enter your hp";
    int u;
    cin >> u;
    
    monster.gethp(u);
    monster.sethp();
   
    cout << "enter your level";
    int y;
    cin >> y;
   
    monster.getLevel(y);
    monster.setlevel();
}
