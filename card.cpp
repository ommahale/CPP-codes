#include<iostream>
using namespace std;
const int clubs=0;
const int diamonds=1;
const int spade = 3;
const int hearts = 2;
const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;
/////////////////////////////////////////////////////////////////////
struct cards{
    int number;
    int suit;
};
//////////////////////////////////////////////////////////////////////
int main(){
    cout<<"========================================================The Card Game======================================================"<<endl;
    cards chosen, prize, temp;
    int position;

    cards card1= {7, clubs};
    cout<<"First card is 7 of clubs"<<endl;

    cards card2= {4, spade};
    cout<<"Second card is 4 of spade"<<endl;

    cards card3= {ace, hearts};
    cout<<"The third card is ace of hearts"<<endl;

    cards card4= {king, diamonds};
    cout<<"Fourth card is king of diamonds"<<endl;

    prize=card3;
    cout<<"Swapping card 1 and 4"<<endl;
    temp=card1; card1= card4; card4=temp;

    cout<<"Swapping card 3 and 1"<<endl;
    temp=card3; card3= card1; card1=temp;

    cout<<"Swapping card 2 and 3"<<endl;
    temp=card2; card2=card3; card3=temp;

    cout<<"Now where(1, 2, 3 or 4) is ace of hearts\n";
    cin>>position;

    switch (position)
    {
    case 1:
        chosen=card1;
        break;
    case 2:
        chosen=card2;
        break;
    case 3:
        chosen=card3;
        break;
    case 4:
        chosen= card4;
        break;
    }
    if(chosen.number == prize.number && chosen.suit == prize.suit){
        cout<<"You guessed it right! You've won\n";
    }
    else{
        cout<<"Sorry youve lost!"<<endl;
    }
    return 0;


}