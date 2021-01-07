#include<bits/stdc++.h>
using namespace std;
class room{
public:vector<string>door_open;
       vector<string>items_available;
       vector<bool>monster;
};
int main()
{unordered_map<string,int>mp={{"North",7},{"South",-7},{"East",1},{"West",-1}};
    room r1[42];
    vector<string>person;
    int killed=0;
    int total=20;
    int Energy=100;
r1[0].door_open={"North"};
r1[1].door_open={"North","East"};
r1[2].door_open={"East","West"};
r1[3].door_open={"North","East","West"};
r1[4].door_open={"North","East","West"};
r1[5].door_open={"North","East","West"};
r1[6].door_open={"North","West"};
r1[7].door_open={"North","South","East"};
r1[8].door_open={"North","South","East","West"};
r1[9].door_open={"North","East","West"};
r1[10].door_open={"North","South","East","West"};
r1[11].door_open={"North","South","East","West"};
r1[12].door_open={"North","South","East","West"};
r1[13].door_open={"North","South","West"};
r1[14].door_open={"North","South","East"};
r1[15].door_open={"North","South","East","West"};
r1[16].door_open={"North","South","East","West"};
r1[17].door_open={"North","South","East","West"};
r1[18].door_open={"North","South","West","East"};
r1[19].door_open={"North","South","East","West"};
r1[20].door_open={"North","South","West"};
r1[21].door_open={"North","South","West"};
r1[22].door_open={"North","South","East","West"};
r1[23].door_open={"North","South","East","West"};
r1[24].door_open={"North","South","East","West"};
r1[25].door_open={"North","South","East","West"};
r1[26].door_open={"North","South","East","West"};
r1[27].door_open={"North","South","West"};
r1[28].door_open={"North","South","East"};
r1[29].door_open={"South","East","West","North"};
r1[30].door_open={"South","East","West","North"};
r1[31].door_open={"South","East","West","North"};
r1[32].door_open={"South","East","West","North"};
r1[33].door_open={"South","East","West","North"};
r1[34].door_open={"South","North","West"};
r1[35].door_open={"South","East"};
r1[36].door_open={"South","West","East"};
r1[37].door_open={"South","West","East"};
r1[38].door_open={"South","West","East"};
r1[39].door_open={"South","West","East"};
r1[40].door_open={"South","West","East"};
r1[41].door_open={"South","West"};
r1[0].items_available={"Baggage","gernade"};
r1[1].items_available={"knife","pan"};
r1[2].items_available={"goggles"};
r1[3].items_available={"sniper","medikit"};
r1[4].items_available={"energy drink"};
r1[5].items_available={"goggles"};
r1[6].items_available={"sniper","pan"};
r1[7].items_available={"clothes"};
r1[14].items_available={"Baggage"};
r1[13].items_available={"knife","pan"};
r1[12].items_available={"clothes"};
r1[11].items_available={"sniper","medikit"};
r1[10].items_available={"energy drink"};
r1[9].items_available={"goggles"};
r1[8].items_available={"sniper","pan"};
r1[15].items_available={"clothes"};
r1[35].items_available={"Baggage"};
r1[36].items_available={"knife","pan"};
r1[37].items_available={"gernade"};
r1[38].items_available={"sniper","medikit"};
r1[39].items_available={"energy drink"};
r1[40].items_available={"goggles"};
r1[34].items_available={"sniper","pan"};
r1[33].items_available={"clothes"};
r1[32].items_available={"Baggage"};
r1[31].items_available={"knife","pan"};
r1[30].items_available={"goggles"};
r1[29].items_available={"sniper","medikit"};
r1[28].items_available={"energy drink"};
r1[27].items_available={"goggles"};
r1[26].items_available={"sniper","pan"};
r1[25].items_available={"clothes"};
r1[21].items_available={"Baggage","gernade"};
r1[22].items_available={"knife","pan"};
r1[23].items_available={"sword"};
r1[24].items_available={"sniper","medikit"};
r1[19].items_available={"energy drink"};
r1[18].items_available={"goggles"};
r1[17].items_available={"sniper","pan"};
r1[16].items_available={"clothes"};
r1[20].items_available={"Baggage","gernade"};
r1[41].items_available={"knife","pan"};

r1[0].monster={false};
r1[1].monster={true};
r1[2].monster={true};
r1[3].monster={false};
r1[4].monster={true};
r1[5].monster={true};
r1[6].monster={true};
r1[7].monster={false};
r1[14].monster={true};
r1[13].monster={false};
r1[12].monster={true};
r1[11].monster={false};
r1[10].monster={true};
r1[9].monster={false};
r1[8].monster={true};
r1[15].monster={false};
r1[35].monster={true};
r1[36].monster={true};
r1[37].monster={true};
r1[38].monster={false};
r1[39].monster={true};
r1[40].monster={false};
r1[34].monster={true};
r1[33].monster={false};
r1[32].monster={true};
r1[31].monster={false};
r1[30].monster={true};
r1[29].monster={false};
r1[28].monster={true};
r1[27].monster={false};
r1[26].monster={true};
r1[25].monster={false};
r1[21].monster={true};
r1[22].monster={false};
r1[23].monster={false};
r1[24].monster={true};
r1[19].monster={false};
r1[18].monster={true};
r1[17].monster={false};
r1[16].monster={true};
r1[20].monster={false};
r1[41].monster={true};
cout<<"***WELCOME TO THE WORLD OF ROOMS***\n";
string name;
cout<<"Enter your name:";
cin>>name;
cout<<"You are heading to a puzzle where there will be a number of monsters and restricted paths.Take care!";
int x=0,sniper=0,pan=0;
do
{   cout<<"\nYour current status";
    cout<<"\nYou are in room:"<<x;
    if(person.size()==0)
      cout<<"\nYou have no item yet!";
    else
    {cout<<"\nYou have items:";
    for(auto it:person)
       {cout<<it<<" ";}}
    cout<<"\nYour energy is:"<<Energy;
    cout<<"\nMonsters killed by You:"<<killed<<"\nRemaining Monsters are:"<<23-killed;
    if(r1[x].monster[0]==true)
     {cout<<"\nOh no! there is a monster!!! Kill it or run for life!!!";
     if(find(person.begin(),person.end(),"sword")!=person.end())
     {cout<<"\nYou killed a Monster with sword";
     r1[x].monster[0]=false;
     killed++;
     }
     else if(find(person.begin(),person.end(),"knife")!=person.end())
     {cout<<"\nYou killed a Monster with knife";
      cout<<"\nKnife can be used only once you used it!";
      person.erase(find(person.begin(),person.end(),"knife"));
      r1[x].monster[0]=false;
     killed++;
      }
      else if(find(person.begin(),person.end(),"gernade")!=person.end())
     {cout<<"\nYou killed a Monster with gernade.Gernade can be used only once you used it!!";
      person.erase(find(person.begin(),person.end(),"gernade"));
      r1[x].monster[0]=false;
     killed++;
      }
     else if(find(person.begin(),person.end(),"sniper")!=person.end())
     {cout<<"\nYou killed a Monster with sniper";
      cout<<"\nNow you can use same sniper only:"<<3-(sniper%4)<<"times";
     sniper++;
     if(sniper%4==0)
        {person.erase(find(person.begin(),person.end(),"sniper"));}
     r1[x].monster[0]=false;
     killed++;
     }
     else if(find(person.begin(),person.end(),"pan")!=person.end())
     {
     cout<<"\nYou killed a Monster with pan!Now you can use it only"<<1-(pan%2)<<"times";
     pan++;
     if(pan%2==0)
       {person.erase(find(person.begin(),person.end(),"pan"));}
     
      r1[x].monster[0]=false;
     killed++;}
     else 
        {if(Energy>50)
          {cout<<"\nEnergy reduced by 50!!!You can still run for life";
          Energy-=50;}
        else
        {cout<<"\nSorry!"<<name<<" Monster killed you!!! you loose!!!";
        break;}}
     }
    string s;
    do
    {if(r1[x].items_available.size()==0)
    {cout<<"\nThere is no item in this room";
    break;}
    cout<<"\nItems available in this room are:";
    for(auto it:r1[x].items_available)
       {
         cout<<it<<" ";}
      char ch;
    cout<<"\nWant to pick any item:Y/N?";
     cin>>ch;
     if(ch=='N')
       break;
     else
     {   if(r1[x].items_available.size()==1)
            {if(r1[x].items_available[0]=="energy drink")
              {Energy+=50;
            cout<<"Energy increased by 50 using energy drink";}
            else if(r1[x].items_available[0]=="medikit")
              {Energy+=100;
              cout<<"Energy increased by 100 using medikit";}
            person.push_back(r1[x].items_available[0]);
            r1[x].items_available.erase(find(r1[x].items_available.begin(),r1[x].items_available.end(),r1[x].items_available[0]));
            }
        else
         {cout<<"Which item?";
         cin>>s;
         if(s=="energy drink")
           {Energy+=50;
           cout<<"\nEnergy increased by 50 using energy drink";}
         else if(s=="medikit")
           {Energy+=100;
           cout<<"\nEnergy increased by 100 using medikit";}
         person.push_back(s);
         r1[x].items_available.erase(find(r1[x].items_available.begin(),r1[x].items_available.end(),s));
     }}
     
     }while(1);
    cout<<"\nthe doors which are open here are in direction:";
    for(auto it:r1[x].door_open)
       {cout<<it<<" ";}
    cout<<"\nIn which direction you would like to move on:";
    cin>>s;
    x=x+mp[s];
if(killed==23)
        {cout<<"\nCongratualtions!"<<name<<"you killed all the monsters! you won the game!!!";
        break;}
} while (1);

}