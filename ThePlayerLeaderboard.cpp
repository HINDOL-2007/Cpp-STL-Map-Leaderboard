#include <iostream>
#include <string>
#include<map>
using namespace std;

void display(map<string,int> &mp){
    map<string , int> :: iterator iter ;
    cout<<"\n\nLeaderboard Scores -->"<<endl;
    for(iter = mp.begin(); iter != mp.end(); iter++){
        cout<<"Player Name :- "<<iter->first<<"     |     Scores :- "<<(*iter).second <<endl;
    }
}



int main(){
    map<string, int> leaderboard;
    string name;
    int score,player_count;
    leaderboard["Goku"]=999;
    cout<<"Top Player's Score is already in Leaderboard ."<<endl;
    display(leaderboard);
    cout<<"Enter Total Player Count :- ";
    cin>>player_count;

    for(int i = 0 ; i < player_count ; i ++){
        cin.ignore();
        cout<<"\nEnter player name :- ";
        getline(cin,name);
        cout<<name<<"'s Score :- ";
        cin>>score;
        leaderboard.insert({{name,score}});
    }

    
    display(leaderboard);
    return 0;
}