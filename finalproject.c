#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "helper_windows.h"
//colors
#define RED "\033[1;31m"
#define Green "\033[1;32m"
#define Blue "\033[1;34m"
#define Reset "\033[Om"
#define White "\033[1;37m"
#define Cyan "\033[1;36m"
#define Magenta "\033[1;35m"
#define Yellow "\033[1;33m"
//colors
#define SLEEPTIME 200
int X_POARTAL_1;
int Y_PORTAL_1;
int X_POARTAL_2;
int Y_PORTAL_2;
int X_HEALTH;
int Y_HEALTH;
int X_LIGHTNING;
int Y_LIGHTNING;
int POWER_SHOTS = 0;
int X_GHOST;
int Y_GHOST;
int X_CYCLONE;
int Y_CYCLONE;
int ghost_moves = 0;
int XPRIME;
int YPRIME;
int XPRIME1;
int YPRIME1;
int X_GRANADE;
int Y_GRANADE;


BOOL GRANADE;
BOOL HEALTH = true;
BOOL GHOST = true;
BOOL ghost_1 = false;
BOOL ghost_2 = false;
BOOL LIGHTNING = true;
BOOL POWERSHOT_1 = false;
BOOL POWERSHOT_2 = false;
BOOL granade_1 = false;
BOOL granade_2 = false;




FILE *file;

char map[31][101][10];

int kk = 0;
int jj = 0;
void zzz(){
Sleep(2000);
jj = 0;}
void zzzz(){
    Sleep(2000);
    kk = 0;
}

int maping2(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);
    for(int i = 0;i<30;i++){
        for(int j = 0;j<100;j++){
             if(i==0||i==29){
                strcpy(map[i][j],"\u2588");
            }
            else if(i==1&&j>=35&&j<=65){
                strcpy(map[i][j],"🪞");
            }
            else if(j==0||j==99){
                strcpy(map[i][j],"\u2588");
            }
            else if(i>=8&&i<=22){
                if((j==9||j==10||j==11 || j==12 || j==13|| j==90 || j==89||j==88||j==87||j==91) && (i==8||i==22)){
                strcpy(map[i][j],"\u2588");                }
                else if(j==13||j==87){
                strcpy(map[i][j],"\u2588");
                }
                
                else if(i == 15){
                    if(j==40||j==41||j==42||j==43||j==44||j==56||j==57||j==58||j==59||j==60){
                         strcpy(map[i][j],"\u2588");
                    }
                    else{
                           strcpy(map[i][j]," ");
                    }
                }
                else{
                strcpy(map[i][j]," ");
                }
            }
                   else if((i>=2&&i<=6)||(i<=27&&i>=22)){
                    if(j==30||j==70){
                    strcpy(map[i][j],"\u2588");
                    }
                    else{
                strcpy(map[i][j]," ");
                    }
                }
            else{
                strcpy(map[i][j]," ");
            }
        }
            }
            strcpy(map[14][44],"\u2588");
                 strcpy(map[13][44],"\u2588");
                strcpy(map[13][45],"\u2588");
                 strcpy(map[13][46],"\u2588");
                strcpy(map[13][47],"\u2588");
                strcpy(map[13][48],"\u2588");
                    strcpy(map[13][49],"\u2588");                              
                          strcpy(map[13][50],"\u2588");
                       strcpy(map[12][50],"\u2588");
                                       strcpy(map[11][50],"\u2588");                   
                    strcpy(map[16][56],"\u2588");
                    strcpy(map[16][55],"\u2588");
                    strcpy(map[16][54],"\u2588");
                    strcpy(map[16][53],"\u2588");
                    strcpy(map[16][52],"\u2588");
                    strcpy(map[16][51],"\u2588");
                    strcpy(map[16][50],"\u2588");
                        strcpy(map[17][50],"\u2588");
                strcpy(map[18][50],"\u2588");

strcpy(map[15][30],"\u2588");
strcpy(map[16][31],"\u2588");
strcpy(map[14][31],"\u2588");
strcpy(map[13][32],"\u2588");
strcpy(map[17][32],"\u2588");
strcpy(map[18][33],"\u2588");
strcpy(map[12][33],"\u2588");
strcpy(map[19][34],"\u2588");
strcpy(map[11][34],"\u2588");
strcpy(map[10][35],"\u2588");
strcpy(map[20][35],"\u2588");

strcpy(map[15][70],"\u2588");
strcpy(map[16][69],"\u2588");
strcpy(map[14][69],"\u2588");
strcpy(map[13][68],"\u2588");
strcpy(map[17][68],"\u2588");
strcpy(map[18][67],"\u2588");
strcpy(map[12][67],"\u2588");
strcpy(map[19][66],"\u2588");
strcpy(map[11][66],"\u2588");
strcpy(map[10][65],"\u2588");
strcpy(map[20][65],"\u2588");

    return 0;
}

int maping(){

    system("cls");
    SetConsoleOutputCP(CP_UTF8);
    for(int i = 0;i<30;i++){
        for(int j = 0;j<100;j++){
             if(i==0||i==29){
                strcpy(map[i][j],"\u2588");
            }
            else if(j==0||j==99){
                strcpy(map[i][j],"\u2588");
            }
            else if(i>=8&&i<=22){
                if((j==9||j==10||j==11 || j==12 || j==13|| j==90 || j==89||j==88||j==87||j==91) && (i==8||i==22)){
                strcpy(map[i][j],"\u2588");                }
                else if(j==13||j==87){
                strcpy(map[i][j],"\u2588");
                }
                else if(j==50){
                strcpy(map[i][j],"\u2588");
                }
                else if(i == 15){
                    if(j==40||j==41||j==42||j==43||j==44||j==45||j==46||j==47||j==53||j==54||j==55||j==56||j==57||j==58||j==59||j==60){
                         strcpy(map[i][j],"\u2588");
                    }
                    else{
                           strcpy(map[i][j]," ");
                    }
                }
                else{
                strcpy(map[i][j]," ");
                }
            }
                   else if((i>=2&&i<=6)||(i<=27&&i>=22)){
                    if(j==30||j==70){
                    strcpy(map[i][j],"\u2588");
                    }
                    else{
                strcpy(map[i][j]," ");
                    }
                }
            else{
                strcpy(map[i][j]," ");
            }
        }
        strcpy(map[15][14],"🪞");
                strcpy(map[14][14],"🪞");
        strcpy(map[16][14],"🪞");
        strcpy(map[13][14],"🪞");
        strcpy(map[17][14],"🪞");
    strcpy(map[15][85],"🪞");
                strcpy(map[14][85],"🪞");
strcpy(map[16][85],"🪞");
strcpy(map[17][85],"🪞");
strcpy(map[13][85],"🪞");
            }
    return 0;
}
void printmap(){

    for(int i = 0;i<30;i++){
                    for(int j = 0;j<100;j++){                    
                    printf(White "%s",map[i][j]);}
                printf("\n");
                }
                
}

FILE *fileinfo;
typedef struct username{
char email[100];
char username[100];
char password[100];
char playerwin[10];
char playerlose[10];
}User;

User user;

User founduser;

User tamp;

User founduser2;

char array[1000][100];

int rows;

void arraing(){
     rows = 0;
    file = fopen("pq.txt","r");
    while(fscanf(file,"%s",array[rows])==1){
        rows++;
    }
    fclose(file);
}

void file_rewrite(){
       file = fopen("pq.txt","w");
                for(int i = 0;i<100;i++){
                fprintf(file,"%s ",array[i]);
                if((i+1)%5 == 0){
                fprintf(file,"\n");}
}
fclose(file);
}

int sign_up(){
    file = fopen("pq.txt","a+");
if(file==NULL){
    file = fopen("pq.txt","w+");
}
char temp[100];
while(1){
printf("Email        : ");
scanf("%s", &tamp.email);
puts("");
printf("UserName     : ");
scanf("%s", &tamp.username);
puts("");
printf("PassWord     : ");
scanf("%s", &tamp.password);
puts("");
printf("PassWord Rep : ");
scanf("%s", &temp);
system("cls");
int length = strlen(tamp.email);
char* result = strchr(tamp.email,'@');
if(strlen(tamp.password) < 8){
    printf("The PassWord You Entered is too Short\n\n");
    system("pause");
    system("cls");
    return 0;
}
else if(strcmp(tamp.password, temp) != 0){
    printf("PassWord Repeatition is Wrong!");
    system("pause");
    system("cls");
    return 0;
}
else if(tamp.email[length-1] != 'm'){
    printf("invalid Email\n\n");
    system("pause");
    system("cls");
    return 0;
}
else if(result == NULL){
    printf("invalid Email\n\n");
    system("pause");
    system("cls");
    return 0;
}
int i = 0;
while(fscanf(file,"%s %s %s %s %s", user.username, user.password, user.email, user.playerwin, user.playerlose) == 5){
    if(strcmp(tamp.username, user.username) == 0){
        i=1;
    }
}
if(i==1){
        printf("This Username already exist\n\n");
        getch();
        system("cls");
        i = 0;
        return 0;
}
strcpy(user.username, tamp.username);
strcpy(user.password,tamp.password);
strcpy(user.email,tamp.email);
strcpy(user.playerwin,"0");
strcpy(user.playerlose,"0");
fprintf(file,"%s %s %s %s %s\n",user.username,user.password,user.email,user.playerwin,user.playerlose);
printf("You signed up seccesfuly\n\n");
system("pause");
system("cls");
fclose(file);
return 0;
    }
    return 0;
        }
int sing_in2(){
    file = fopen("pq.txt","r");
while(1){
printf("Enter Second User username : ");
scanf("%s", &founduser2.username);
puts("");
printf("Enter Second Password : ");
scanf("%s", &founduser2.password);
system("cls");
while(fscanf(file,"%s %s %s %s %s", user.username, user.password, user.email, user.playerwin,user.playerlose) == 5){
    if(strcmp(founduser2.username,user.username) == 0 && strcmp(founduser2.password,user.password) == 0 && strcmp(founduser.username,founduser2.username)!= 0){
        printf("Second User Signed in\n\nReady to play\n\n");
        strcpy(founduser2.email,user.email);
        strcpy(founduser2.playerwin,user.playerwin);
        strcpy(founduser2.playerlose,user.playerlose);
        getch();
        system("cls");
        fclose(file);
        return 1;
    }
    else if(strcmp(founduser.username,founduser2.username)== 0){
        printf("This Account is already signed in\n\n");
        getch();
        system("cls");
        return 0;
    }
}
printf("User not found\n\n");
fseek(file,0,SEEK_SET);
getch();
system("cls");
return 0;
        }
}
int sign_in(){
    //continue
file = fopen("pq.txt","r");
while(1){
printf("Enter Your username : ");
scanf("%s", &founduser.username);
puts("");
printf("Enter Your Password : ");
scanf("%s", &founduser.password);
system("cls");
while(fscanf(file,"%s %s %s %s %s", user.username, user.password, user.email, user.playerwin,user.playerlose) == 5){
    if(strcmp(founduser.username,user.username) == 0 && strcmp(founduser.password,user.password) == 0){
        printf("Signed in Seccesfuly\n\n");
        strcpy(founduser.email,user.email);
        strcpy(founduser.playerwin,user.playerwin);
        strcpy(founduser.playerlose,user.playerlose);
        getch();
        system("cls");
        fclose(file);
        return 1;
    }
}
printf("User not found\n\n");
fseek(file,0,SEEK_SET);
getch();
system("cls");
return 0;
        }
    }

    int replace(int x){
        int z = 0;
        for(int i = 0;i<100;i++){
            if(strcmp(array[i],founduser.username) == 0){
                z = i+x;
                break;
            }
        }
         while(1){
        if(x==2){
            printf("Enter Your New email : \n\n");
        }
        else if(x==1){
            printf("Enter Your New PassWord : \n\n");
        }
       
        scanf("%s", array[z]);
        char tempp[100];
        strcpy(tempp,array[z]);        
        system("cls");
        char* result = strchr(tamp.email,'@');
        if(x==1){
            if(strlen(tempp) < 8){
                printf("Your New PassWord is too Short!\n\n");
                getch();
                system("cls");
                return 0;
                }
                else{
                            file = fopen("pq.txt","w");
                         for(int i = 0;i<100;i++){
                            fprintf(file,"%s ",array[i]);
                if((i+1)%5 == 0){
                fprintf(file,"\n");
                }
            }
            printf("Your Password Changed Seccesfuly!\n\n");
            getch();
            system("cls");
            strcpy(founduser.password,array[z]);
            break;
                }
            }
            else if(x==2){
                int m = strlen(tempp);
                if(tempp[m-1] != 'm'){
                    printf("Invalid Email!\n\n");
                    getch();
                    system("cls");
                    return 0;
                }
                else{//***********************************************
                 file = fopen("pq.txt","w");
                for(int i = 0;i<100;i++){
                fprintf(file,"%s ",array[i]);
                if((i+1)%5 == 0){
                fprintf(file,"\n");
                }
                }
                printf("Your Email Changed Seccesfuly!\n\n");
                getch();
                system("cls");
                strcpy(founduser.email,array[z]);
                break;
            }
        }
    }
    fclose(file);
    }
/////////////////////////

int forget_password(){
    file=fopen("pq.txt" , "r");
    system("cls");
    printf(White "Enter your email : \n\n");
    scanf("%s",&founduser.email);
    printf("\n\nEnter your Username : \n\n");
    scanf("%s",&founduser.username);
    system("cls");
    while(fscanf(file,"%s %s %s %s %s",user.username, user.password, user.email, user.playerwin,user.playerlose)==5){
        if(strcmp(founduser.email,user.email) == 0 && strcmp(founduser.username,user.username) == 0){
                printf(White "Your password : '%s'\n\n", user.password);
                getch();
                system("cls");
                return 0;
        }
    }
        printf(White "User not found\n\n");
        getch();
        system("cls");
        return 0;    

}




////////////////////////
    void user_info(){
        printf("Email    : %s\n\n",founduser.email);
        printf("Username : %s\n\n",founduser.username);
        printf("PassWord : %c%c%c%c",founduser.password[0],founduser.password[1],founduser.password[2],founduser.password[3]); //show only for first letters for the passeord
        int l = strlen(founduser.password);
        for(int o = 0;o<l-5;o++){
            printf("*");
        }
        printf("\n\n");
        printf("Win    : %s\n\n", founduser.playerwin);
        printf("Lose   : %s\n\n", founduser.playerlose);
        system("pause");
        system("cls");
    }

    int change_settings(){
        char man[3][100] = {"Changing Email","Chainging PassWord","return to menu"};
        int j = 0;
        while (true)
        {
         for(int i = 0;i<3;i++){
    if(i!=j){
        printf(White "\t\t%s\n\n", man[i]);
    }
    else if(i==j){
        printf(Yellow "\t\t%s\n\n", man[i]);
    }
        }
        char dstr = getch();
        if(dstr == 's'){
            if(j!=2){
                j++;
            }
            system("cls");
            continue;
        }
        else if(dstr == 'w'){
            if(j!=0){
                j--;
            }
            system("cls");
        }

        else if(dstr == '\r'){
            if(j==0){
                system("cls");
                replace(2);
            }
            else if(j==1){
                system("cls");
                replace(1);
            }
            else if(j==2){
                //akharesh bayad file ro rewrite konam yadam nare inja minvisam
                return 0;
            }
        }

        else{
            system("cls");
        }
        
    }
    }


int xx;
int yy;
int xx1;
int yy1;
char lastkey;
char lastkey1;
int hp_player1 = 3;
int hp_player2 = 3;
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void shooting(){
    int xx2 = xx;
    int yy2=  yy;
    int v = 1;
    int i = 0;
    if(lastkey=='D'){
        xx2++;
        gotoxy(xx2,yy2);
        if(strcmp(map[yy2][xx2]," ") != 0){
            return ;
        }
          if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v == 1){
            gotoxy(xx2,yy2);
            printf(" ");
            xx2++;
            gotoxy(xx2,yy2);
            if(xx2 == xx1 && yy2 == yy1){
                        hp_player2--;
                        if(POWERSHOT_1 == true && hp_player2 != 0){
                            hp_player2--;
                            POWER_SHOTS++;
                            if(POWER_SHOTS == 4){
                                POWERSHOT_1 = false;
                            }
                        }
                           if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
            else if(xx2 == XPRIME && yy2 == YPRIME){
                hp_player1--;
                           if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
            }
            else if(strcmp(map[yy2][xx2],"🪞")==0){
                xx = xx2;
                yy = yy2;
                lastkey = 'A';
                HANDLE thread7 = start_listening(shooting);
                break;
            }
           else if(strcmp(map[yy2][xx2]," ") != 0){
            if((xx2==100||xx2==99) && ghost_1 == true){
                break;
            }
            else if(ghost_1 == true){
                xx2++;
            }
            else if(granade_1 == true){
                granade_1 = false;
                if(xx1>xx2-15 && xx1<xx2+15 && yy1>yy2-15 && yy1<yy2+15){
                    hp_player2--;
                                   if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
               break;
                }
            }
            else{
                break;}
            }
            else if((xx2 == X_POARTAL_1 && yy2== Y_PORTAL_1)){
                break;
            }
             else if((xx2 == X_POARTAL_2 && yy2== Y_PORTAL_2)){
                break;
            }
             else if(xx2 == X_GHOST && yy2== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx2 == X_HEALTH && yy2 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx2 == X_CYCLONE && yy2 == Y_CYCLONE){
                break;
            }
            else if(xx2 == X_LIGHTNING && yy2 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx2 == X_GRANADE && yy2 == Y_GRANADE && GRANADE == true){
                break;
            }
            else{
              if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
                   if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;}
        }
    
    }
    else if(lastkey == 'W'){
        yy2--;;
        gotoxy(xx2,yy2);
        if(strcmp(map[yy2][xx2]," ") != 0){
            return;
        }
           if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx2,yy2);
            printf(" ");
            yy2--;
            gotoxy(xx2,yy2);
              if(xx2 == xx1 && yy2 == yy1){
                        hp_player2--;
                        if(POWERSHOT_1 == true && hp_player2 != 0){
                            hp_player2--;
                            POWER_SHOTS++;
                            if(POWER_SHOTS == 4){
                                POWERSHOT_1 = false;
                            }
                        }
                           if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
                  else if(xx2 == XPRIME && yy2 == YPRIME){
                hp_player1--;
                           if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
            }
                        else if(strcmp(map[yy2][xx2],"🪞")==0){
                xx = xx2;
                yy = yy2;
                lastkey = 'S';
                HANDLE thread7 = start_listening(shooting);} 
              else if(strcmp(map[yy2][xx2]," ") != 0){
            if(yy2 == 0 && ghost_1 == true){
                break;
            }
            else if(ghost_1 == true){
                yy2--;
            }
           else if(granade_1 == true){
                granade_1 = false;
                if(xx1>xx2-15 && xx1<xx2+15 && yy1>yy2-15 && yy1<yy2+15){
                    hp_player2--;
                                   if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;}
            }
                else if((xx2 == X_POARTAL_1 && yy2== Y_PORTAL_1)){
                break;
            }
             else if((xx2 == X_POARTAL_2 && yy2== Y_PORTAL_2)){
                break;
            }
             else if(xx2 == X_GHOST && yy2== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx2 == X_HEALTH && yy2 == Y_HEALTH && HEALTH == true ){
                break;
            }
            else if(xx2 == X_CYCLONE && yy2 == Y_CYCLONE){
                break;
            }
             else if(xx2 == X_LIGHTNING && yy2 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx2 == X_GRANADE && yy2 == Y_GRANADE && GRANADE == true){
                break;
            }
            else{
               if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
                   if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;}
        }
    }
      else if(lastkey == 'S'){
        yy2++;;
        gotoxy(xx2,yy2);
        if(strcmp(map[yy2][xx2]," ") != 0){
            return;
        }
           if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx2,yy2);
            printf(" ");
            yy2++;
            gotoxy(xx2,yy2);
          if(xx2 == xx1 && yy2 == yy1){
                        hp_player2--;
                        if(POWERSHOT_1 == true && hp_player2 != 0){
                            hp_player2--;
                            POWER_SHOTS++;
                            if(POWER_SHOTS == 4){
                                POWERSHOT_1 = false;
                            }
                        }
                           if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
                  else if(xx2 == XPRIME && yy2 == YPRIME){
                hp_player1--;
                           if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
            }
            else if(strcmp(map[yy2][xx2],"🪞")==0){
                xx = xx2;
                yy = yy2;
                lastkey = 'W';
                HANDLE thread7 = start_listening(shooting);
                break;} 
            else if(strcmp(map[yy2][xx2]," ") != 0){
             if((yy2 == 30 || yy2 == 29) && ghost_1 == true){
                break;
             }
             else if(ghost_1 == true){
                yy2++;
            }
            else if(granade_1 == true){
                granade_1 = false;
                if(xx1>xx2-15 && xx1<xx2+15 && yy1>yy2-15 && yy1<yy2+15){
                    hp_player2--;
                                   if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                 break;
                }
            }
            else{
                break;
                }
            }
                else if((xx2 == X_POARTAL_1 && yy2== Y_PORTAL_1)){
                break;
            }
             else if((xx2 == X_POARTAL_2 && yy2== Y_PORTAL_2)){
                break;
            }
             else if(xx2 == X_GHOST && yy2== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx2 == X_HEALTH && yy2 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx2 == X_CYCLONE && yy2 == Y_CYCLONE){
                break;
            }
             else if(xx2 == X_LIGHTNING && yy2 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx2 == X_GRANADE && yy2 == Y_GRANADE && GRANADE == true){
                break;
            }
            else{
               if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
                   if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
        
            i++;}
        }
    }
      else if(lastkey == 'A'){
        xx2--;;
        gotoxy(xx2,yy2);
        if(strcmp(map[yy2][xx2]," ") != 0){
            return;
        }
          if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx2,yy2);
            printf(" ");
            xx2--;
            gotoxy(xx2,yy2);
                if(xx2 == xx1 && yy2 == yy1){
                        hp_player2--;
                        if(POWERSHOT_1 == true && hp_player2 != 0){
                            hp_player2--;
                            POWER_SHOTS++;
                            if(POWER_SHOTS == 4){
                                POWERSHOT_1 = false;
                            }
                        }
                           if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
                else if(xx2 == XPRIME && yy2 == YPRIME){
                hp_player1--;
                           if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
            }
            else if(strcmp(map[yy2][xx2],"🪞")==0){
                xx = xx2;
                yy = yy2;
                lastkey = 'D';
                HANDLE thread7 = start_listening(shooting);
                break;} 
            else if(strcmp(map[yy2][xx2]," ") != 0){
            if((xx2 == 0 || xx2 == 1) && ghost_1){
                break;
            }
            else if(ghost_1 == true){
                xx2--;
            }
            else if(granade_1 == true){
                granade_1 = false;
                if(xx1>xx2-15 && xx1<xx2+15 && yy1>yy2-15 && yy1<yy2+15){
                    hp_player2--;
                                   if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;}
            }
                else if((xx2 == X_POARTAL_1 && yy2== Y_PORTAL_1)){
                break;
            }
             else if((xx2 == X_POARTAL_2 && yy2== Y_PORTAL_2)){
                break;
            }
             else if(xx2 == X_GHOST && yy2== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx2 == X_HEALTH && yy2 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx2 == X_CYCLONE && yy2 == Y_CYCLONE){
                break;
            }
             else if(xx2 == X_LIGHTNING && yy2 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx2 == X_GRANADE && yy2 == Y_GRANADE && GRANADE == true){
                break;
            }
        else{
            if(granade_1 != true){
            printf(RED "\u25CF");
            }
            else{
                printf("💣");
            }
                  if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;}
        }
    }
}
void Get(){
    int x = 7;
    int y = 15;
    xx = x;
    yy = y;
    char a;
    gotoxy(x,y);
    printf(RED "\u25A3");
    while(true)
    {
        if(hp_player1 == 0 || hp_player2 == 0){
            return;
        }
        if(kbhit()){
         
        int z = x;
        int k = y;
    
     if (GetAsyncKeyState('A') & 0x8000) {
           gotoxy(x,y);
     printf(" ");
            x--;
            lastkey = 'A';
            if((x>=X_POARTAL_1 && x<=X_POARTAL_1+2)&& y==Y_PORTAL_1){
                x = X_POARTAL_2;
                y = Y_PORTAL_2+1;
            }
            else if((x>=X_CYCLONE && x<=X_CYCLONE+2) && y == Y_CYCLONE){
                x = 7;
                y = 15;
            }
            else if((x>=X_POARTAL_2 && x<=X_POARTAL_2+2) && y==Y_PORTAL_2){
                x = X_POARTAL_1;
                y = Y_PORTAL_1+1;
            }
            else if(strcmp(map[y][x]," ") == 0){
        ;
         }
         else if(ghost_1 != false){
            x=-2;
         }
 else{
    x=z;
    y=k;
 }
 gotoxy(x,y);
printf(RED "\u25A3");
  yy = y;
  xx = x;
        }
else if(GetAsyncKeyState('D') & 0x8000) {
gotoxy(x,y);
     printf(" ");
x++;        
lastkey = 'D';
    if((x>=X_POARTAL_1 && x<=X_POARTAL_1+2) && y==Y_PORTAL_1){
                x = X_POARTAL_2;
                y = Y_PORTAL_2+1;
            }
                else if((x>=X_CYCLONE && x<=X_CYCLONE+2)&& y == Y_CYCLONE){
                x = 7;
                y = 15;
            }
            else if((x>=X_POARTAL_2 && x<=X_POARTAL_2+2) && y==Y_PORTAL_2){
                x = X_POARTAL_1;
                y = Y_PORTAL_1+1;
            }
else if(strcmp(map[y][x]," ") == 0){
        ;
         }
         else if(ghost_1 != false){
            x+=2;
         }
 else{
    x=z;
    y=k;
 }
 gotoxy(x,y);
printf(RED "\u25A3");
  yy = y;
  xx = x;}
else if (GetAsyncKeyState('S') & 0x8000) {
  gotoxy(x,y);
     printf(" ");
  y++;    
    lastkey = 'S';
        if((x>=X_POARTAL_1 && x<=X_POARTAL_1+2) && y==Y_PORTAL_1){
                x = X_POARTAL_2;
                y = Y_PORTAL_2+1;
            }
                else if((x>=X_CYCLONE && x<=X_CYCLONE+2) && y == Y_CYCLONE){
                x = 7;
                y = 15;
            }
            else if((x>=X_POARTAL_2 && x<=X_POARTAL_2+2)&& y==Y_PORTAL_2){
                x = X_POARTAL_1;
                y = Y_PORTAL_1+1;
            }
    else if(strcmp(map[y][x]," ") == 0){
        ;
         }
         else if(ghost_1 != false){
            y+=2;
         }
 else{
    x=z;
    y=k;
 }
 gotoxy(x,y);
printf(RED "\u25A3");
  yy = y;
  xx = x;;
   }
else if (GetAsyncKeyState('W') & 0x8000) {
gotoxy(x,y);
     printf(" ");
y--;        
lastkey = 'W';
    if((x>=X_POARTAL_1 && x<=X_POARTAL_1+2) && y==Y_PORTAL_1){
                x = X_POARTAL_2;
                y = Y_PORTAL_2+1;
            }
                else if((x>=X_CYCLONE && x<=X_CYCLONE+2)&& y == Y_CYCLONE){
                x = 7;
                y = 15;
            }
            else if((x>=X_POARTAL_2 && x<=X_POARTAL_2+2) && y==Y_PORTAL_2){
                x = X_POARTAL_1;
                y = Y_PORTAL_1+1;
            }
else if(strcmp(map[y][x]," ") == 0){
        ;
         }
         else if(ghost_1 != false){
            y-=2;
         }
 else{
    x=z;
    y=k;
 }
 gotoxy(x,y);
printf(RED "\u25A3");
  yy = y;
  xx = x;
  XPRIME = x;
  YPRIME = y;}

else{
    Sleep(100);
}


    
  if(GetAsyncKeyState('F') & 0x8000){
      if(jj!=0){
            Sleep(400);
            continue;
        }
        jj=1;
        HANDLE thread5 = start_listening(zzz);
    HANDLE thread3 = start_listening(shooting);
    Sleep(400);
    continue;
    }
    if(x == X_HEALTH && y == Y_HEALTH && HEALTH == true){
        HEALTH = FALSE;
        hp_player1+= 3 - hp_player1;
        gotoxy(0,31);
        printf(RED "\u2764 \u2764 \u2764"); 
    }
    else if(x == X_GHOST && y == Y_GHOST && GHOST == true ){
        GHOST = FALSE;
        ghost_1 = true;
        ghost_moves = 0;
    }
    else if(x == X_LIGHTNING && y == Y_LIGHTNING && LIGHTNING == true){
        LIGHTNING = false;
        POWERSHOT_1 = true;
        POWER_SHOTS = 0;
    }
    else if(x == X_GRANADE && y == Y_GRANADE && GRANADE == true){
        granade_1 = true;
        GRANADE = false;
    }
    if(ghost_1 != false){
 ghost_moves++;
 if(ghost_moves==50){
    ghost_1 = false;
 }
    }
 Sleep(400);
        }
    }
}


void shooting1(){
    int xx3 = xx1;
    int yy3 = yy1;
      int v = 1;
      int i = 0;
    if(lastkey1=='L'){
        xx3++;
        gotoxy(xx3,yy3);
        if(strcmp(map[yy3][xx3]," ") != 0){
            return ;
        }
           if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v == 1){
            gotoxy(xx3,yy3);
            printf(" ");
            xx3++;
            gotoxy(xx3,yy3);
            if(xx3 == xx && yy3 == yy){
                hp_player1--;
                if(POWERSHOT_2 == true && hp_player1 != 0){
                    hp_player1--;
                    POWER_SHOTS++;
                    if(POWER_SHOTS == 4){
                        POWERSHOT_2 = false;
                    }
                }
                if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
                break;
            }
              else if(xx3 == XPRIME1 && yy3 == YPRIME1){
                hp_player2--;
                     if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
            else if(strcmp(map[yy3][xx3],"🪞")==0){
                xx1 = xx3;
                yy1 = yy3;
                lastkey1 = 'J';
                HANDLE thread8 = start_listening(shooting1);
                break;} 
           else if(strcmp(map[yy3][xx3]," ") != 0){
             if((xx3 == 100 || xx3 == 99) && ghost_2 == true){
                break;
             }
             else if(ghost_2 == true){
                xx3++;
            }
            else if(granade_2 == true){
                granade_2 = false;
                if(xx>xx3-15 && xx<xx3+15 && yy>yy3-15 && yy<yy3+15){
                    hp_player1--;
                                   if(hp_player1 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;
            }
            }
                else if((xx3 == X_POARTAL_1 && yy3 == Y_PORTAL_1)){
                break;
            }
             else if((xx3 == X_POARTAL_2 && yy3== Y_PORTAL_2)){
                break;
            }
             else if(xx3 == X_GHOST && yy3== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx3 == X_HEALTH && yy3 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx3 == X_CYCLONE && yy3 == Y_CYCLONE){
                break;
            }
             else if(xx3 == X_LIGHTNING && yy3 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
            else if(xx3 == X_GRANADE && yy3 == Y_GRANADE && GRANADE == true){
                break;
            }
            
                 if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
                     if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;
        }
    
    }
    else if(lastkey1 == 'I'){
        yy3--;;
        gotoxy(xx3,yy3);
        if(strcmp(map[yy3][xx3]," ") != 0){
            return;
        }
             if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx3,yy3);
            printf(" ");
            yy3--;
            gotoxy(xx3,yy3);
                    if(xx3 == xx && yy3 == yy){
                hp_player1--;
                if(POWERSHOT_2 == true && hp_player1 != 0){
                    hp_player1--;
                    POWER_SHOTS++;
                    if(POWER_SHOTS == 4){
                        POWERSHOT_2 = false;
                    }
                }
                if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
                break;
            }
                 else if(xx3 == XPRIME1 && yy3 == YPRIME1){
                hp_player2--;
                     if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
             else if(strcmp(map[yy3][xx3],"🪞")==0){
                xx1 = xx3;
                yy1 = yy3;
                lastkey1 = 'K';
                HANDLE thread8 = start_listening(shooting1);
                break;} 
              else if(strcmp(map[yy3][xx3]," ") != 0){
            if(ghost_2 == true){
                yy3--;
            }
            else if(granade_2 == true){
                granade_2 = false;
                if(xx>xx3-15 && xx<xx3+15 && yy>yy3-15 && yy<yy3+15){
                    hp_player1--;
                                   if(hp_player1 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;}
            }
                   else if((xx3 == X_POARTAL_1 && yy3 == Y_PORTAL_1)){
                break;
            }
             else if((xx3 == X_POARTAL_2 && yy3== Y_PORTAL_2)){
                break;
            }
             else if(xx3 == X_GHOST && yy3== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx3 == X_HEALTH && yy3 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx3 == X_CYCLONE && yy3 == Y_CYCLONE){
                break;
            }
                  else if(xx3 == X_LIGHTNING && yy3 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx3 == X_GRANADE && yy3 == Y_GRANADE && GRANADE == true){
                break;
            }
                 if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
                     if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;
        }
    }
      else if(lastkey1 == 'K'){
        yy3++;;
        gotoxy(xx3,yy3);
        if(strcmp(map[yy3][xx3]," ") != 0){
            return;
        }
              if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx3,yy3);
            printf(" ");
            yy3++;
            gotoxy(xx3,yy3);
                 if(xx3 == xx && yy3 == yy){
                hp_player1--;
                if(POWERSHOT_2 == true && hp_player1 != 0){
                    hp_player1--;
                    POWER_SHOTS++;
                    if(POWER_SHOTS == 4){
                        POWERSHOT_2 = false;
                    }
                }
                if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
                break;
            }
                 else if(xx3 == XPRIME1 && yy3 == YPRIME1){
                hp_player2--;
                     if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
             else if(strcmp(map[yy3][xx3],"🪞")==0){
                xx1 = xx3;
                yy1 = yy3;
                lastkey1 = 'I';
                HANDLE thread8 = start_listening(shooting1);
                break;} 
            else if(strcmp(map[yy3][xx3]," ") != 0){
        if((yy3==30||yy3==29) && ghost_2 == true){
            break;
        }
        else if(ghost_2 == true){
                yy3++;
            }
        else if(granade_2 == true){
                granade_2 = false;
                if(xx>xx3-15 && xx<xx3+15 && yy>yy3-15 && yy<yy3+15){
                    hp_player1--;
                                   if(hp_player1 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;
            }
            }
                   else if((xx3 == X_POARTAL_1 && yy3 == Y_PORTAL_1)){
                break;
            }
             else if((xx3 == X_POARTAL_2 && yy3== Y_PORTAL_2)){
                break;
            }
             else if(xx3 == X_GHOST && yy3== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx3 == X_HEALTH && yy3 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx3 == X_CYCLONE && yy3 == Y_CYCLONE){
                break;
            }
                  else if(xx3 == X_LIGHTNING && yy3 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx3 == X_GRANADE && yy3 == Y_GRANADE && GRANADE == true){
                break;
            }
                  if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
                     if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;
        }
    }
      else if(lastkey1 == 'J'){
        xx3--;;
        gotoxy(xx3,yy3);
        if(strcmp(map[yy3][xx3]," ") != 0){
            return;
        }
              if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
        while(v==1){
            gotoxy(xx3,yy3);
            printf(" ");
            xx3--;
            gotoxy(xx3,yy3);
                   if(xx3 == xx && yy3 == yy){
                hp_player1--;
                if(POWERSHOT_2 == true && hp_player1 != 0){
                    hp_player1--;
                    POWER_SHOTS++;
                    if(POWER_SHOTS == 4){
                        POWERSHOT_2 = false;
                    }
                }
                if(hp_player1 == 2){
                    gotoxy(4,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(4,31);
                    printf(" ");
                    gotoxy(2,31);
                    printf(" ");
                    gotoxy(0,31);
                    printf(" ");
                }
                break;
            }
               else if(xx3 == XPRIME1 && yy3 == YPRIME1){
                hp_player2--;
                     if(hp_player2 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player2 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player2 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
            }
             else if(strcmp(map[yy3][xx3],"🪞")==0){
                xx1 = xx3;
                yy1 = yy3;
                lastkey1 = 'L';
                HANDLE thread8 = start_listening(shooting1);
                break;} 
            else if(strcmp(map[yy3][xx3]," ") != 0){
           if(ghost_2 == true){
                xx3--;
            }
            else if(granade_2 == true){
                granade_2 = false;
                if(xx>xx3-15 && xx<xx3+15 && yy>yy3-15 && yy<yy3+15){
                    hp_player1--;
                                   if(hp_player1 == 2){
                    gotoxy(100,31);
                    printf(" ");
                }
                   else if(hp_player1 == 1){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                }
                   else if(hp_player1 == 0){
                    gotoxy(100,31);
                    printf(" ");
                    gotoxy(98,31);
                    printf(" ");
                    gotoxy(96,31);
                    printf(" ");
                }
                break;
                }
            }
            else{
                break;}
            }
                   else if((xx3 == X_POARTAL_1 && yy3 == Y_PORTAL_1)){
                break;
            }
             else if((xx3 == X_POARTAL_2 && yy3== Y_PORTAL_2)){
                break;
            }
             else if(xx3 == X_GHOST && yy3== Y_GHOST && GHOST == true){
                break;
            }
            else if(xx3 == X_HEALTH && yy3 == Y_HEALTH && HEALTH == true){
                break;
            }
            else if(xx3 == X_CYCLONE && yy3 == Y_CYCLONE){
                break;
            }
              else if(xx3 == X_LIGHTNING && yy3 == Y_LIGHTNING && LIGHTNING == true){
                break;
            }
              else if(xx3 == X_GRANADE && yy3 == Y_GRANADE && GRANADE == true){
                break;
            }
                  if(granade_2 != true){
            printf(Blue "\u25CF");
            }
            else{
                printf("💣");
            }
                      if(i%12==0){
                Sleep(SLEEPTIME);
            }
            Sleep(0.9);
            i++;
        }
    }
}

void Getprime(){
    int x1 = 93;
    int y1 = 15;
    xx1 = x1;
    yy1 = y1;
    gotoxy(x1,y1);
    printf(Blue "\u25A3");
    while(true){
        if(hp_player1 == 0 || hp_player2 == 0){
            return;
        }
        if(kbhit()){
        
        int z = x1;
        int k = y1;
        
        if(GetAsyncKeyState('J') & 0x8000){
        gotoxy(x1,y1);
        printf(" ");
            x1--;
            lastkey1 = 'J';
                if((x1>=X_POARTAL_1 && x1<=X_POARTAL_1+2) && y1==Y_PORTAL_1){
                x1 = X_POARTAL_2;
                y1 = Y_PORTAL_2+1;
            }
                else if((x1>=X_CYCLONE && x1<=X_CYCLONE+2) && y1 == Y_CYCLONE){
                x1 = 93;
                y1 = 15;
            }
            else if((x1>=X_POARTAL_2 && x1<=X_POARTAL_2+2) && y1==Y_PORTAL_2){
                x1 = X_POARTAL_1;
                y1 = Y_PORTAL_1+1;
            }
                else if(strcmp(map[y1][x1]," ") == 0){
        ;
         }
          else if(ghost_2 != false){
            x1-=2;
         }
 else{
    x1=z;
    y1=k;
 }
    gotoxy(x1,y1);
    printf(Blue "\u25A3");
    xx1 = x1;
    yy1 = y1;;
        }
        else if(GetAsyncKeyState('L') & 0x8000){
                gotoxy(x1,y1);
        printf(" ");
                x1++;
                lastkey1 = 'L';
                  if((x1>=X_POARTAL_1 && x1<=X_POARTAL_1+2)&& y1==Y_PORTAL_1){
                x1 = X_POARTAL_2;
                y1 = Y_PORTAL_2+1;
            }
                    else if((x1>=X_CYCLONE && x1<=X_CYCLONE+2)&& y1 == Y_CYCLONE){
                x1 = 93;
                y1 = 15;
            }
            else if((x1>=X_POARTAL_2 && x1<=X_POARTAL_2+2) && y1==Y_PORTAL_2){
                x1 = X_POARTAL_1;
                y1 = Y_PORTAL_1+1;}
                    else if(strcmp(map[y1][x1]," ") == 0){
        ;
         }
         else if(ghost_2 != false){
            x1+=2;
         }
 else{
    x1=z;
    y1=k;
 }
    gotoxy(x1,y1);
    printf(Blue "\u25A3");
    xx1 = x1;
    yy1 = y1;
        }
        else if(GetAsyncKeyState('I') & 0x8000){
            gotoxy(x1,y1);
        printf(" ");
            y1--;
            lastkey1 = 'I';
              if((x1>=X_POARTAL_1 && x1<=X_POARTAL_1+2) && y1==Y_PORTAL_1){
                x1 = X_POARTAL_2;
                y1 = Y_PORTAL_2+1;
            }
                    else if((x1>=X_CYCLONE && x1<=X_CYCLONE+2) && y1 == Y_CYCLONE){
                x1 = 93;
                y1 = 15;
            }
            else if((x1>=X_POARTAL_2 && x1<=X_POARTAL_2+2) && y1==Y_PORTAL_2){
                x1 = X_POARTAL_1;
                y1 = Y_PORTAL_1+1;}

                else if(strcmp(map[y1][x1]," ") == 0){
        ;
         }
         else if(ghost_2 != false){
            y1-=2;
         }
 else{
    x1=z;
    y1=k;
 }
    gotoxy(x1,y1);
    printf(Blue "\u25A3");
    xx1 = x1;
    yy1 = y1;
        }
    else if(GetAsyncKeyState('K') & 0x8000){
        gotoxy(x1,y1);
        printf(" ");
        y1++;
        lastkey1 = 'K';
            if((x1>=X_POARTAL_1 && x1<=X_POARTAL_1+2) && y1==Y_PORTAL_1){
                x1 = X_POARTAL_2;
                y1 = Y_PORTAL_2+1;
            }
                    else if((x1>=X_CYCLONE && x1<=X_CYCLONE+2) && y1 == Y_CYCLONE){
                x1 = 93;
                y1 = 15;
            }
            else if((x1>=X_POARTAL_2 && x1<=X_POARTAL_2+2) && y1==Y_PORTAL_2){
                x1 = X_POARTAL_1;
                y1 = Y_PORTAL_1+1;}
            else if(strcmp(map[y1][x1]," ") == 0){
        ;
         }
         else if(ghost_2 != false){
            y1+=2;
         }
 else{
    x1=z;
    y1=k;

 }
    gotoxy(x1,y1);
    printf(Blue "\u25A3");
    xx1 = x1;
    yy1 = y1; 
    XPRIME1 = x1;
    XPRIME1 = y1;
    }
    else{
        Sleep(100);
    }


    if(GetAsyncKeyState('H') & 0x8000){
          if(kk!=0){
            Sleep(400);
            continue;
        }
        kk=1;
        HANDLE thread6 = start_listening(zzzz);
        HANDLE thread4 = start_listening(shooting1);
    Sleep(400);
    continue;
    }

    if(x1 == X_HEALTH && y1 == Y_HEALTH && HEALTH == true){
        HEALTH = FALSE;
        hp_player2+=3 - hp_player2;
        gotoxy(96,31);
        printf(RED "\u2764 \u2764 \u2764"); 
    }
    else if(x1 == X_GHOST && y1 == Y_GHOST && GHOST == true ){
        GHOST = FALSE;
        ghost_2 = true;
        ghost_moves = 0;
    }
       else if(x1 == X_LIGHTNING && y1 == Y_LIGHTNING && LIGHTNING == true){
        LIGHTNING = false;
        POWERSHOT_2 = true;
        POWER_SHOTS = 0;
    }
    else if(x1 == X_GRANADE && y1== Y_GRANADE && GRANADE == true){
        GRANADE = false;
        granade_2 = true;
    }
    if(ghost_2 !=false){
     ghost_moves++;
 if(ghost_moves==50){
    ghost_2 = false;
 }
    }
    Sleep(400);
    }
    }
}
int kelos = 0;
int game(){
    POWERSHOT_1 = false;
    POWERSHOT_2 = false;
    granade_1 = false;
    granade_2 = false;
    ghost_1 = false;
    ghost_2 = false;
    POWER_SHOTS = 0;
    X_LIGHTNING = 1000;
    Y_LIGHTNING = 1000;
    printmap();
    gotoxy(0,31);
    printf(RED "\u2764 \u2764 \u2764"); //0 2 4
    gotoxy(96,31);
     printf(RED "\u2764 \u2764 \u2764"); //96 98 100
     gotoxy(0,30);
     printf(RED "%s", founduser.username);
     gotoxy(96,30);
     printf(Blue "%s", founduser2.username);
       if(kelos == 0){
        gotoxy(50,5);
        printf(RED "\u2764");
        X_HEALTH = 50;
        Y_HEALTH = 5;
        HEALTH = true;
        gotoxy(20,25);
            printf("🟡");
        X_POARTAL_1 = 20;
        Y_PORTAL_1 = 25;
        gotoxy(80,25);
        printf("🟡");
        X_POARTAL_2 = 80;
        Y_PORTAL_2 = 25;
        gotoxy(50,25);
        printf("🌀");
        X_CYCLONE = 50;
        Y_CYCLONE = 25;
        gotoxy(50,27);
        printf(Yellow "🗲");
        X_LIGHTNING = 50;
        Y_LIGHTNING = 27;
        LIGHTNING = true;
        GHOST = false;
        GRANADE = false;
    }   
    else if(kelos == 1){
        gotoxy(50,15);
        printf(RED "\u2764");
         X_HEALTH = 50;
        Y_HEALTH = 15;
        HEALTH = true;
        gotoxy(50,5);
        printf("👻");
        X_GHOST = 50;
        Y_GHOST = 5;
        GHOST = true;
           gotoxy(20,25);
        printf("🟡");
      X_POARTAL_1 = 20;
        Y_PORTAL_1 = 25;
        gotoxy(80,5);
        printf("🟡");      
  X_POARTAL_2 = 80;
        Y_PORTAL_2 = 5;
        gotoxy(50,25);
         printf("🌀");
        X_CYCLONE = 50;
        Y_CYCLONE = 25;
    LIGHTNING = false;
    gotoxy(50,27);
    X_GRANADE = 50;
    Y_GRANADE = 27;
    printf("💣");
    GRANADE = true;
    }
    HEALTH = true;
    HANDLE thread1 = start_listening(Get);
   
    Sleep(100);

    HANDLE thread2 = start_listening(Getprime);

    while(1){
        if(hp_player1 == 0 || hp_player2 == 0){
            break;
        }
    }
    Sleep(300);
    gotoxy(46,15);
    Sleep(200);
    printf(Yellow "GAME OVER");
    Sleep(5000);
    system("cls");
    Sleep(10);
    system("cls");
    if(hp_player2 == 0){
        printf(Yellow "\t\t%s Won\n\n",founduser.username);
        arraing();
        founduser.playerwin[0]++;
        founduser2.playerlose[0]++;
        for(int i = 0;i<1000;i++){
            if(strcmp(founduser.username,array[i]) == 0){
                //array[i+3] win
                //array[i+4] lose
                array[i+3][0]++;
                
            }
            else if(strcmp(founduser2.username,array[i]) == 0){
                array[i+4][0]++;
            }
        }
    }
    else{
        founduser2.playerwin[0]++;
        founduser.playerlose[0]++;
        printf(White "\t\t%s Won\n\n",founduser2.username);
             arraing();
        for(int i = 0;i<1000;i++){
            if(strcmp(founduser2.username,array[i]) == 0){
                //array[i+3] win
                //array[i+4] lose
                array[i+3][0]++;
            }
            else if(strcmp(founduser.username,array[i])== 0){
                array[i+4][0]++;
            }
        }
    }
    file_rewrite();
    system("pause");
    system("cls");
    hp_player1 = 3;
    hp_player2 = 3;
    maping2();
    kelos++;
    if(kelos == 2){
        return 0;
    }
    game();
}


int menu(){

char array[4][20] = {"Start","Edit Profile","User information","Main Menu"};
int j = 0;
while(1){
for(int i = 0;i<4;i++){
    if(i!=j){
        printf(White "\t\t%s\n\n", array[i]);
    }
    else if(i==j){
        printf(Yellow "\t\t%s\n\n", array[i]);
    }
        }
        char dstr = getch();
        if(dstr == 's'){
            if(j!=3){
                j++;
            }
            system("cls");
            continue;
        }
        else if(dstr == 'w'){
            if(j!=0){
                j--;
            }
            system("cls");
            continue;
        }
        else if(dstr == '\r'){
            if(j==3){
                system("cls");
                return 0;
                }
               else if(j==2){
                system("cls");
                    user_info();
                    system("cls");
                }
                else if(j==1){
                    system("cls");
                    arraing();
                    change_settings();
                    system("cls");
                }
                else if(j==0){
                    system("cls");
                    int xx = sing_in2();
                    system("cls");
                    if(xx==1){
                        for(int w = 0;w<3;w++){
                            if(w==1){
                                maping();
                            }
                            printf(Yellow  "\t\tLoading");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            system("cls");
                        }
                        kelos = 0;
                        game();
                        continue;
                    }
                }
            }
            else{
                system("cls");
            }
        }
     
    }


int sign(){
    system("cls");
    printf(RED "\t\tWelcome " Green "to " Cyan "Space War\n\n");
    getch();
    system("cls");
    char arrays[4][30] = {{"Sign up"},
                          {"Sign in"},
                          {"Forgot Password"},
                          {"Quit"}};
                          int j = 0;
    while(1){
        for(int i = 0;i<4;i++){
            if(i==j){
                printf(Yellow "\t\t%s\n\n", arrays[i]);
            }
            else{
                printf(White "\t\t%s\n\n", arrays[i]);
            }
        }
        char z = getch();
    if(z == '\r'&& j==0){
        system("cls");
        sign_up();
        continue;
    }
    else if(z == '\r' && j==1){
          system("cls");
        int d = 0;
         d = sign_in();
         if(d==1){
        menu();
        continue;}
    }
    else if(z=='\r' && j==2){
        system("cls");
        forget_password();
        continue;
    }
    else if(z=='\r'&&j==3){
        exit(0);  
          }
    else if(z=='w' && j>0){
        j--;
        system("cls");
        continue;
    }
    else if(z=='s' && j<3){
        j++;
        system("cls");
        continue;
    }
       else{
        system("cls");
        continue;
       }
       system("cls");
    }
}


int main(){   
    sign();
    return 0;
}
