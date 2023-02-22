#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void clear() {
  system("cls");
}

void pause() {
  system("pause");
}

void main_menu(){
  int menu;

  cout<<"\t\t\t\t\t\t\t\t\t\t"<<"We have a lot of interesting things, a large assortment, choose what you like"<<endl;
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"1. lumberjack"<<endl
  <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"2. Guess the number!"<<
  endl<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"3. Game Instructions"<<
  endl<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"4. Developer contact"<<endl;
}

void instructions(){
  int instruction;

  while(true)
  {
  clear();
  cout<<"You have reached the instructions section, select a game to read the corresponding"<<endl;
  cout<<"1. lumberjack"<<endl<<"2. Guess the number!"<<endl<<"3. Back to main menu"<<endl;
  cin>> instruction;

  switch (instruction)
  {
  case 1:

  clear();
  cout<<"You are a lumberjack, you can cut down your forest and get paid for it by selling firewood."<<endl<<"The player has 2 locations where he can sell them: "<<endl
  <<"- Legal market (the rate is always $100)"<<endl
  <<"- Illegal market (the rate varies from $100 to $150, but be careful, with a small chance you can be deceived and take away everything chopped!)"<<endl
  <<"Also in the game there is a \"Lumberjack Skill\" system, when it is equal to 30 chopped trees, you will receive 2 trees, when 60 - 3 trees, and when 100 then as much as 4!"<<endl
  <<"Also in our game there is a cool store where you can buy the ax you are interested in!"<<endl<<" Have you read?"<<endl<<" Then go ahead!"<<endl;
  pause();
  break;

  case 2:

  clear();
  cout<<"A small addition from the author. The computer guesses a number from 1 to 30, your task is to guess it in 5 attempts."<<endl<<"The task is quite difficult, so small hints are added."<<endl;
  pause();
  break;
  
  case 3:

  return;
  break;
  
  default:
  cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
  break;
  }
  }
}

void two(){
  int popitki_guess = 0, guess_guess, menu;
  int randomnum_guess = rand() % 31;

  Sleep(1200);
  clear();

  cout<< "You have chosen the game \"Guess the number\""<<endl;
  cout<< "You have 5 attempts to guess the randomly generated number from 1 to 30"<<endl;

  while (popitki_guess < 5)
    { 
    cout<< "What is your guess?: "<<endl;
    cin>>guess_guess;
    Sleep(1200);
    popitki_guess++;

    if (guess_guess == randomnum_guess)
    {
      cout << "Bravo! You guessed! This number: " << randomnum_guess << endl;
      cout << "To guess the number you needed: " << popitki_guess << " attempts"<<endl;
      break;
    }

    else{
      cout<<"Have you used: "<< popitki_guess <<" attempts"<<endl;
      cout<<"Ha ha, you didn't guess!"<<endl;
      Sleep(2200);
    }

    if (guess_guess > randomnum_guess)
    {
      cout<<"Hmm... the given number is less than"<<endl;
    }

    else if (guess_guess < randomnum_guess)
    {
      cout<<"Hmm... the given number is greater"<<endl;
    }
    
    if (popitki_guess == 5)
    {
      cout << "You lose! Your attempts are over" <<endl;
    }
    }
}

void one() {
  int lumberSkill = 0;
  int trees = 0;
  int balance = 0;
  int upgrade = 50000;
  int legal_course = 100;  // 1 tree = 100$
  int illegal_course = 100 + rand() % 51;
  int treesSold, randomnum = 100 + rand() % 51;
  int woodenax = 30000;
  int ironax = 100000;
  bool woodenaxchoose = false;
  bool ironaxchoose = false;
  bool upgradechoose = false;

  while (true)
  {
    clear();

    int function;

    cout << "1. Plant a tree" << endl;
    cout << "2. Sell the tree on the legal market" << endl;
    cout << "3. Sell a tree on an illegal market" << endl;
    cout << "4. Check balance" << endl;
    cout << "5. View your lumberjack skill" << endl;
    cout << "6. Ax and Upgrade Shop" << endl;
    cout << "7. Back to main menu" << endl;
    cout << "Select function: ";

      cin >> function;
     switch (function) {
      case 1:
        clear();

        int plantChance;
        plantChance = rand() % 3;

        cout << "Planting a tree... "<<endl;
        cout << "3..." << endl;
        Sleep(1000);
        cout << "2..." << endl;
        Sleep(1000);
        cout << "1..." << endl;
        Sleep(1000);
        if (lumberSkill >= 30  &&  lumberSkill < 60)
        {
          cout<<"Your skill is already 30! Now you get 3 trees at a time!"<<endl;
          trees+=2;
        }
        if (lumberSkill >= 60  &&  lumberSkill < 100)
        {
          cout<<"Your skill is already 60! Now you get 5 trees at a time!"<<endl;
          trees+=4;
        }  
        
        if (plantChance == 0 || plantChance == 1)
        {
          cout << "The tree has been successfully planted!" << endl;
          trees += 1;
          if (woodenaxchoose == true)
        {
          trees+=2;
        }
        if (ironaxchoose == true)
        {
          trees+=4;
        }
          if (lumberSkill == 100)
        {
          cout<<"Your skill is already 100! Now you get 7 trees at a time!"<<endl;
          pause();
          trees+=6;
          break;
        }
          pause();
          if (upgradechoose == true)
          {
            lumberSkill++;
            cout<<"Your lumberjack skill has increased by 1!"<<endl;
            cout<<"Your lumberjack skill is: "<<lumberSkill<<"/100"<<endl;
            pause();
            break;
          }
          
          else if(trees % 2 == 0){
            lumberSkill++;
            cout<<"Your lumberjack skill has increased by 1!"<<endl;
            cout<<"Your lumberjack skill is: "<<lumberSkill<<"/100"<<endl;
            pause();
            break;
          }
          }
        else
        {
          cout << "Tree failed to plant, please try again" << endl;
          pause();
          break;
        }
        break;





      case 2:
        clear();

        cout << "You have entered the legal market" << endl;
        cout << "You have " << trees << " trees" << endl;
        cout << "Course: " << legal_course << "$/1 st" << endl;
        cout << "How much do you want to sell: ";

        cin >> treesSold;

        if ((trees >= treesSold) & (treesSold > 0))
        {
          int sum = legal_course * treesSold;
          balance += sum;
          trees = trees - treesSold;

          cout << "You sell " << treesSold << " trees, is " << sum << "$" << endl;
          cout << "You have left " << trees << " trees" << endl;
        } else
          cout << "Failed to sell trees" << endl;
        pause();
        break;

        case 3:
        clear();
        if (trees == 0)
        {
          cout<<"You were considered a spy because you did not have a tree"<<endl;
          pause();
          break;
        }
        cout << "You have entered the illegal market. Be careful, you can be deceived!" << endl;
        cout << "You have " << trees << " trees" << endl;
        cout << "Course: " << illegal_course << "$/1 st" << endl;
        cout << "How much do you want to sell: ";
        cin >> treesSold;
        if (randomnum >= 100  &&  randomnum <= 145){
        if ((trees >= treesSold) & (treesSold > 0))
        {
          int sum = illegal_course * treesSold;
          balance += sum;
          trees = trees - treesSold;

          cout << "You sell " << treesSold << ", is " << sum << "$" << endl;
          cout << "You have left " << trees << " trees" << endl;
        } else
          cout << "Failed to sell trees" << endl;
        }
        else{
          trees = 0;
          balance = 0;
          cout<<"All your loot has been stolen! Be careful next time!"<<endl;
        }
        if (trees == 0)
        {
          cout<<"You were considered a spy because you did not have a tree"<<endl;
        }
        pause();
        break;

        case 4:
        clear();
        cout << "Your balance: " << balance << "$" << endl;
        pause();
        break;

        case 5:
        cout << "Your lumberjack skill is: "<<lumberSkill<<"/100"<<endl;
        pause();
        break;


        case 6:
        clear();
        int chooseaxmenu;
        char chooseax;
        cout<<"Assortment in store today: "<<endl;
        cout<<"1. Wooden ax "<<endl;
        cout<<"2. Iron ax "<<endl;
        cout<<"3. Each felled tree gives +1 to lumberjack skill "<<endl;
        cout<<"4. Back to menu "<<endl;
        cout<<"Select the ax you are interested in to see its price and characteristics"<<endl;
        cin >> chooseaxmenu;
        switch (chooseaxmenu)
        {
        case 1:
        clear();
        cout<<"You have selected: Wooden ax"<<endl;
        cout<<"This ax adds two tree to your loot regardless of lumberjack skill"<<endl;
        cout<<"The price of this ax is 30.000$"<<endl;
        cout<<"Are you ready to buy this axe?"<<endl;
        cout<<"(You are offered to buy an ax. If you agree, write \"Y\" in the chat, if you do not agree, write \"N\" in the chat)"<<endl;
        cin >> chooseax;
        switch (chooseax)
        {
        case 'Y':
        case 'y':
        if (balance < woodenax)
        {
        cout<<"You do not have enough money, you will be transferred to the game menu"<<endl;
        break;
        }
        else{
        balance = balance - woodenax;
        cout<<"Item successfully purchased!"<<endl;
        woodenaxchoose = true;
        break;
        }
        case 'N':
        case 'n':
        cout<<"You refused to buy an item"<<endl;
        break;
    
        default: cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
        pause();
        break;
        }
        break;
    case 2:
        clear();
        cout<<"You have selected: Iron ax"<<endl;
        cout<<"This ax adds four tree to your loot regardless of lumberjack skill"<<endl;
        cout<<"The price of this ax is 100.000$"<<endl;
        cout<<"Are you ready to buy this axe?"<<endl;
        cout<<"(You are offered to buy an ax. If you agree, write \"Y\" in the chat, if you do not agree, write \"N\" in the chat)"<<endl;
        cin >> chooseax;
        switch (chooseax)
        {
        case 'Y':
        case 'y':
        if (balance < ironax)
        {
        cout<<"You do not have enough money, you will be transferred to the game menu"<<endl;
        break;
        }
        else{
        balance = balance - ironax;
        cout<<"Item successfully purchased!"<<endl;
        ironaxchoose = true;
        break;
        }
        case 'N':
        case 'n':
        cout<<"You refused to buy an item"<<endl;
        break;
    
        default: cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
        pause();
        break;
        }
        break;

    case 3:
    clear();
        cout<<"1. Each felled tree gives +1 to lumberjack skill"<<endl;
        cout<<"If you buy this upgrade, then your lumberjack skill will be replenished with each cut down tree (previously you had to cut down 2 trees for this)"<<endl;
        cout<<"The price of this upgrade is 50.000$"<<endl;
        cout<<"Are you ready to buy this upgrade?"<<endl;
        cout<<"(You are offered to buy an upgrade. If you agree, write \"Y\" in the chat, if you do not agree, write \"N\" in the chat)"<<endl;
        cin >> chooseax;
        switch (chooseax)
        {
        case 'Y':
        case 'y':
        if (balance < upgrade)
        {
        cout<<"You do not have enough money, you will be transferred to the game menu"<<endl;
        break;
        }
        else{
        balance = balance - upgrade;
        cout<<"Item successfully purchased!"<<endl;
        upgradechoose = true;
        break;
        }
        case 'N':
        case 'n':
        cout<<"You refused to buy an item"<<endl;
        break;
    
        default: cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
        pause();
        break;
        }
        break;

    case 4:
    clear();
    return;
    break;

  default: cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
    break;
  }
        pause();
        break;

        case 7:
        return;
        break;

      default:
      cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
        break;
    }

  }
}

void developer(){

  clear();
  cout<<"Developer contacts: "<<endl<<"Telegram: @vitaleoneee"<<endl<<"Instagram: vitaleoneee"<<endl<<"Gmail: gubenko23r@gmail.com"<<endl<<"Support the developer with a coin: 5168 7520 2074 1503"<<endl;
  pause(); 
}


int main(){
    srand(time(0));
    int menu;
    char hello[30];

    cout<<"Hello, we are glad to welcome you to our program, what is your name?"<<endl;
    cin>>hello;
    cout<<"Hello, "<< hello <<"!"<< endl;
    Sleep(1200);

    while (true)
    { 
    clear();
    main_menu();
    cin>> menu;

    if (menu > 4)
    {
        cout<<"Error!"<<endl;
        Sleep(4000);
        clear();
        main_menu();
        cin>>menu;

    }

    switch (menu)
    {

    case 1:
    one();
    break;

    case 2:
    two();
    pause();
    break;

    case 3:
    instructions();

    break;
    case 4:
    developer();
      break;
      
      default: cout<<"The program is broken, if you see this message please report it to the developer!"<<endl;
        break;
    }
    }
}