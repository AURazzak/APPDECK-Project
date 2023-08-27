#include<stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include<unistd.h>
#include<Windows.h>
#include<math.h>
void login();
void mainPage();
void college();
void travel();
void periodic();
void bank();
void stopwatch();
void calculator();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void square();
void cube();
void squareroot();
void trigonometry();
void logarithm();
void factorial();
int main()
{
    login();

    mainPage();

}

void mainPage()
{
    int choice;
    system("cls");
    system("color a");
mainpage:
    printf("\n\n\n\n\n\t\t\t=========================================================================================================\n");
    printf("   \t\t\t\t\t\t\t\t\6\6\6\6\6Welcome To APPDECK\6\6\6\6\6\n");
    printf("\t\t\t=========================================================================================================\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t1.Press (1) for COllege Requirement App. \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t2.Press (2) for Travelling App.          \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t3.Press (3) for Modern Periodic Table.   \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t4.Press (4) for AUR Bank Service.        \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t5.Press (5) for STOPWATCH.         \t\5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t6.Press (6) for Modern Calculator.\t \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n");
    printf("\t\t\t\t\t\t   \5\t7.Press (7) for GO TO MAIN MENU.         \5\n");
    printf("\t\t\t\t\t\t   -----------------------------------------------\n\n\n\n\n");
    printf("\t\t\t\t\t\t    Enter Your Choice:");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    {
        college();
    }
    case 2:
    {
        travel();
    }
    case 3:
    {
        periodic();
    }
    case 4:
    {
        bank();
    }
    case 5:
    {
        stopwatch();
    }
    case 6:
    {
        calculator();
    }
    case 7:
    {

    }
    }


}


void login()
{

    int choice;
    char signup[15], signupPassword[12];
    char username[15];
    char password[12];




frontPage:

    {
        system("cls");
        system("color a");
        printf("\n\n\n\n\n\t\t\t\t\t\t   ----------------------------------------------\n");
        printf("\t\t\t\t\t\t   \5\t1.Press (1) for CREATE A NEW ACCOUNT.   \5\n");
        printf("\t\t\t\t\t\t   ----------------------------------------------\n");
        printf("\t\t\t\t\t\t   \5\t1.Press (2) for LOGIN          \t\t\5\n");
        printf("\t\t\t\t\t\t   ----------------------------------------------\n\n\n\n");
        printf("\t\t\t\t\t\t    Enter Your Choice:");
        scanf("%d", &  choice);
    }
    switch(choice)
    {

    case 1:
part1:
        {
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t");
            printf("Please enter a new username:");
            scanf("%s",& signup);
            printf("\t\t\t\t\t\tPlease enter your new password:");
            scanf("%s", & signupPassword);
        }
        goto frontPage;

    case 2 :
part2:
        {
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t");
            printf("Enter your username:");
            scanf("%s",&username);
            printf("\t\t\t\t\t\tEnter your password:");
            scanf("%s",&password);
        }


        if(strcmp(signup,username)==0)
        {
            if(strcmp(signupPassword,password)==0)
            {
                system("cls");
                printf("\n\n\n\n\n\n\t\t\t\t\t\t------------\5\5\5Welcome.Login Successful!!!\5\5\5--------------");
                printf("\n\n\n\t\t\t\t\t\t\t\tEnter (1) for go to main menu.");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                }
                }


            }
            else
            {
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\tWrong Password.Try Again Please.");
                printf("\n\n\n\t\t\t\t\t\t1.press (1) for Try Again.");

                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    goto part2;
                }
                }
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\tUser doesn't exist");
            printf("\n\n\n\t\t\t\t\t\t1.press (1) for try again.");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto part1;
            }
            }
        }
        break;


    }

    return 0;
}

void college()
{

    system("color b");
    int choice;
    float gpa;


    system("cls");
    printf("\n\n\n\n\n\t\t\t=========================================================================================================\n");
    printf("   \t\t\t\t\t\t\t\6\6\6\6\6Welcome To COllege Requirement App\6\6\6\6\6\n");
    printf("\t\t\t=========================================================================================================\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter your GPA:");
    scanf("%f",&gpa);

    if(gpa>=2.35 && gpa<=5.00)
    {
menu:
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.Science\n\t\t\t\t\t\t\t\t\t2.Commerce\n\t\t\t\t\t\t\t\t\t3.Arts\n\n");
            printf("\t\t\t\t\t\t\t\tChoice your study group:");
            scanf("%d",&choice);
        }
        switch(choice)
        {
        case 1:
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Scholarshome Shahi-Eidgah College.\n\t\t\t\t\t\t\t\t2.Jalalabad Cantonment College.\n\t\t\t\t\t\t\t\t3.Sylhet Cadet College.\n\t\t\t\t\t\t\t\t4.Border  Guard Public School & College.\n\t\t\t\t\t\t\t\t5.Sylhet Government College.\n\t\t\t\t\t\t\t\t6.Sylhet Government Womens College.\n\t\t\t\t\t\t\t\t7.Sylhet Blue Bird School & College.\n\t\t\t\t\t\t\t\t8.Sylhet Science College.\n\t\t\t\t\t\t\t\t9.MC College.\n\t\t\t\t\t\t\t\t10.The Sylhet Khajanchibari International School.");
            printf("\n\t\t\t\t\t\t\t\tSelect your Dream College:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Scholarshome Shahi-Eidgah College\n\t\t\t\t\t\tCollege Location: Shahi-Eidgah ,Sylhet\n\t\t\t\t\t\tCollege Ranking: 3\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month\n\t\t\t\t\t\tCollege Requirement: GPA-5, Good academic result\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition\n");
                printf("\n\t\t\t\t\t\t1.press(1) for go to menu.\n");
                printf("\n\t\t\t\t\t\t2.press(2) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                case 2:
                {
                    mainPage();
                }

                }
            }
            case 2:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Jalalabad Cantonment College");
                printf("\n\t\t\t\t\t\tCollege Location: Botesshor ,Sylhet");
                printf("\n\t\t\t\t\t\tCollege Ranking: 2");
                printf("\n\t\t\t\t\t\tCollege Cost: 2500 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-more than 4.80, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC.");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130459");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 01783056442");
                printf("\n\t\t\t\t\t\tCollege Site: http://www.jcpsc.edu.bd/");
                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }


            case 3:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Cadet College.");
                printf("\n\t\t\t\t\t\tCollege Address: Airport Road,Sylhet-3101, Bangladesh.");
                printf("\n\t\t\t\t\t\tCollege Ranking: 1");
                printf("\n\t\t\t\t\t\tCollege Cost: 2500 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-5, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130395");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 08217-14819");
                printf("\n\t\t\t\t\t\tCollege Site: scc_sylhet@yahoo.com");
                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }

            case 4:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Border Guard Public School & College");
                printf("\n\t\t\t\t\t\tCollege Location: Modina-Market ,Sylhet");
                printf("\n\t\t\t\t\t\tCollege Ranking: 7");
                printf("\n\t\t\t\t\t\tCollege Cost: 2200 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.60, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                printf("\n\t\t\t\t\t\tCollege EIIN : 136916");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 0821719363");
                printf("\n\t\t\t\t\t\tCollege Site: http://www.bgpscsylhet.edu.bd");
                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 5:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Government College.");
                printf("\n\t\t\t\t\t\tCollege Location: Tamabil Road, Tilagor, Sylhet.");
                printf("\n\t\t\t\t\t\tCollege Ranking: 8");
                printf("\n\t\t\t\t\t\tCollege Cost: 200 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.00, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130450");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 0821760435");
                printf("\n\t\t\t\t\t\tCollege Site: https://sylgovcollege.edu.bd/");

                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 6:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Government Womens College.");
                printf("\n\t\t\t\t\t\tCollege Location: Chowhatta, Sadar Sylhet - 3100	");
                printf("\n\t\t\t\t\t\tCollege Ranking: 8");
                printf("\n\t\t\t\t\t\tCollege Cost: 200 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.50, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130453");
                printf("\n\t\t\t\t\t\tCollege Phone Number: +880 1733 377607");
                printf("\n\t\t\t\t\t\tCollege Site: https://sgwc.edu.bd/");
                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 7:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Blue Bird School & College ");
                printf("\n\t\t\t\t\t\tLocation: Mirer Moydan,Sylhet");
                printf("\n\t\t\t\t\t\tCollege Ranking: 5");
                printf("\n\t\t\t\t\t\tCollege Cost: 1200 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130401");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 01714388116");
                printf("\n\t\t\t\t\t\tCollege Site: http://www.bbsc.edu.bd");


                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 8:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Science And Technology College");
                printf("\n\t\t\t\t\t\tCollege Location: Ornab-03, Mirrer Moydan, Sylhet.");
                printf("\n\t\t\t\t\t\tCollege Ranking: 7");
                printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.50, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                printf("\n\t\t\t\t\t\tCollege EIIN : 136977.");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 0821-715699, 01938-888240.");
                printf("\n\t\t\t\t\t\tCollege Site: https://mrf-sstc.edu.bd/index.php/user/contact");


                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 9:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Murari Chand College");
                printf("\n\t\t\t\t\t\tCollege Location: Tilagor,Sylhet.");
                printf("\n\t\t\t\t\t\tCollege Ranking: 9");
                printf("\n\t\t\t\t\t\tCollege Cost: 200-300 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-5.00, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                printf("\n\t\t\t\t\t\tCollege EIIN : 130457");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 01701450820");
                printf("\n\t\t\t\t\t\tCollege Site: https://mccollege.edu.bd/home");
                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            case 10:
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: The Sylhet Khajanchibari International School.");
                printf("\n\t\t\t\t\t\tCollege Location: Sylhet Sadar.");
                printf("\n\t\t\t\t\t\tCollege Ranking: 10");
                printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.80, Good academic result");
                printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");

                printf("\n\t\t\t\t\t\tCollege EIIN : 131086");
                printf("\n\t\t\t\t\t\tCollege Phone Number: 01718240074");
                printf("\n\t\t\t\t\t\tCollege Site: https://www.sohopathi.com/the-sylhet-khajanchibari-international-school-and-college");


                printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                printf("\n\t\t\t\t\t\tEnter your choice:");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    goto menu;
                }
                }
            }
            }

            case 2 :
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Scholarshome Shahi-Eidgah College.\n\t\t\t\t\t\t\t\t2.Sylhet Blue Bird School & College.\n\t\t\t\t\t\t\t\t3.Sylhet Central Womens College\n\t\t\t\t\t\t\t\t4.Sylhet Chartered College.\n\t\t\t\t\t\t\t\t5.Government Agragami Girls High School & College.\n\t\t\t\t\t\t\t\t6.Jalalabad Cantonment College.\n\t\t\t\t\t\t\t\t7.Madan Mohan College\n\t\t\t\t\t\t\t\t8.Sylhet Jalalabad College.\n\t\t\t\t\t\t\t\t9.Metrocity Women's College.\n\t\t\t\t\t\t\t\t10.Sylhet Commerce College.");
                printf("\n\t\t\t\t\t\t\t\tSelect your Dream College:");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Scholarshome Shahi-Eidgah College\n\t\t\t\t\t\tCollege Location: Shahi-Eidgah ,Sylhet\n\t\t\t\t\t\tCollege Ranking: 3\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month\n\t\t\t\t\t\tCollege Requirement: GPA-5, Good academic result\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition\n");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 2:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Blue Bird School & College .");
                    printf("\n\t\t\t\t\t\tCollege Location: Mirer Moydan,Sylhet.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 5");
                    printf("\n\t\t\t\t\t\tCollege Cost: 1200 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.00, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130401");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 01714388116");
                    printf("\n\t\t\t\t\t\tCollege Site: http://www.bbsc.edu.bd");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }


                case 3:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Central Womens College.");
                    printf("\n\t\t\t\t\t\tCollege Address: Noyashorok,Sylhet, Bangladesh.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 3");
                    printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130395");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 08217-14819");
                    printf("\n\t\t\t\t\t\tCollege Site: scwc@yahoo.com");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }

                case 4:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Chartered College");
                    printf("\n\t\t\t\t\t\tCollege Location: Modina-Market ,Sylhet");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 7");
                    printf("\n\t\t\t\t\t\tCollege Cost: 2200 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.60, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 136916");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 0821719363");
                    printf("\n\t\t\t\t\t\tCollege Site: http://www.ccsylhet.edu.bd");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 5:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Government Agragami Girls High School & College.");
                    printf("\n\t\t\t\t\t\tCollege Location: Zindabazar, Sylhet.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 8");
                    printf("\n\t\t\t\t\t\tCollege Cost: 1100 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.00, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130450");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 0821760435");
                    printf("\n\t\t\t\t\t\tCollege Site: https://gaghsc.edu.bd/");

                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 6:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Jalalabad Cantonment College");
                    printf("\n\t\t\t\t\t\tCollege Location: Botesshor ,Sylhet");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 2");
                    printf("\n\t\t\t\t\t\tCollege Cost: 2500 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-more than 4.50, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC.");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130459");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 01783056442");
                    printf("\n\t\t\t\t\t\tCollege Site: http://www.jcpsc.edu.bd/");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 7:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:Modan Mohan College");
                    printf("\n\t\t\t\t\t\tCollege Location: LamaBazar Road ,Sylhet");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 4");
                    printf("\n\t\t\t\t\t\tCollege Cost: 190 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-3.20, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130452");
                    printf("\n\t\t\t\t\t\tCollege Phone Number:  0821714343");
                    printf("\n\t\t\t\t\t\tCollege Site: http://www.mmc.edu.bd");

                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 8:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Jalalabad College");
                    printf("\n\t\t\t\t\t\tCollege Location: Subhanigat, Sylhet.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 2");
                    printf("\n\t\t\t\t\t\tCollege Cost: 1800 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.00, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 136689.");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 0821-715699, ");
                    printf("\n\t\t\t\t\t\tCollege Site: https://sjc.edu.bd/index.php/user/contact");


                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 9:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:Metrocity Women's College");
                    printf("\n\t\t\t\t\t\tCollege Location: Barutkhana,Sylhet.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 9");
                    printf("\n\t\t\t\t\t\tCollege Cost: 1700 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-2.80, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 130457");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 01705746473");
                    printf("\n\t\t\t\t\t\tCollege Site: https://mwcollege.edu.bd/home");
                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                case 10:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet Commarce College");
                    printf("\n\t\t\t\t\t\tCollege Location: Ornab-06, Mirrer Moydan, Sylhet.");
                    printf("\n\t\t\t\t\t\tCollege Ranking: 1");
                    printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                    printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.50, Good academic result");
                    printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                    printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                    printf("\n\t\t\t\t\t\tCollege EIIN : 136977.");
                    printf("\n\t\t\t\t\t\tCollege Phone Number: 0821-715699, 01938-888240.");
                    printf("\n\t\t\t\t\t\tCollege Site: https://mrf-ssc.edu.bd/index.php/user/contact");


                    printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                    printf("\n\t\t\t\t\t\tEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        goto menu;
                    }
                    }
                }
                }
                case 3:
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t1.Sylhet City College.\n\t\t\t\t\t\t\t\t2.Jalalabad Cantonment School & College.\n\t\t\t\t\t\t\t\t3.Scholarshome Shahi-Eidgah College\n\t\t\t\t\t\t\t\t4.Modan Mohan College..\n\t\t\t\t\t\t\t\t5.Sylhet Blue Bird School & College.\n\t\t\t\t\t\t\t\t6.State College.\n\t\t\t\t\t\t\t\t7.Sholarshome Mejortila College\n\t\t\t\t\t\t\t\t8.Border Guard Public School & College.\n\t\t\t\t\t\t\t\t9.SARCC International College.\n\t\t\t\t\t\t\t\t10.Amborkhana Girls High School & College.");
                    printf("\n\t\t\t\t\t\t\t\tSelect your Dream College:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Sylhet City College\n\t\t\t\t\t\tCollege Location: Uposhohor,Sylhet\n\t\t\t\t\t\tCollege Ranking: 3\n\t\t\t\t\t\tCollege Cost: 1400 Taka per month\n\t\t\t\t\t\tCollege Requirement: GPA-3.50, Good academic result\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition\n");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 2:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Jalalabad Cantonment College");
                        printf("\n\t\t\t\t\t\tCollege Location: Botesshor ,Sylhet");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 2");
                        printf("\n\t\t\t\t\t\tCollege Cost: 2500 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-more than 4.50, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC.");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 130459");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 01783056442");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.jcpsc.edu.bd/");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }


                    case 3:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Scholarshome Shahi-Eidgah College .");
                        printf("\n\t\t\t\t\t\tCollege Address:Shahi-Eidgah ,Sylhet, Bangladesh.");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 1");
                        printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-5, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 132076");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 01728777481");
                        printf("\n\t\t\t\t\t\tCollege Site: //www.scholarshome.edu.bd/");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }

                    case 4:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:Modan Mohan College");
                        printf("\n\t\t\t\t\t\tCollege Location: LamaBazar Road ,Sylhet");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 4");
                        printf("\n\t\t\t\t\t\tCollege Cost: 190 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-3.20, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 130452");
                        printf("\n\t\t\t\t\t\tCollege Phone Number:  0821714343");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.mmc.edu.bd");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 5:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Blue Bird School & College .");
                        printf("\n\t\t\t\t\t\tCollege Location: Mirer Moydan,Sylhet.");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 5");
                        printf("\n\t\t\t\t\t\tCollege Cost: 1200 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.00, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 130401");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 01714388116");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.bbsc.edu.bd");

                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 6:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:College Name: State College.");
                        printf("\n\t\t\t\t\t\tCollege Location:MojumdarPara ,Shibgonj ,Sylhet");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 8");
                        printf("\n\t\t\t\t\t\tCollege Cost: 1500 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-3.00, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                        printf("\n\t\t\t\t\t\tCollege EIIN :  135236");
                        printf("\n\t\t\t\t\t\tCollege Phone Number:  01612030609");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.ghsc.edu.bd");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 7:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:Schoolarshome Majortila College ");
                        printf("\n\t\t\t\t\t\tLocation: MajorTila ,Sylhet");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 6");
                        printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.20, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 136459");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 01713362807");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.scholarshome.edu.bd/");


                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 8:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: Border Guard Public School & College");
                        printf("\n\t\t\t\t\t\tCollege Location: Ornab-03, Mirrer Moydan, Sylhet.");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 7");
                        printf("\n\t\t\t\t\t\tCollege Cost: 2000 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.60, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition,BNCC,");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 1366916.");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 0821719363.");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.bgpscsylhet.edu.bd");


                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 9:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name: SARCC College");
                        printf("\n\t\t\t\t\t\tCollege Location: Darjipara,Raynagar,Sylhet.");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 9");
                        printf("\n\t\t\t\t\t\tCollege Cost: 1300 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-5.00, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");
                        printf("\n\t\t\t\t\t\tCollege EIIN : 134655");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 01742787473");
                        printf("\n\t\t\t\t\t\tCollege Site: http://www.sicb.edu.bd");
                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    case 10:
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCollege Name:Amborkhana Girls High School & College.");
                        printf("\n\t\t\t\t\t\tCollege Location: Housing-State,Sylhet.");
                        printf("\n\t\t\t\t\t\tCollege Ranking: 10");
                        printf("\n\t\t\t\t\t\tCollege Cost: 1800 Taka per month");
                        printf("\n\t\t\t\t\t\tCollege Requirement: GPA-4.80, Good academic result");
                        printf("\n\t\t\t\t\t\tCollege Facilities: Modern library,Advanced computer lab,Cafeteria");
                        printf("\n\t\t\t\t\t\tCollege Extra Caricular Activities: Cultural program,Sports competition,Debate programe, Quiz competition");

                        printf("\n\t\t\t\t\t\tCollege EIIN : 136916");
                        printf("\n\t\t\t\t\t\tCollege Phone Number: 0821717369");
                        printf("\n\t\t\t\t\t\tCollege Site: www.agscollege-syl.edu.bd");


                        printf("\n\t\t\t\t\t\t1.press(1) for go to main menu.\n");
                        printf("\n\t\t\t\t\t\tEnter your choice:");
                        scanf("%d",&choice);

                        switch(choice)
                        {
                        case 1:
                        {
                            system("cls");
                            goto menu;
                        }
                        }
                    }
                    }

                }


                getch();
            }
        }
        }

    }
}
void travel()
{

    int choice,cn[1000];


Main_Menu:
    {
        system("color 05");
        system("cls");
        printf("\n\n\n\n\t\t\t ***************************************************************\n");
        printf("\t\t\t\t\t WELCOME TO OUR TRAVELLING APP\n");
        printf("\t\t\t ***************************************************************\n\n");
        printf("\n\t\t\t\t\t Country name you wish to visit:\n");
        printf("\t\t\t\t\t 1.India\n");
        printf("\t\t\t\t\t 2.Spain\n");
        printf("\t\t\t\t\t 3.Italy\n");
        printf("\t\t\t\t\t 4.USA\n");
        printf("\t\t\t\t\t 5.Malaysia\n");
        printf("\t\t\t\t\t 6.Turkey\n");
        printf("\t\t\t\t\t 7.UK\n");
        printf("\t\t\t\t\t 8.France\n");
        printf("\t\t\t\t\t 9.Japan\n");
        printf("\t\t\t\t\t 10.South Korea\n");
        printf("\n\t\t\t\t\t Choose a Country you wish to visit: ");
        scanf("%d",&choice);
    }
    switch(choice)
    {
    case 1:
    {
menu0:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\t City name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.New Delhi\n");
            printf("\t\t\t\t\t 2.Agra\n");
            printf("\t\t\t\t\t 3.Kalkatta\n");
            printf("\t\t\t\t\t 4.Mumbai\n");
            printf("\n\t\t\t\t\tChoose a City You want to Visit: ");
            scanf("%d",&cn[0]);
        }
        switch(cn[0])
        {
        case 1:
        {
            system("cls");
            printf("City Name: New Delhi\n\n");
            printf("City Time: 30 minutes behind Bangladesh\n\n");
            printf("Country Currency: Rupee\n\n");
            printf("Currency with respect to Bangladesh:1 Rupee =1.14 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost - The average price of a 7-day trip to New Delhi is $1,171 for a solo traveler, $2,103 for a couple, and $3,943 for a family of 4.\n\n");
            printf("New Delhi hotels range from $17 to $105 per night with an average of $32, while most vacation rentals will cost $90 to $340 per night for the entire home.\n\n");
            printf("Famous Destinations: The Red Fort, Qutub Minar, India Gate, The Lotus Temple, Purana Qila (The Old Fort), Humayun's Tomb, etc.\n\n");
            printf("Language: Hindi is the main official language, Punjabi and Urdu are also in addition.\n\n");
            printf("Visa Receiving Time: three working days.\n\n");
            printf("Minimum Days Needed To View City: at least 3 full days to finish visiting\n\n");
            printf("Famous Food:Chaat, Chole Bhature, Biryani, momos, Nihari, etc.\n\n");
            printf("National Religion: Hinduism\n\n");
            printf("Festivals: Holi, Diwali, Eid.\n\n");
            printf("Sports: Cricket, Soccer, Tennis, etc.\n\n");
            printf("1.Menu\n");
            printf("2.Previous Menu\n\n");
            printf("3.Main Menu\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu0;
            }
            case 3:
            {
                mainPage();
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Agra\n\n");
            printf("City Time: 30 minutes behind Bangladesh\n\n");
            printf("Country Currency: Rupee\n\n");
            printf("Currency with respect to Bangladesh: 1 Rupee =1.14 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Agra is $1,029 for a solo traveler, $1,848 for a couple, and $3,465 for a family of 4.\n\n");
            printf("Agra hotels range from $19 to $57 per night with an average of $24, while most vacation rentals will cost $20 to $240 per night for the entire home.\n\n");
            printf("Famous Destinations: Taj Mahal. Agra Fort, Mehtab Bagh, Fatehpur Sikri, Agra's Old City are mentionable.\n\n");
            printf("Language: Hindi.\n\n");
            printf("Visa Receiving Time: three working days.\n\n");
            printf("Minimum Days Needed To View City: at least 2 full days.\n\n");
            printf("Famous Food: Petha, Paratha, Mughlai, Balla, Dalmoth, jalebi, tandoori chicken\n\n");
            printf("National Religion: Hinduism.\n\n");
            printf("Festivals: Taj Mahotsav, Ram Barat, Kailash Fair, Bateshwar Fair., Hot Air Balloon Festival.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu0;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Kolkata\n\n");
            printf("City Time: 30 minutes behind Bangladesh\n\n");
            printf("Country Currency: Rupee\n\n");
            printf("Currency with respect to Bangladesh: 1 Rupee =1.14 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Kolkata is $1,305 for a solo traveler, $2,344 for a couple, and $4,394 for a family of 4.\n\n");
            printf("Kolkata hotels range from $28 to $108 per night with an average of $47, while most vacation rentals will cost $20 to $220 per night for the entire home.\n\n");
            printf("Famous Destination: victoria Memorial, fort William, Belur Math, Howrah Bridge, Eden Garden, etc.\n\n");
            printf("Language: Hindi\n\n");
            printf("Visa Receiving Time: three working days.\n\n");
            printf("Minimum Days Needed To View City:1-3 days\n\n");
            printf("Famous Food: Macher Jhol (Fish curry), Kosha Mangsho (Mutton Curry), Shorshe Ilish (Hilsa Fish Cooked in Mustard Gravy), Aloo Posto (Spiced Potatoes Cooked in Poppy Seeds), Lucchi (Bengali Fried Flatbread) etc.\n\n");
            printf("National Religion: Hinduism\n\n");
            printf("Festivals: Basant Panchami, Bijaya Dashami, Bhai Phonta, Holi, Mahavir Jayanti, Buddha Jayanti, Rathyatra, and Christmas.\n\n");
            printf("Sports: Cricket, football.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu0;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Mumbai\n\n");
            printf("City Time: 30 minutes behind Bangladesh\n\n");
            printf("Country Currency: Rupee\n\n");
            printf("Currency with respect to Bangladesh- 1 Rupee =1.14 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Mumbai is $1,365 for a solo traveler, $2,452 for a couple, and $4,596 for a family of 4.\n\n");
            printf("Famous Destination:Gateway of India, Sanjay Gandhi National Park, Haji Ali Dargah, Elephanta Caves, Chhatrapati Shivaji Terminus, etc.\n\n");
            printf("Language: Hindi\n\n");
            printf("Visa Receiving Time: three working days.\n\n");
            printf("Minimum Days Needed To View City: at least 3 days\n\n");
            printf("Famous Food- Akuri on toast, Baida roti, Batata vada, Butter chicken, The Bombay sandwich etc.\n\n");
            printf("National Religion: Hinduism\n\n");
            printf("Festivals- Navratri, Diwali, Elephanta Festival, Banganga Festival, Mumbai International Film Festival, Kala Ghoda Festival.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu0;
            }
            }
            break;
        }
        }
    }
    break;
    case 2:
    {
menu1:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\t City name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Bersolona\n");
            printf("\t\t\t\t\t 2.Real Madrid\n");
            printf("\t\t\t\t\t 3.Valencia\n");
            printf("\t\t\t\t\t 4.Seville\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[1]);
        }
        switch(cn[1])
        {
        case 1:
        {
            system("cls");
            printf("City name:Barcelona\n\n");
            printf("City time :-Bangladesh is 5 hours ahead of Barcelona, Spain\n\n");
            printf("Country currency : The Euro €\n\n");
            printf("Currency with respect to Bangladesh:1.00 Euro=97.140424 Bangladeshi Taka,1 BDT= 0.0102944 EUR\n\n");
            printf("Average Travelling Cost: €107($121) per day.\n\n");
            printf("Famous destination : Sagrada Familia Language :-Catalan and Spanish. \n\n");
            printf("visa receiving time : 15 working days\n\n");
            printf("Minimum Days Needed To View City: 4 days\n\n");
            printf("Famous food : Seafood Paella\n\n");
            printf("Cuisine : Seafood Paella\n\n");
            printf("National Religion : Catholic Christianity\n\n");
            printf("Festivals: Sonar,Cruilla Barcelona,La Mercè,Primavera Sound etc\n\n");
            printf("Sports: football to Hockey\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu1;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Real Madrid \n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Madrid, Spain\n\n");
            printf("Country Currency: Euro €\n\n");
            printf("Currency with respect to Bangladesh: 1.00 Euro =96.957997 Bangladeshi Taka,1 BDT = 0.0103137 EUR\n\n");
            printf("Average Travelling Cost:  €107 ($121) per day.\n\n");
            printf("Famous Destination:Prado Museum \n\n");
            printf("Language: Castilian Spanish \n\n");
            printf("Visa Receiving Time: Minimum Days Needed To View City:4 days\n\n");
            printf("Famous Food: Potato tortilla\n\n");
            printf("Cuisine: Paella Valenciana\n\n");
            printf("National Religion:Catholicism \n\n");
            printf("Festivals:Virgen de La Paloma,mad cool, Noche en Blanco etc\n\n");
            printf("Sports:Football \n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu1;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Valencia\n\n");
            printf("City Time: Valencia City is 2 hours ahead of Bangladesh\n\n");
            printf("Country currency : Euro\n\n");
            printf("Currency with respect to Bangladesh: 1 Spanish Peseta=0.57811389 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: 7-day trip to Valencia is $1,263 for a solo traveler, $2,268 for a couple, and $4,253 for a family of 4\n\n");
            printf("Famous Destination: City of Arts and Sciences \n\n");
            printf("Language: Spanish\n\n");
            printf("Visa Receiving Time: 18 working days\n\n");
            printf("Minimum Days Needed To View City:four to five days \n\n");
            printf("Famous Food: Paella\n\n");
            printf("Cuisine: Mediterranean cuisine \n\n");
            printf("National Religion: Roman Catholic\n\n");
            printf("Festivals: Falles, La tomatina, Grand Fira de Valencia \n\n");
            printf("Sports: Valencia CF\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu1;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Sevilla \n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Seville, Spain\n\n");
            printf("Country Currency: Euro\n\n");
            printf("Currency with respect to Bangladesh:1 Spanish Peseta=0.57811389 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: $1,263 For a solo traveller\n\n");
            printf("Famous Destination:around €99 ($112) per day\n\n");
            printf("Language: ceceo\n\n");
            printf("Visa Receiving Time: 15 working days.\n\n");
            printf("Minimum Days Needed To View City: Two or three days\n\n");
            printf("Famous Food: Torrijas/Serranito/Espinacas con garbanzos\n\n");
            printf("Cuisine: Serranito,Solomillo al whisky,Montadito de pringá\n\n");
            printf("National Religion: Roman Catholicism\n\n");
            printf("Festivals:Fiesta de las Patios,Feria de Abril,Romeria del Rocio\n\n");
            printf("Sports:football (soccer),equestrian sports.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu1;
            }
            }
            break;
        }
        }
    }
    break;
    case 3:
    {
menu2:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Rome\n");
            printf("\t\t\t\t\t 2.Milan\n");
            printf("\t\t\t\t\t 3.Venice\n");
            printf("\t\t\t\t\t 4.Vetican City\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[2]);
        }
        switch(cn[2])
        {
        case 1:
        {
            system("cls");
            printf("City Name: Rome\n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Rome\n\n");
            printf("Country Currency: Euro \n\n");
            printf("Currency with respect to Bangladesh: 1Euro = 97Tk\n\n");
            printf("Average Travelling Cost: Euro 1057\n\n");
            printf("Famous Destination:  Pantheon, The Colosseum, Trevi Fountain, Sistine Chapel\n\n");
            printf("Language: Italian \n\n");
            printf("Visa Receiving Time: 15 days\n\n");
            printf(" Minimum Days Needed To View City: 3 days\n\n");
            printf("Famous Food: Rigatoni Carbonara, Bucatini Amatriciana, Supplì, Maritozzi\n\n");
            printf("Cuisine: Risotto and Pizza\n\n");
            printf("National Religion: Roman Catholicism\n\n");
            printf("Festivals: Carnevale Di Roma, Saturnalia\n\n");
            printf("Sports: boxing, acrobatics, tightrope walking,\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu2;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Milan\n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Milan\n\n");
            printf("Country Currency: Euro \n\n");
            printf(" Currency with respect to Bangladesh: 1Euro = 97Tk\n\n");
            printf("Average Travelling Cost: Euro 413 \n\n");
            printf("Famous Destination:  Duomo di Milano, Sforzesco Castle, Galleria Vittorio Emanuele II\n\n");
            printf("Language: Italian \n\n");
            printf("Visa Receiving Time: 15 days\n\n");
            printf("Minimum Days Needed To View City: 3 days\n\n");
            printf("Famous Food: Costoletta alla Milanese, Panettone, Ossobuco.\n\n");
            printf("Cuisine: Risotto alla Milanese.\n\n");
            printf("National Religion: Roman Catholicism\n\n");
            printf("Festivals: CMilan Fashion Week, Saint Ambrose Festival, Milan Jazz. \n\n");
            printf("Sports: Football, Basketball, Volleyball\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu2;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Venice\n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Venice\n\n");
            printf("Country Currency: Euro \n\n");
            printf("Currency with respect to Bangladesh: 1Euro = 97Tk\n\n");
            printf("Average Travelling Cost: Euro 423\n\n");
            printf("Famous Destination:  Rialto Bridge, Saint Mark's Basilica, Doge's Palace\n\n");
            printf("Language: Italian\n\n");
            printf("Visa Receiving Time: 15 days\n\n");
            printf("Minimum Days Needed To View City: 3 days\n\n");
            printf("Famous Food: Sarde in saor, Baccala mantecato, Risi e bisi\n\n");
            printf("Cuisine: Bogoli in Salsa\n\n");
            printf("National Religion: Roman Catholicism\n\n");
            printf("Festivals: Carnival, La Sensa, The Vogalonga.\n\n");
            printf("Sports: Boating and Regattas, Football / Soccer, Golf Courses.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu2;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Vatican city\n\n");
            printf("City Time: Bangladesh is 5 hours ahead of Vatican city\n\n");
            printf("Country Currency: Euro \n\n");
            printf("Currency with respect to Bangladesh: 1Euro = 97Tk\n\n");
            printf("Average Travelling Cost: Euro 345\n\n");
            printf("Language: Italian \n\n");
            printf("Visa Receiving Time: 15 days\n\n");
            printf("Minimum Days Needed To View City: 3 days\n\n");
            printf("Famous Food: pasta, polenta, and risotto dishes.\n\n");
            printf("Cuisine: Risotto Dishes,Antipasto\n\n");
            printf("National Religion: Roman Catholicism\n\n");
            printf("Festivals: Christmas Eve Midnight Mass, New Year's Parade, Papal Audience. \n\n");
            printf("Sports: football, Basketball, Volleyball\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu2;
            }
            }
            break;
        }
        }
    }
    break;
    case 4:
    {
menu3:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.New York\n");
            printf("\t\t\t\t\t 2.Los Angeles\n");
            printf("\t\t\t\t\t 3.Denver\n");
            printf("\t\t\t\t\t 4.Los Vegas\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[3]);
        }
        switch(cn[3])
        {
        case 1:
        {
            system("cls");
            printf("City Name: New York\n\n");
            printf("City Time: UTC/GMT -5hours. 11hours behind Bangladesh\n\n");
            printf("Country Currency: $,USD,US$\n");
            printf("Currency with respect to Bangladesh: 1US dollar=85.78 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost: $2057\n\n");
            printf("Famous Destination: The metropolitan museum of Art,The museum of modern Art,Statue of Liberty National monument,Empire’s state Building,Solomon R.Guggenheim.\n\n");
            printf("Language: English\n\n");
            printf("Visa Receiving Time: 3 to 5 weeks\n\n");
            printf("Minimum Days Needed To View City: At least 6-7 days\n\n");
            printf("Famous Food: Manhattan clam chowder,style baged,style pastrami,baked pretzels,style Italian ice etc\n\n");
            printf("Cuisine: Pastrami on Rye,Coal Oven Pizza,Garbage Plate,Cronut.\n\n");
            printf("National Religion: Catholics\n\n");
            printf("Festivals: Christmas spectacular starring the Radio city Rockettes,Rockefeller center Christmas trees,Macy’s thanksgiving day parade,The village Helloween parade,St.Patrick’s Day parade New York City.\n\n");
            printf("Sports: Basketball,Soccer,New York yankees,Baseball\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu3;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Los Angeles\n\n");
            printf("City Time: 14hours behind Bangladesh\n\n");
            printf("Country Currency: USD\n\n");
            printf("Currency with respect to Bangladesh: 1USD=85.78Bangaladeshi taka\n\n");
            printf("Average Travelling Cost: $1984\n\n");
            printf("Famous Destination: The Getty ,Disneyland park ,Los Angeles county Museum of Art \n\n");
            printf("Language: English\n\n");
            printf("Visa Receiving Time: 3 to 5 weeks\n\n");
            printf("Minimum Days Needed To View City: At least 6-7 days\n\n");
            printf("Famous Food: pasta al limone,lemonade\n\n");
            printf("Cuisine: Thai foods,Korean foods,Chinese foods\n\n");
            printf("National Religion: catholic \n\n");
            printf("Festivals: Moonlight forest tournament of Roses parade,Nisei week\n\n");
            printf("Sports: Basketball\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu3;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Denver,Colorado,United states\n\n");
            printf("City Time: 13 hours behind Bangladesh\n\n");
            printf("Country Currency: USD\n\n");
            printf("Currency with respect to Bangladesh: 1USD=85.78 Bangladeshi taka\n\n");
            printf("Average Travelling Cost: $1220\n\n");
            printf("Famous Destination: Denver Art Museum ,Denver Botanic Gardens,Denver Zoo\n\n");
            printf("Language: English,Spanish,Vietnames\n\n");
            printf("Visa Receiving Time: 3 to 5 weeks\n\n");
            printf("Minimum Days Needed To View City: 1-3 days\n\n");
            printf("Famous Food: Exile kitchen Denver\n\n");
            printf("Cuisine: Brunch,Bakery,Small plates\n\n");
            printf("National Religion: Christianity\n\n");
            printf("Festivals: Great American Beer Festival\n\n");
            printf("Sports: Broncos football\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu3;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Las Vegas,Nevada\n\n");
            printf("City Time: 14 hours behind Bangladesh\n\n");
            printf("Country Currency: USD\n\n");
            printf("Currency with respect to Bangladesh:1 USD =85.78 Bangladeshi taka\n\n");
            printf("Average Travelling Cost: $1723\n\n");
            printf("Famous Destination: Bellagio Hotel &Casino, MGM Grand\n\n");
            printf("Language: English,Spanish,Asian & Pacific Island \n\n");
            printf("Visa Receiving Time: 3 to 5 weeks\n\n");
            printf("Minimum Days Needed To View City:at least 3 days\n\n");
            printf("Famous Food:Lasagnc,Banana Cream Pie,Cannoli\n\n");
            printf("Cuisine: Miso-Glazed Chilean Sea Bass with Wok Vegetables,Maine-Style Lobster Roll,Cannoli,Chicken 'N' Watermelon\n\n");
            printf("National Religion:Christianity\n\n");
            printf("Festivals: EDC Las Vegas, Las vegas musical festival\n\n");
            printf("Sports: Hockey,football,Las Vegas Aces\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu3;
            }
            }
            break;
        }

        }
    }
    break;
    case 5:
    {
menu4:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Kuala Lampur\n");
            printf("\t\t\t\t\t 3.George Town\n");
            printf("\t\t\t\t\t 2.Malacca\n");
            printf("\t\t\t\t\t 4.Johor Bahru\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[4]);
        }
        switch(cn[4])
        {
        case 1:
        {
            system("cls");
            printf("City Name:  Federal Territory of Kuala Lumpur\n\n");
            printf("City Time: Kuala Lampur is 2 hours ahead of Bangladesh.\n\n");
            printf("Country Currency: The Malaysian ringgit or ringgit\n\n");
            printf("Currency with respect to Bangladesh: 1 MYR = 20.35 BDT\n\n");
            printf("Average Travelling Cost: 1.5 lakhs\n\n");
            printf("Famous Destination: Twin Towers, Menara KL Towers, Chinatown, Sultan Abdul Samad Building.\n\n");
            printf("Language: Malay\n\n");
            printf("Visa Receiving Time: up to 3 business days\n\n");
            printf("Minimum Days Needed To View City: 5 days\n\n");
            printf("Famous Food: Roti canai, Nasi lemak, Cendol, Masak lemak, Rendang\n\n");
            printf("Cuisine:  sweet, sour, rich and spicy\n\n");
            printf("National Religion: ISLAM\n\n");
            printf("Festivals: Ramadan, Chinese New Year, Deepavali and Christmas.\n\n");
            printf("Sports: Football (Soccer), Badminton, Tenpin Bowling etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu4;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Malacca\n\n");
            printf("City Time: Malacca is 2 hours ahead of Bangladesh.\n\n");
            printf("Country Currency: Ringgit\n\n");
            printf("Currency with respect to Bangladesh: 1 MYR = 20.35 BDT\n\n");
            printf("Average Travelling Cost: 1.5 lakhs\n\n");
            printf("Famous Destination: Christ Church, Jonker Street, Baba and Nyonya House Museum, Cheng Hoon Teng Temple \n\n");
            printf("Language: Malay \n\n");
            printf("Visa Receiving Time: up to 3 business days\n\n");
            printf("Minimum Days Needed To View City: 5 days \n\n");
            printf("Famous Food: Cendol, Nasi lemak, Chap chai\n\n");
            printf("Cuisine:  sweet, sour, rich and spicy\n\n");
            printf("National Religion: ISLAM\n\n");
            printf("Festivals: The Malakka Dutch Festival, Deepavali etc.\n\n");
            printf("Sports: Motorsport Circuit, Bowling Centre, golf courses.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu4;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Georgetown\n\n");
            printf("City Time: Georgetown is 2 hour ahead of Bangladesh\n\n");
            printf("Country Currency: Ringgit\n\n");
            printf("Currency with respect to Bangladesh: 1 MYR = 20.35 BDT\n\n");
            printf("Average Travelling Cost: 1 Lakh\n\n");
            printf("Famous Destination:1. Penang Hill, Kek Lok Si Temple, Penang War Museum, Sri Mahamariamman Temple, Penang Botanic Gardens, Khoo Kongsi\n\n");
            printf("Language: Manglish and Malay\n\n");
            printf("Visa Receiving Time: 3-5 working days\n\n");
            printf("Minimum Days Needed To View City: 4 days\n\n");
            printf("Famous Food:  Char Koay Teow, Nasi Kandar, Dim Sum, Roti Canai\n\n");
            printf("Cuisine: sweet, sour, rich and spicy\n\n");
            printf("National Religion: Islam\n\n");
            printf("Festivals: Hari Raya EidUlFitri and Hari Raya EidUlAdha\n\n");
            printf("Sports: Athletics Overview, Baseball, Basketball\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu4;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Johor Bahru\n\n");
            printf("City Time: Johor Bahru is 2 hours ahead of Bangladesh.\n\n");
            printf("Country Currency: ringgit\n\n");
            printf("Currency with respect to Bangladesh: 1 MYR = 20.35 BDT\n\n");
            printf("Average Travelling Cost: 1 lakhs\n\n");
            printf("Famous Destination: Legoland Malaysia, Angry Birds Activity Park, Johor Zoo, Sultan Abu Bakar State. \n\n");
            printf("Language: Malay \n\n");
            printf("Visa Receiving Time: up to 3 business days\n\n");
            printf("Minimum Days Needed To View City: 3 days\n\n");
            printf("Famous Food: Laksa Johor, Kedai Masakan Itik Taika Huat, Bukit Chagar Roti Canai.\n\n");
            printf("Cuisine:  sweet, sour, rich and spicy\n\n");
            printf("National Religion: ISLAM\n\n");
            printf("Festivals: Independence Day/ Malaysia Day, bon odori. \n\n");
            printf("Sports:  Sukma Games,  football.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu4;
            }
            }
            break;
        }
        }
    }
    break;
    case 6:
    {
menu5:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Istambul\n");
            printf("\t\t\t\t\t 2.Izmir\n");
            printf("\t\t\t\t\t 3. Ankara\n");
            printf("\t\t\t\t\t 4.Antalya\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[5]);
        }
        switch(cn[5])
        {
        case 1:
        {
            system("cls");
            printf("City Name: Istambul\n\n");
            printf("City Time: Bangladesh is 3 hours ahead of İstanbul, Turkey\n\n");
            printf("Country Currency: Turkish Lira (TL)\n\n");
            printf("Currency with respect to Bangladesh: 1.00 Turkish Lira =7.9515947\n\n");
            printf("Average Travelling Cost: 7-day trip to Istanbul is $1,123 for a solo traveler\n\n");
            printf("Famous Destination: Hagia Sophia\n\n");
            printf("Language: Istanbul Turkish\n\n");
            printf("Visa Receiving Time: One to three working days\n\n");
            printf("Minimum Days Needed To View City: Three days\n\n");
            printf("Famous Food: Simit\n\n");
            printf("Cuisine: Simit\n\n");
            printf("National Religion: Sunni Muslims and Alevism\n\n");
            printf("Festivals: Istanbul International Dance Festival,Istanbul Film Festival,Istanbul Jazz Festival\n\n");
            printf("Sports: Galatasaray Athletics,Galatasaray Bridge Team,Galatasaray Handball Team,Galatasaray Rowing.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu5;
            }
            }
            break;

        }
        case 2:
        {
            system("cls");
            printf("City Name: Izmir\n\n");
            printf("City Time: Bangladesh is 3 hours ahead of İzmir, Turkey\n\n");
            printf("Country Currency: Turkish Lira (TL)\n\n");
            printf("Currency with respect to Bangladesh : 1.00 Turkish Lira =7.2154901 Bangladeshi Takas\n\n");
            printf("Average Travelling Cost: 7-day trip to Izmir is $950 for a solo traveler\n\n");
            printf("Famous Destination: Ephesus Archaeological Museum\n\n");
            printf("Language: Turkish\n\n");
            printf("Visa Receiving Time: 15 working days\n\n");
            printf("Minimum Days Needed To View City: 2 days\n\n");
            printf("Famous Food: THE PEARL OF THE AEGEAN.\n\n");
            printf("Cuisine: Cheese. Kopanisti peynir. İzmir Province.\n\n");
            printf("National Religion: Muslim\n\n");
            printf("Festivals: Izmir World Fair,Ramazan.\n\n");
            printf("Sports: Football,Basketball, Tennis\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu5;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Ankara\n\n");
            printf("City Time: Bangladesh is 3 hours ahead of Ankara, Turkey\n\n");
            printf("Country Currency: Turkish Lira\n\n");
            printf("Currency with respect to Bangladesh: 1.00 Turkish Lira =7.2279875 Bangladeshi Takas\n\n");
            printf("Average Travelling Cost: 7-day trip to Ankara is $973 for a solo traveler\n\n");
            printf("Famous Destination: Anıtkabir\n\n");
            printf("Language: Turkish\n\n");
            printf("Visa Receiving Time: 3 business days\n\n");
            printf("Minimum Days Needed To View City: Two days.\n\n");
            printf("Famous Food: Grilled fish\n\n");
            printf("Cuisine: Grilled fish at Yelken Balık.\n\n");
            printf("National Religion: Islam\n\n");
            printf("Festivals: Ankara International Music Festival,International Children's Theatre Festival,Republic Day,Ankara International Film FestivaTurky \n\n");
            printf("sports: Football,Basketball, Tennis\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu5;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Antalya\n\n");
            printf("City Time: Bangladesh is 3 hours ahead of Antalya, Turkey\n\n");
            printf("Country Currency: Turkish Lira\n\n");
            printf("Currency with respect to Bangladesh: 1.00 Turkish Lira =7.9515947\n\n");
            printf("Average Travelling Cost:  7-day trip to Antalya is $978 for a solo traveler\n\n");
            printf("Famous Destination:Konyaaltı Plajları\n\n");
            printf("Language: Turkish\n\n");
            printf("Visa Receiving Time: 15 working days\n\n");
            printf("Minimum Days Needed To View City: three days\n\n");
            printf("Famous Food: Breakfast at Aysegul Hanım\n\n");
            printf("Cuisine: Seafood at Antalya Balık Evi.\n\n");
            printf("National Religion: Islam\n\n");
            printf("Festivals: Antalya festival\n\n");
            printf("Sports: Football,Basketball, Tennis\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu5;
            }
            }
            break;
        }
        }
    }
    break;
    case 7:
    {
menu6:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.London\n");
            printf("\t\t\t\t\t 2.Cambridge\n");
            printf("\t\t\t\t\t 3.Manchester\n");
            printf("\t\t\t\t\t 4.Liverpool\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[6]);
        }
        switch(cn[6])
        {
        case 1:
        {
            system("cls");
            printf("City Name: London\n\n");
            printf("City Time: Bangladesh is 6 hour ahead of London \n\n");
            printf("Country Currency: pound\n\n");
            printf("Currency with respect to Bangladesh:1 pound =114 taka\n\n");
            printf("Average Travelling Cost:2000 pound\n\n");
            printf("Famous Destination:British Museum Tower Bridge \n\n");
            printf("Language: English \n\n");
            printf("Visa Receiving Time: 14 working days\n\n");
            printf("Minimum Days Needed To View City:8-10 days\n\n");
            printf("Famous Food: Pie mash/ Sunday roast\n\n");
            printf("Cuisine: Belgian and british morder Pub restaurant \n\n");
            printf("National Religion: Christian \n\n");
            printf("Festivals: Christmas \n\n");
            printf("Sports: Cricket,Tennis,Golf\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu6;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Cambridge \n\n");
            printf("City Time: Bangladesh is 6 hour ahead of London\n\n");
            printf("Country Currency: Pound\n\n");
            printf("Currency with respect to Bangladesh: 1 pound = 114 taka\n\n");
            printf("Average Travelling Cost: 2000 pound\n\n");
            printf("Famous Destination: Queen College , Mot hermetical bridge Cambridge University Botanic Garden\n\n");
            printf("Language: English \n\n");
            printf("Visa Receiving Time:14 working days\n\n");
            printf("Minimum Days Needed To View City: 8-10 days\n\n");
            printf("Famous Food: The cooking rest/ Little Petra\n\n");
            printf("Cuisine:Three wise monkey \n\n");
            printf("National Religion: Christian \n\n");
            printf("Festivals: Christmas \n\n");
            printf("Sports: Cricket /Tennis \n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu6;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Manchester \n\n");
            printf("City Time: Bangladesh is 6 hour ahead of London\n\n");
            printf("Country Currency: pound \n\n");
            printf("Currency with respect to Bangladesh: 1 pound = 114 taka\n\n");
            printf("Average Travelling Cost: 2000 pound\n\n");
            printf("Famous Destination: Castlefield/ science and Industry Museum \n\n");
            printf("Language: English\n\n");
            printf("Visa Receiving Time: 14 working days\n\n");
            printf("Minimum Days Needed To View City: 4-7 days\n\n");
            printf("Famous Food:Eccles cake/pasty barm/ Rag Pudding\n\n");
            printf("Cuisine: Tatta restaurant /63 degrees\n\n");
            printf("National Religion: Christian \n\n");
            printf("Festivals: Christmas \n\n");
            printf("Sports: Cricket / Tennis\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu6;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Liverpool \n\n");
            printf("City Time: Bangladesh is 5 hour 45min ahead of London\n\n");
            printf("Country Currency: pound\n\n");
            printf("Currency with respect to Bangladesh: 1 pound = 114 taka\n\n");
            printf("Average Travelling Cost: 2000 pound \n\n");
            printf("Famous Destination: Royal Albert Dock Liverpool /Tata Liverpool / Walker art Gallery\n\n");
            printf("Language: English \n\n");
            printf("Visa Receiving Time: 114 working days\n\n");
            printf("Minimum Days Needed To View City: 4-7 days\n\n");
            printf("Famous Food: Scouse\n\n");
            printf("Cuisine: Scouse\n\n");
            printf("National Religion: Christian\n\n");
            printf("Festivals: Christmas \n\n");
            printf("Sports: Cricket / Tennis\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu6;
            }
            }
            break;
        }
        }
    }
    break;
    case 8:
    {
menu7:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Paris\n");
            printf("\t\t\t\t\t 2.Nice\n");
            printf("\t\t\t\t\t 3.Marseille\n");
            printf("\t\t\t\t\t 4.Lyon\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[7]);
        }
        switch(cn[7])
        {
        case 1:
        {
            system("cls");
            printf("City Name: Paris\n\n");
            printf("City Time: 5 hours behind from Bangladesh\n\n");
            printf("Country Currency: Euro\n\n");
            printf("Currency with respect to Bangladesh:1 EURO =97.09 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost - The average price of a 7-day trip to Paris is $1,450 for a solo traveler, $2,604 for a couple, and $4,882 for a family of 4.\n\n");
            printf("Famous Destination: Eiffel Tower,Arc De Triomphe, Palace of Versallies, Louvre Museum,Sacre-Coeur,Musee d’Orsay\n\n");
            printf("Language: French\n\n");
            printf("Visa Receiving Time: 10 to 30 days  \n\n");
            printf("Minimum Days Needed To View City: at least 3-5 days \n\n");
            printf("Famous Food: Croque-monsieur, Goumard, Vin et Maree maine – Montparnasse,Le Reminet,Matsuri Marbeuf\n\n");
            printf("National Religion: Catholicism\n\n");
            printf("Festivals:Paris Carnival,Paris Pride, Paris Jazz Festival\n\n");
            printf("Sports: Soccer,Tennis \n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu7;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Nice\n\n");
            printf("City Time:  5 hours behind from Bangladesh \n\n");
            printf("Country Currency: Euro\n\n");
            printf("Currency with respect to Bangladesh: 1 EURO =97.09 Bangladeshi Taka\n\n");
            printf(" Average Travelling Cost:  It costs around €42-€80/day to visit Nice. \n\n");
            printf("Famous Destination: Promenade des AnglaIais , Musee de la Castre, Lerins Islands,Oceanographic Museum,Notre- Dame de Nice\n\n");
            printf("Language: French \n\n");
            printf("Visa Receiving Time:10 to 30 days \n\n");
            printf("Minimum Days Needed To View City:at least 4-6 days \n\n");
            printf("Famous Food: Socca,Pan Bagnat,Ratatouille Salade Nicoise\n\n");
            printf("National Religion:Catholicism\n\n");
            printf("Festivals: Carnival of Nice,Nice Jazz festivl, IronMan\n\n");
            printf("Sports: Soccer,Tennis \n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu7;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Marseille \n\n");
            printf("City Time: 5 hours behind  from Bangladesh\n\n");
            printf("Country Currency: Euro\n\n");
            printf("Currency with respect to Bangladesh: 1 EURO =97.09 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost:$ €69 ($77 USD) per day.\n\n");
            printf("Famous Destination:Museum of European and Mediterranean Civilisations,Notre-Dame de la Garde,Abbey of Saint Victor,Marseille Cathedral \n\n");
            printf("Language: French\n\n");
            printf("Visa Receiving Time:10-30 Days\n\n");
            printf("Minimum Days Needed To View City:1-3 days\n\n");
            printf("Famous Food: Bouillabaisse,Ricard,parisbrest\n\n");
            printf("National Religion:Catholicism\n\n");
            printf("Festivals:The Delta Festival , Marseille Jazz, The Freestyle Cup\n\n");
            printf("Sports:  football\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu7;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Lyon\n\n");
            printf("City Time: 5 hours behind from Bangladesh \n\n");
            printf("Country Currency: Euro\n\n");
            printf("Currency with respect to Bangladesh: 1 EURO =97.09 Bangladeshi Taka\n\n");
            printf("Average Travelling Cost:  a trip to Lyon for two people for one week costs on average €1,405 ($1,590). \n\n");
            printf("Famous Destination: museum of Fine Arts of Lyon, Musee du Cinema et de la Miniature, Saint-Nizier Church,Gallo-Roman Museum\n\n");
            printf("Language: French\n\n");
            printf("Visa Receiving Time: 10-30 days\n\n");
            printf("Minimum Days Needed To View City: At least 3 days\n\n");
            printf("Famous Food : Rosette de Lyon,Masturi Lyon Vaise etc\n\n");
            printf("National Religion: Catholocism \n\n");
            printf("Festivals: Lumiere Brothers Film Festival, the Festival of Light\n\n");
            printf("Sports: football\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu7;
            }
            }
            break;
        }
        }
    }
    break;
    case 9:
    {
menu8:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Toyko\n");
            printf("\t\t\t\t\t 2.Kyoto\n");
            printf("\t\t\t\t\t 3.Hiroshima\n");
            printf("\t\t\t\t\t 4.Nara\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[8]);
        }
        switch(cn[8])
        {
        case 1:
        {
            system("cls");
            printf("City Name: Tokyo\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh:1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: A vacation to Tokyo for one week usually costs around ¥135,743 (1,182US$) for one person.\n\n");
            printf("Famous Destinations: Tokyo Sky Tree, Meiji Shrine, Shibuya, Tokyo Royal Palace, Tokyo Disney Sea, Harajuku, etc.\n\n");
            printf("Language: Japanese language.\n\n");
            printf("Visa Receiving Time: 5 working days.\n\n");
            printf("Minimum Days Needed To View City: 3 to 5 days\n\n");
            printf("Famous Food: Edomae-zushi (Edo-style Sushi), Monjayaki, Ramen, Tempura (Battered and Deep-Fried Seafood and Vegetables), Unaju, etc.\n\n");
            printf("National Religion: Shintoism and Buddhism\n\n");
            printf("Festivals: Yayoi Matsuri, Sanno Matsuri, Asakusa Samba Matsuri, Sumidagawa Fireworks Festival, etc.\n\n");
            printf("Sports: Sumo Soccer, Basketball, etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu8;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Kyoto\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh: 1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Kyoto is $1,875 for a solo traveler, $3,368 for a couple, and $6,313 for a family of 4.\n\n");
            printf("Kyoto hotels range from $69 to $806 per night with an average of $110, while most vacation rentals will cost $130 to $490 per night for the entire home.\n\n");
            printf("Famous Destinations: Nijo Castle, Fushimi-Inari Taisha Shrine, Kinkaku-Ji: The Golden Pavilion, Kyoto Imperial Palace, etc.\n\n");
            printf("Language: Japanese language.\n\n");
            printf("Visa Receiving Time: 5 working days.\n\n");
            printf("Minimum Days Needed To View City: at least 2 full days.\n\n");
            printf("Famous Food: Yudofu, Hamo, Tsukemono, Matcha, Yatsuhashi, etc.\n\n");
            printf("National Religion: Shintoism and Buddhism.\n\n");
            printf("Festivals: Aoi Matsuri, Gion Matsuri, Jidai Matsuri, Baika-sai.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu8;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Hiroshima\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh: 1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: You should plan to spend around ¥12,307 ($109) per day on your vacation in Hiroshima, which is the average daily price based on the expenses of other visitors.\n\n");
            printf("Famous Destination: Hiroshima Peace Memorial Park, The Island Shrine of Itsukushima, Hiroshima Peace Memorial Museum, Hiroshima Castle, Shukkei-en Garden, etc.\n\n");
            printf("Language: Japanese language.\n\n");
            printf("Visa Receiving Time: 5 working days.\n\n");
            printf("Minimum Days Needed To View City: at least 2 full days.\n\n");
            printf("Famous Food: Okonomiyaki,  Momiji manju, Oysters, Onomichi ramen, Anago, etc.\n\n");
            printf("National Religion: Shintoism and Buddhism.\n\n");
            printf("Festivals: Yuki Matsuri, Omizutori, Kanamara Matsuri, Gion Matsuri, Aomori Nebuta Matsuri, etc.\n\n");
            printf("Sports: Sumo Soccer, Basketball, etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu8;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Nara\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh: 1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost:  You should plan to spend around ¥10,588 ($94) per day on your vacation in Nara, which is the average daily price based on the expenses of other visitors.\n\n");
            printf("Famous Destinations: Nara Park and Tōdai-ji Temple, Kofuku-ji Temple, Isuien Garden, Tōshōdai-ji Temple, etc.\n\n");
            printf("Language: Japanese language\n\n");
            printf("Visa Receiving Time: 5 working days.\n\n");
            printf("Minimum Days Needed To View City: at least 2 days\n\n");
            printf("Famous Food: Traditional Rice Porridge, Nara Green Tea Rice, Persimmon Leaf Sushi / Magnolia Leaf Sushi, Mehari Rice Balls, Somen Noodles, etc.\n\n");
            printf("National Religion: Shintoism and Buddhism.\n\n");
            printf("Festivals: Omizutori, Nara Rurie, Heijo Tenpyo, Wakakusa Yamazaki.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu8;
            }
            }
            break;
        }
        }
    }
    break;
    case 10:
    {
menu9:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tCity name you wish to visit:\n\n");
            printf("\t\t\t\t\t 1.Seoul\n");
            printf("\t\t\t\t\t 2.Busan\n");
            printf("\t\t\t\t\t 3.Seogwipo\n");
            printf("\t\t\t\t\t 4.Gangneung\n");
            printf("\t\t\t\t\t Choose a City You want to Visit: ");
            scanf("%d",&cn[9]);
        }
        switch(cn[9])
        {
        case 1:
        {
            system("cls");
            printf("City Name: Seoul\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Currency: won.\n\n");
            printf("Currency with respect to Bangladesh: 1 South Korean won= 0.072 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Seoul is $1,705 for a solo traveler, $3,062 for a couple, and $5,741 for a family of 4. Seoul hotels range from $47 to $201 per night with an average of $58, while most vacation rentals will cost $130 to $340 per night for the entire home.\n\n");
            printf("Famous Destinations: N Seoul Tower, Explore the Bukchon Hanok Traditional Village, National Museum of Korea, Lotte World Tower, etc.\n\n");
            printf("Language: Korean.\n\n");
            printf("Visa Receiving Time: 15 working days.\n\n");
            printf("Minimum Days Needed To View City: 3- 4 days.\n\n");
            printf("Famous Food: Rice cakes in sauce (tteokbokki), Pork and potato soup (gamjatang), Cold noodles (naengmyun), Blood sausage stuffed with noodles (sundae), Korean barbecue, etc.\n\n");
            printf("National Religion: Buddhism and Christianity\n\n");
            printf("Festivals: Seoul World DJ Festival, Ssamzi Sound Festival, Summer Breeze,\n\n");
            printf("Supersonic Festival, etc.\n\n");
            printf("Sports: Horse Racing, Soccer, Basketball, etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu9;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            printf("City Name: Busan\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: won.\n\n");
            printf("Currency with respect to Bangladesh: 1 South Korean won= 0.072 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Busan is $1,253 for a solo traveler, $2,250 for a couple, and $4,219 for a family of 4.\n\n");
            printf("Busan hotels range from $33 to $149 per night with an average of $41, while most vacation rentals will cost $110 to $380 per night for the entire home.\n\n");
            printf("Famous Destinations: Busan Tower,  Kim Jae Sun Gallery, Gamcheon Culture Village, Jagalchi Fish Market, Haeundae Beach etc.\n\n");
            printf("Language: Korean.\n\n");
            printf("Visa Receiving Time: 15 working days.\n\n");
            printf("Minimum Days Needed To View City: 2-3 days\n\n");
            printf("Famous Food: Chimaek (Chicken and Beer), Ssiat Hotteok (Seed Pancakes), Eomuk (Fish Cake), Milmyeon (Cold Wheat Noodles), Moolhwe (Cold Sashimi), etc.\n\n");
            printf("National Religion: Buddhism and Christianity.\n\n");
            printf("Festivals: Joseon Tongsinsa Festival, Haeundae Sand Festival, Busan International Rock Festival, Busan Sea Festival.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu9;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            printf("City Name: Seogwipo\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh: 1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Seogwipo City is $1,431 for a solo traveler, $2,570 for a couple, and $4,818 for a family of 4.\n\n");
            printf("Seogwipo City hotels range from $34 to $157 per night with an average of $51, while most vacation rentals will cost $100 to $420 per night for the entire home.\n\n");
            printf("Famous Destination: Jusangjeolli, Jeongbang Waterfall, Cheonjeyeon Waterfall, World ‘Eros’ Museum etc.\n\n");
            printf("Language: Korean.\n\n");
            printf("Visa Receiving Time: 15 working days.\n\n");
            printf("Minimum Days Needed To View City: 3-4 days.\n\n");
            printf("Famous Food: black pork, Cream Corn, Chestnut Bread, Pork Bulgogi etc.\n\n");
            printf("National Religion: Buddhism and Christianity.\n\n");
            printf("Festivals: Chilsimni Festival, Yahae Festival, etc.\n\n");
            printf("Sports: Horse Racing, Soccer, Basketball, etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu9;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("City Name: Gangneung\n\n");
            printf("City Time: 3 hours ahead of Bangladesh\n\n");
            printf("Country Currency: Yen\n\n");
            printf("Currency with respect to Bangladesh: 1 Japanese Yen =0.75 Bangladeshi Taka.\n\n");
            printf("Average Travelling Cost: The average price of a 7-day trip to Gangneung is $976 for a solo traveler, $1,753 for a couple, and $3,286 for a family of 4.\n\n");
            printf("Gangneung hotels range from $51 to $233 per night with an average of $80, while most vacation rentals will cost $80 to $420 per night for the entire home.\n\n");
            printf("Famous Destinations: Gyeongpo Beach, Ojukheon, Jeongdongjin Beach, Anmok Beach, Jumunjin Beach, etc.\n\n");
            printf("Language: Korean.\n\n");
            printf("Visa Receiving Time: 15 working days.\n\n");
            printf("Minimum Days Needed To View City: at least 2 days\n\n");
            printf("Famous Food: Rainbow Trout, Everything Buckwheat, Osam-Bulgogi (“Gangwon Surf & Turf”), Chodang Sundubu, etc.\n\n");
            printf("National Religion: Christianity and Buddhism.\n\n");
            printf("Festivals: Gangneung Danoje Festival, Gangneung Coffee Festival, Gyeongpo Summer Festival, Gangneung International Junior Art Festival, etc.\n\n");
            printf("1.Main menu\n");
            printf("2.Previous menu\n\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
                goto Main_Menu;
            }
            case 2:
            {
                goto menu9;
            }
            }
            break;
        }
        }
    }
    break;
    default:
    {
        system("color 74");
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\tINVALID CHOICE\2");
        printf("\n\n\n\t\t\t\t\t\t TrY AgaiN PlZ");
        printf("\n\n\n\t\t\t\t\t\t 1.Press 1 For Go To Main Menu\n");
        printf("\n\t\t\t\t\t\t Enter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            goto Main_Menu;
        }
        case 2:
        {
            getch();
        }
        }

    }

    }
}
void periodic()
{
    system("cls");

    int choice,atomic_num;
part1:

    {
        system("color a");
        printf("\n\n\n\n\n\t\t\t=============================================================================================================\n");
        printf("\t\t\t\t\t\t\t\6\6\6\6\6WELCOME TO MODERN PERIODIC TABLE\6\6\6\6\6\n");
        printf("\t\t\t=============================================================================================================\n\n\n\n");
        printf("\n\n\n\t\t\t\t\t\t   -----------------------------------------------\n");
        printf("\t\t\t\t\t\t   \5\t1.Press (1) for EXPLORE PERIODIC TABLE.  \5\n");
        printf("\t\t\t\t\t\t   -----------------------------------------------\n");
        printf("\t\t\t\t\t\t   \5\t2.Press (2) for KNOW ABOUT DEVELOPER.    \5\n");
        printf("\t\t\t\t\t\t   -----------------------------------------------\n");
        printf("\t\t\t\t\t\t   \5\t3.Press (3) for GOTO MAIN MENU.         \5\n");
        printf("\t\t\t\t\t\t   -----------------------------------------------\n\n\n\n");
        printf("\t\t\t\t\t\t    Enter Your Choice:");
        scanf("%d",&choice);
    }

    switch(choice)
    {
    case 1:
    {
part2:
        {
            system("color a");
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   -----------------------------------------------\n");
            printf("\t\t\t\t\t\t   \5  1.Press (1) for VIEWING WHOLE TABLE.       \5\n");
            printf("\t\t\t\t\t\t   -----------------------------------------------\n");
            printf("\t\t\t\t\t\t   \5  2.Press (2) for SEARCH IN PERIODIC TABLE.  \5\n");
            printf("\t\t\t\t\t\t   -----------------------------------------------\n");
            printf("\t\t\t\t\t\t   \5  3.Press (3) for GO TO MAIN MENU.           \5\n");
            printf("\t\t\t\t\t\t   -----------------------------------------------\n\n\n\n");
            printf("\t\t\t\t\t\t\tEnter Your Choice:");
            scanf("%d",&choice);
        }

        switch(choice)
        {
        case 1:
        {
part3:
            {
                system("color e");
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t      ------------------------------------------------\n");
                printf("\t\t\t\t\t\t      \5 1.Press (1) for VIEWING WHOLE TABLE BY GIRD. \5\n");
                printf("\t\t\t\t\t\t      ------------------------------------------------\n");
                printf("\t\t\t\t\t\t      \5 2.Press (2) for VIEWING WHOLE TABLE BY LIST. \5\n");
                printf("\t\t\t\t\t\t      ------------------------------------------------\n");
                printf("\t\t\t\t\t\t      \5 3.Press (3) for GO TO PREVIOUS MENU.\t     \5\n");
                printf("\t\t\t\t\t\t      ------------------------------------------------\n");
                printf("\t\t\t\t\t\t      \5 4.Press (4) for GO TO MAIN MENU.\t     \5\n");
                printf("\t\t\t\t\t\t      ------------------------------------------------\n\n\n\n");
                printf("\t\t\t\t\t\t\tEnter Your Choice:");
                scanf("%d",&choice);
            }

            switch(choice)
            {
            case 1:
            {
                system("cls");
                system("color b");
                char *periodic[]= {"H"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","He"};
                char *periodic1[]= {"Li","Be"," "," "," "," "," "," "," "," "," "," ","B","C","N","O","F","Ne"};
                char *periodic2[]= {"Na","Mg"," "," "," "," "," "," "," "," "," "," ","Al","Si","P","S","Cl","Ar"};
                char *periodic3[]= {"K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr"};
                char *periodic4[]= {"Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe"};
                char *periodic5[]= {"Cs","Ba","La","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Ti","Po","Bi","Po","At","Rn"};
                char *periodic6[]= {"Fr","Ra","Ac","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fi","Mc","Lv","Ts","Og"};

                printf("\n\t\t\t\t\t\t..................Periodic Table of Elements..................");
                printf("\n\n\n");
                for(int i = 1 ; i<=18 ; i++)
                {
                    printf("\t%d  ",i);
                }
                printf("<----Group");
                printf("\n\n1  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic[i]);
                }
                printf("\n\n2  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic1[i]);
                }
                printf(" ^ P\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     |\n3  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic2[i]);
                }
                printf(" | E\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     |\n4  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic3[i]);
                }
                printf(" | R\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     |\n5  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic4[i]);
                }
                printf(" | O\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     |\n6  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic5[i]);
                }
                printf(" | I\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     |\n7  -");
                for(int i=0; i<=17; i++)
                {
                    printf("\t%s  ",periodic6[i]);
                }
                printf(" | D\n");
                char *periodic11[] = {"Ce","Pr","Nd","Pn","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu"};
                char *periodic12[] = {"Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr"};
                printf("\n\n    Lanthanoid series 6  -->  ");
                for(int i=0; i<=13; i++)
                {
                    printf("\t%s  ",periodic11[i]);
                }

                printf("\n\n      Actinoid series 7  -->");
                for(int i=0; i<=13; i++)
                {
                    printf("\t%s  ",periodic12[i]);
                }
                printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                printf("\t\t\t\t\t\t\t2.press (2) for GO TO  MENU.\n");
                printf("\t\t\t\t\t\t\t3.press (3) for GO TO MAIN MENU.\n\n");
                printf("\t\t\t\t\t\t\tEnter Your Choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                {
                    goto part3;
                }
                case 2:
                {
                    system("cls");
                    goto part1;
                }
                case 3:
                {
                    mainPage();
                }
                }

                getch();
            }
            case 2:
            {
                system("cls");
                system("color 2");
                int i;
                char *periodic[] = {"ELEMENT NAME\t\tATOMIC NUMBER\t\tSYMBOL\t\tATOMIC WEIGHT\n","Hydrogen\t\t\t1\t\tH\t\t1.008",
                                    "Helium\t\t\t\t2\t\tHe\t\t4.003","Lithium\t\t\t\t3\t\tLi\t\t6.941","Beryllium\t\t\t4\t\tBe\t\t9.012","Boron\t\t\t\t5\t\tB\t\t10.81",
                                    "Carbon\t\t\t\t6\t\tC\t\t12.011","Nitrogen\t\t\t7\t\tN\t\t14.0067","Oxygen\t\t\t\t8\t\tO\t\t15.994","Flourine\t\t\t9\t\tF\t\t18.998","Neon\t\t\t\t10\t\tNe\t\t20.179",

                                    "Sodium\t\t\t\t11\t\tNa\t\t22.98", "Magnesium\t\t\t12\t\tMg\t\t24.30", "Aluminium\t\t\t13\t\tAl\t\t26.98", "Silicon\t\t\t\t14\t\tSi\t\t28.08",
                                    "Phosphorus\t\t\t15\t\tP\t\t30.97", "Sulphur\t\t\t\t16\t\tS\t\t32.06", "Chlorine\t\t\t17\t\tCl\t\t35.45", "Argon\t\t\t\t18\t\tAr\t\t39.94",
                                    "Potassium\t\t\t19\t\tK\t\t39.09","Calcium\t\t\t\t20\t\tCa\t\t40.07","Scandium\t\t\t21\t\tSc\t\t44.95","Titanium\t\t\t22\t\tTi\t\t47.86",
                                    "Vanadium\t\t\t23\t\tV\t\t50.94","Chromium\t\t\t24\t\tCr\t\t51.99","Manganese\t\t\t25\t\tMn\t\t54.93","Iron\t\t\t\t26\t\tFe\t\t55.84",
                                    "Cobalt\t\t\t\t27\t\tCo\t\t58.93","Nickel\t\t\t\t28\t\tNi\t\t58.69","Copper\t\t\t\t29\t\tCu\t\t63.54","Zinc\t\t\t\t30\t\tZn\t\t65.39",
                                    "Gallium\t\t\t\t31\t\tGa\t\t69.72","Germanium\t\t\t32\t\tGe\t\t72.64","Arsenic\t\t\t\t33\t\tAs\t\t74.92","Selenium\t\t\t34\t\tSe\t\t78.96",
                                    "Bromine\t\t\t\t35\t\tBr\t\t79.90","Krypton\t\t\t\t36\t\tKr\t\t83.8",
                                    "Rubidium\t\t\t37\t\tRb\t\t85.46 ","Strontium\t\t\t38\t\t\Sr\t\t87.62","Yttrium\t\t\t\t39\t\tY\t\t88.90","Zirconium\t\t\t40\t\tZr\t\t91.22",
                                    "Niobium\t\t\t\t41\t\tNb\t\t92.90","Molybdenum\t\t\t42\t\tMo\t\t95.94","Technetium\t\t\t43\t\tTc\t\t98.00","Ruthenium\t\t\t44\t\tRu\t\t101.07",
                                    "Rhodium\t\t\t\t45\t\tRh\t\t102.90","Palladium\t\t\t46\t\tPd\t\t106.42","Silver\t\t\t\t47\t\tAg\t\t107.86","Cadmium\t\t\t\t48\t\tCd\t\t112.41",
                                    "Indium\t\t\t\t49\t\tIn\t\t114.81","Tin\t\t\t\t50\t\tSn\t\t118.71","Antimony\t\t\t51\t\tSb\t\t121.76","Tellurium\t\t\t52\t\tTe\t\t127.6",
                                    "Iodine\t\t\t\t53\t\tI\t\t126.90","Xenon\t\t\t\t54\t\tXe\t\t131.29",
                                    "Cesium\t\t\t\t55\t\tCs\t\t132.90","Barium\t\t\t\t56\t\tBa\t\t137.32","Lanthanum\t\t\t57\t\tLa\t\t138.90","Cerium\t\t\t\t58\t\tCe\t\t140.11",
                                    "Praseodymium\t\t\t59\t\tPr\t\t140.90","Neodymium\t\t\t60\t\tNd\t\t144.24","Promethium\t\t\t61\t\tPm\t\t145.00",
                                    "Samarium\t\t\t62\t\tSm\t\t150.36","Europium\t\t\t63\t\tEu\t\t151.96","Gadolinium\t\t\t64\t\tGd\t\t157.25","Terbium\t\t\t\t65\t\tTb\t\t158.92",
                                    "Dysprosium\t\t\t66\t\tDy\t\t162.5",
                                    "Holmium\t\t\t\t67\t\tHo\t\t164.93","Erbium\t\t\t\t68\t\tEr\t\t167.25","Thulium\t\t\t\t69\t\tTm\t\t168.93","Ytterbium\t\t\t70\t\tYb\t\t173.04",
                                    "Lutetium\t\t\t71\t\tLu\t\t174.96",
                                    "Hafnium\t\t\t\t72\t\tHf\t\t178.49","Tantalum\t\t\t73\t\tTa\t\t180.94","Tungsten\t\t\t74\t\tW\t\t183.84","Rhenium\t\t\t\t75\t\tRe\t\t186.20",
                                    "Osmium\t\t\t\t76\t\tOs\t\t190.23","Iridium\t\t\t\t77\t\tIr\t\t196.96","Platinum\t\t\t78\t\tPt\t\t192.217","Gold\t\t\t\t79\t\tAu\t\t195.07",
                                    "Mercury\t\t\t\t80\t\tHg\t\t200.59","Thallium\t\t\t81\t\tTl\t\t204.38","Lead\t\t\t\t82\t\tPb\t\t207.2","Bismuth\t\t\t\t83\t\tBi\t\t208.98",
                                    "Polonium\t\t\t84\t\tPo\t\t209.00","Astatine\t\t\t85\t\tAt\t\t210.00","Radon\t\t\t\t86\t\tRn\t\t222.00",
                                    "Francium\t\t\t87\t\tFr\t\t223.00","Radium\t\t\t\t88\t\tRa\t\t226.00","Actinium\t\t\t89\t\tAc\t\t227.00","Thorium\t\t\t\t90\t\tTh\t\t232.03",
                                    "Protactinium\t\t\t91\t\tPa\t\t231.03","Uranium\t\t\t\t92\t\tU\t\t238.02","Neptunium\t\t\t93\t\tNp\t\t237.00","Plutonium\t\t\t94\t\tPu\t\t244.00",
                                    "Americium\t\t\t95\t\tAm\t\t243.00","Curium\t\t\t\t96\t\tCm\t\t247.00","Berkelium\t\t\t97\t\tBk\t\t247.00",
                                    "Californium\t\t\t98\t\tCf\t\t251.00","Einsteinium\t\t\t99\t\tEs\t\t252.00","Fermium\t\t\t\t100\t\tFm\t\t257.00",
                                    "Mendelevium\t\t\t101\t\tMd\t\t258.00","Nobelium\t\t\t102\t\tNo\t\t259.00","Lawrencium\t\t\t103\t\tLr\t\t262.00",
                                    "Rutherfordium\t\t\t104\t\tRf\t\t261.00","Dubnium\t\t\t\t105\t\tDb\t\t262.00","Seaborgium\t\t\t106\t\tSg\t\t266.00",
                                    "Bohrium\t\t\t\t107\t\tBh\t\t264.00","Hassium\t\t\t\t108\t\tHs\t\t277.00","Meitnerium\t\t\t109\t\tMt\t\t268.00",
                                    "Darmstadtium\t\t\t110\t\tDs\t\t261.9","Roentgenium\t\t\t111\t\tRg\t\t271.8","Copernicium\t\t\t112\t\tCn\t\t285.00",
                                    "Ununtrium\t\t\t113\t\tUut\t\t286.00","Flerovium\t\t\t114\t\tFl\t\t289.00",
                                    "Ununpentium\t\t\t115\t\tUup\t\t288.00","Livermorium\t\t\t116\t\tLv\t\t293.00","Ununseptium\t\t\t117\t\tUus\t\t260.90","Ununseptium\t\t\t118\t\tUuo\t\t294.00"
                                   };




                printf("\n\t\t\t\t\t\t..................Periodic Table of Elements..................");
                printf("\n\n\n");
                for(i = 0; i<=120; i++)
                {
                    printf("\t%s\n\n",periodic[i]);
                }
                printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                printf("\t\t\t\t\t\t\tEnter Your Choice:");
                scanf("%d",&choice);
            }
            case 3:
            {
                goto part2;
            }
            case 4:
            {
                system("cls");
                goto part1;
            }

            }
        }
        case 2:
        {
            system("cls");
            system("color 3");
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 1.press (1) for SEARCHING BY ATOMIC NUMBER.  \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 2.press (2) for SEARCHING BY SYMBOL.\t     \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 3.press (3) for SEARCHING BY CHEMICAL NAME.  \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 4.press (4) for SEARCHING BY ATOMIC WEIGHT   \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 5.press (5) for GO TO PREVIOUS MENU.\t     \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n");
            printf("\t\t\t\t\t\t      \5 6.press (6) for GO TO MAIN MENU.\t     \5\n");
            printf("\t\t\t\t\t\t      ------------------------------------------------\n\n\n\n");
            printf("\t\t\t\t\t\t\tEnter Your Choice:");
            scanf("%d",&choice);

            switch(choice)
            {
            case 1:
            {
part4:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\tENTER THE ATOMIC NUMBER OF THE ELEMENT YOU WANT TO SEARCH FOR:");
                    scanf("%d",&atomic_num);
                }

                switch(atomic_num)
                {
                case 1:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Hydrogen\n\t\t\t\t\t\t\tATOMIC NUMBER       :   1\n\t\t\t\t\t\t\tCHEMICAL NAME       :   H\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   1.007\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\t3.press (3) for GO TO MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    case 3:
                    {
                        mainPage();
                    }
                    }
                    getch();
                }
                case 2:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Helium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   2\n\t\t\t\t\t\t\tCHEMICAL NAME       :   He\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   4.002\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 3:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Lithium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   3\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Li\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   6.941\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 4:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Beryllium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   4\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Be\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   9.012\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 5:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Boron\n\t\t\t\t\t\t\tATOMIC NUMBER       :   5\n\t\t\t\t\t\t\tCHEMICAL NAME       :   B\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   10.81\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 6:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Carbon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   6\n\t\t\t\t\t\t\tCHEMICAL NAME       :   C\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   12.011\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 7:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Nitrogen\n\t\t\t\t\t\t\tATOMIC NUMBER       :   7\n\t\t\t\t\t\t\tCHEMICAL NAME       :   N\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   14.006\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 8:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Oxygen\n\t\t\t\t\t\t\tATOMIC NUMBER       :   8\n\t\t\t\t\t\t\tCHEMICAL NAME       :   O\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   15.999\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 9:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Fluorine\n\t\t\t\t\t\t\tATOMIC NUMBER       :   9\n\t\t\t\t\t\t\tCHEMICAL NAME       :   F\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   18.998\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 10:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Neon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   10\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ne\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   20.179\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 11:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Sodium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   11\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Na\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   22.98\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 12:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Magnesium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   12\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Mg\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   24.305\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 13:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Aluminum\n\t\t\t\t\t\t\tATOMIC NUMBER       :   13\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Al\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   26.98\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 14:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Silicon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   14\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Si\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   28.08\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 15:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Phosphorus\n\t\t\t\t\t\t\tATOMIC NUMBER       :   15\n\t\t\t\t\t\t\tCHEMICAL NAME       :   P\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   30.97\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 16:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Sulfur\n\t\t\t\t\t\t\tATOMIC NUMBER       :   16\n\t\t\t\t\t\t\tCHEMICAL NAME       :   S\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   32.06\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 17:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Chlorine\n\t\t\t\t\t\t\tATOMIC NUMBER       :   17\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cl\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   35.453\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 18:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Argon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   18\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ar\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   39.948\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 19:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Potassium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   19\n\t\t\t\t\t\t\tCHEMICAL NAME       :   K\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   39.09\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 20:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Calcium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   20\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ca\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   40.08\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 21:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Scandium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   21\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sc\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   44.95\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 22:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ttitanium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   22\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ti\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   47.90\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 23:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Vanadium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   23\n\t\t\t\t\t\t\tCHEMICAL NAME       :   V\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   50.94\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 24:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Chromium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   24\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   51.996\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 25:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Manganese\n\t\t\t\t\t\t\tATOMIC NUMBER       :   25\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Mn\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   54.53\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 26:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Iron\n\t\t\t\t\t\t\tATOMIC NUMBER       :   26\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Fe\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   55.847\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 27:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Cobalt\n\t\t\t\t\t\t\tATOMIC NUMBER       :   27\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Co\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   58.93\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 28:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Nickel\n\t\t\t\t\t\t\tATOMIC NUMBER       :   28\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ni\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   58.70\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 29:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Copper\n\t\t\t\t\t\t\tATOMIC NUMBER       :   29\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cu\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   63.54\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 30:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Zinc\n\t\t\t\t\t\t\tATOMIC NUMBER       :   30\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Zn\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   65.38\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 31:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Gallium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   31\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ga\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   69.72\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 32:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Germanium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   32\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ge\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   72.59\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 33:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Arsenic\n\t\t\t\t\t\t\tATOMIC NUMBER       :   33\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ar\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   74.9216\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 34:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Selenium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   34\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Se\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   78.96\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 35:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Bromine\n\t\t\t\t\t\t\tATOMIC NUMBER       :   35\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Br\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   79.904\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 36:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Krypton\n\t\t\t\t\t\t\tATOMIC NUMBER       :   36\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Kr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   83.80\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 37:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Rubidium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   37\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Rb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   85.4678\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 38:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Strontium	\n\t\t\t\t\t\t\tATOMIC NUMBER       :   38\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   87.62\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 39:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Yttrium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   39\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Y\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   88.9059\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 40:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Zirconium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   40\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Zr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   91.22\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 41:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Niobium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   41\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Nb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   92.9064\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 42:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Molybdenum\n\t\t\t\t\t\t\tATOMIC NUMBER       :   42\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Mo\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   95.94\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 43:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Technetium	\n\t\t\t\t\t\t\tATOMIC NUMBER       :   43\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Tc\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   98.00\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 44:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ruthenium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   44\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ru\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   101.07\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 45:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Rhodium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   45\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Rh\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   102.9055\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 46:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Palladium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   46\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pd\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   106.4\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 47:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Silver\n\t\t\t\t\t\t\tATOMIC NUMBER       :   47\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ag\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   107.868\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 48:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Cadmium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   48\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cd\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   112.41\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 49:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Indium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   49\n\t\t\t\t\t\t\tCHEMICAL NAME       :   In\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   114.82\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 50:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Tin\n\t\t\t\t\t\t\tATOMIC NUMBER       :   50\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sn\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   118.69\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 51:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Antimony	\n\t\t\t\t\t\t\tATOMIC NUMBER       :   51\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   121.75\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 52:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Tellurium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   52\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Te\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   127.60\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 53:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Iodine\n\t\t\t\t\t\t\tATOMIC NUMBER       :   53\n\t\t\t\t\t\t\tCHEMICAL NAME       :   I\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   126.9045\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 54:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Xenon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   54\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Xe\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   131.30\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 55:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Cesium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   55\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cs\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   132.9054\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 56:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Barium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   56\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ba\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   137.33\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 57:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Lanthanum\n\t\t\t\t\t\t\tATOMIC NUMBER       :   57\n\t\t\t\t\t\t\tCHEMICAL NAME       :   La\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   138.9055\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 58:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Cerium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   58\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ce\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   140.12\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 59:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Praseodymium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   59\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   140.9077\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 60:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Neodymium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   60\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Nd\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   144.24\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 61:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Promethium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   61\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pm\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   145.00\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 62:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Samarium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   62\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sm\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   150.4\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 63:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Europium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   63\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Eu\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   151.96\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 64:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Gadolinium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   64\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Gd\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   157.25\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 65:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Terbium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   65\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Tb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   158.9254\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 66:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Dysprosium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   66\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Dy\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   162.50\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 67:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Holmium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   67\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ho\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   164.9304\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 68:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Erbium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   68\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Er\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   167.26\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 69:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Thulium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   69\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Tm\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   168.9342\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 70:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ytterbium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   70\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Yb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   173.04\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 71:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Lutetium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   71\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Lu\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   174.967\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 72:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Hafnium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   72\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Hf\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   178.49\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 73:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Tantalum\n\t\t\t\t\t\t\tATOMIC NUMBER       :   73\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ta\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   180.9479\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 74:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Tungsten\n\t\t\t\t\t\t\tATOMIC NUMBER       :   74\n\t\t\t\t\t\t\tCHEMICAL NAME       :   W\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   183.85\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 75:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Rhenium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   75\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Re\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   186.207\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 76:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Osmium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   76\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Os\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   190.2\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 77:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Iridium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   77\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ir\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   192.22\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 78:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Platinum\n\t\t\t\t\t\t\tATOMIC NUMBER       :   78\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pt\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   195.09\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 79:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Gold\n\t\t\t\t\t\t\tATOMIC NUMBER       :   79\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Au\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   196.9665\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 80:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Mercury\n\t\t\t\t\t\t\tATOMIC NUMBER       :   80\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Hg\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   200.59\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 81:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Thallium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   81\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Tl\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   204.37\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 82:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Lead\n\t\t\t\t\t\t\tATOMIC NUMBER       :   82\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pb\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   207.2\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 83:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Bismuth\n\t\t\t\t\t\t\tATOMIC NUMBER       :   83\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Bi\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   208.9804\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 84:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Polonium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   84\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Po\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   209\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 85:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Astatine\n\t\t\t\t\t\t\tATOMIC NUMBER       :   85\n\t\t\t\t\t\t\tCHEMICAL NAME       :   At\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   210\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 86:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Radon\n\t\t\t\t\t\t\tATOMIC NUMBER       :   86\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Rn\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   222\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 87:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Francium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   87\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Fr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   223\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 88:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Radium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   88\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ra\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   226.0254\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 89:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Actinium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   89\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ac\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   227.0278\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 90:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Thorium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   90\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Th\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   232.0381\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 91:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Protactinium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   91\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pa\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   231.0359\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 92:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Uranium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   92\n\t\t\t\t\t\t\tCHEMICAL NAME       :   U\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   238.029\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 93:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Neptunium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   93\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Np\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   237.0482\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 94:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Plutonium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   94\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Pu\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   242\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 95:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Americium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   95\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Am\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   243\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 96:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Curium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   96\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cm\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   247\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 97:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Berkelium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   97\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Bk\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   247\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 98:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Californium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   98\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cf\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   251\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 99:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Einsteinium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   99\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Es\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   252\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 100:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Fermium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   100\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Fm\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   257\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 101:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Mendelevium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   101\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Md\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   258\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 102:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Nobelium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   102\n\t\t\t\t\t\t\tCHEMICAL NAME       :   No\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   250\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 103:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Lawrencium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   103\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Lr\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   260\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 104:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Rutherfordium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   104\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Rf\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   261\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 105:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Dubnium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   105\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Db\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   262\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 106:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Seaborgium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   106\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Sg\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   263\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 107:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Bohrium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   107\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Bh\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   262\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 108:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Hassium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   108\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Hs\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   255\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 109:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Meitnerium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   109\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Mt\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   256\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 110:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Darmstadtium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   110\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ds\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   269\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 111:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Roentgenium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   111\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Rg\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   272\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 112:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Copernicium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   112\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Cn\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   277\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 113:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ununtrium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   113\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Nh\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   286\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 114:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Flerovium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   114\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Fl\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   289\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 115:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ununpentium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   115\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Mc\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   289\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 116:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Livermorium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   116\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Lv\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   293\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 117:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ununseptium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   117\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Ts\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   293\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                case 118:
                {
                    system("cls");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\tThe Details of the corresponding number:\n\n");
                    printf("\t\t\t\t\t\t\tELEMENT NAME        :   Ununoctium\n\t\t\t\t\t\t\tATOMIC NUMBER       :   118\n\t\t\t\t\t\t\tCHEMICAL NAME       :   Og\n\t\t\t\t\t\t\tATOMIC WEIGHT       :   294\n\n\n\t\t\t\t\t\t\t\tTHANK YOU!!!!!!!");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t1.press (1) for GO TO PREVIOUS MENU.\n");
                    printf("\t\t\t\t\t\t\t2.press (2) for GO TO MAIN MENU.\n\n");
                    printf("\t\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                    {
                        goto part4;
                    }
                    case 2:
                    {
                        system("cls");
                        goto part1;
                    }
                    }
                    getch();
                }
                }
            }
            }



        }
        case 3:
        {
            system("cls");
            goto part1;
        }

        }
    }
    case 2:
    {
        system("cls");
        system("color 9");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t----------------\5\5\5\5\5\5MODERN PERIODIC TABLE\5\5\5\5\5\5\5--------------\n\n");
        printf("\t\t\t\t\t\t\t\t\t   Developed By\n\n");
        printf("\t\t\t\t\t\t\t\t   Abid Hussen.\n\t\t\t\t\t\t\t\t   ID : 2122020052\n");
        printf("\t\t\t\t\t\t\t\t   Batch : 57.\n\t\t\t\t\t\t\t\t   Section : B.\n");
        printf("\t\t\t\t\t\t\t\t   Department : Computer Science and Engineering.\n");
        printf("\t\t\t\t\t\t\t\t   Leading University.");
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t     -----------------------------------------\n");
        printf("\t\t\t\t\t\t     \5 1.press (1) for GO TO PREVIOUS MENU.  \5\n");
        printf("\t\t\t\t\t\t     -----------------------------------------\n");
        printf("\t\t\t\t\t\t     \5 2.press (2) for GO TO Main MENU.     \5\n");
        printf("\t\t\t\t\t\t     -----------------------------------------\n\n\n\n");

        printf("\t\t\t\t\t\t\tEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            system("cls");
            goto part1;
        }
        case 2:
        {
            mainPage();
        }
        }
        getch();
    }
    case 3:
    {
        mainPage();
    }
    }


}
void bank()
{
    system("cls");

    int pin=1234,entry_pin;             //entry_pin=user given pin
    int choice,withdraw,menu,n1,n2,n3,n4,gf;
    float balance=10000,deposit;

    system("color 0A");
    printf("\n\n\n\n\n\t\t\t\t\tENTER YOUR PIN: ");
    scanf("%d",&entry_pin);
    if(pin == entry_pin)            //correct pin

menu:
    {
        system("color 08");
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t**************************************************\n");
        printf("\t\t\t\t\tWELCOME TO AUR BANK ATM SERVICE \n");
        printf("\t\t\t\t**************************************************\n");
        printf("\n\t\t\t\t\t\t1.Check Balance\n");
        printf("\n\t\t\t\t\t\t2.Withdraw Cash\n");
        printf("\n\t\t\t\t\t\t3.Deposit Cash\n");
        printf("\n\t\t\t\t\t\t4.Quit\n");
        printf("\n\t\t\t\t\t\tEnter Your Choice:");
        scanf("%d",&choice);


        switch(choice)
        {
        case 1:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t YOUR BALANCE IS TK:%.2f\n",balance);
            printf("\n\n\t\t\t\t\t\t PRESS 1 TO GOTO MENU");
            printf("\n\n\t\t\t\t\t\t PRESS 2 TO GOTO MENU");
            printf("\n\n\t\t\t\t\t\t Enter Your Choice:");
            scanf("%d",&n1);
            switch(n1)
            {
            case 1:
                goto menu;
            case 2:
            {
                mainPage();
            }
            break;
            default:
                printf("\n\n\n\n\n\n\t\t\t\t\t\tINVALID CHOICE");
                break;
            }
            break;

        }
        case 2:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t ENTER THE AMOUNT TO WITHDRAW:");
            scanf("%d",&withdraw);
            if(withdraw %100!=0)
            {
                printf("\n\t\t\t\t\t\t PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100\n");
                printf("\n\t\t\t\t\t\t PRESS 1 TO GOTO MENU");

            }
            else if(withdraw>(balance - 500))
            {
                printf("\n\t\t\t\t\t\t INSUFFICIENT BALANCE\n");
                printf("\n\t\t\t\t\t\tPRESS 1 TO GOTO MENU");

            }
            else
            {
                balance=(balance-withdraw);
                printf("\n\t\t\t\t\t\t PLEASE COLLECT CASH\n");
                printf("\n\t\t\t\t\t\t YOUR CURRENT BALANCE IS %.2f\n",balance);
                printf("\n\t\t\t\t\t\t PRESS 1 TO GOTO MENU");
                printf("\n\t\t\t\t\t\t PRESS 2 TO GOTO MENU");

            }
            printf("\n\n\t\t\t\t\t\tEnter Your Choice:");
            scanf("%d",&n2);
            switch(n2)
            {
            case 1:
                goto menu;
            case 2:
                mainPage();
                break;
            default:
                printf("\n\n\t\t\t\t\t\t INVALID CHOICE");
                break;
            }

            break;
        }
        case 3:
        {
            system("color 78");
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\t ENTER THE AMOUNT OF DEPOSIT: ");
            scanf("%f",&deposit);
            balance = (balance + deposit);
            printf("\n\n\t\t\t\t\t\tYOUR BALANCE IS %.2f\n",balance);
            printf("\n\n\t\t\t\t\t\tPRESS 1 TO GOTO MENU\n");
            printf("\n\n\t\t\t\t\t\tPRESS 2 TO GOTO MENU\n");
            printf("\n\n\t\t\t\t\t\tEnter Your Choice:");
            scanf("%d",&n3);
            switch(n3)
            {
            case 1:
                goto menu;
            case 2:
                mainPage();
                break;
            default:
                printf("\n\n\t\t\t\t\t\t INVALID CHOICE");
                break;


            }
            case 4:
            {
                system("color B0");
                system("cls");
                printf("\n\n\n\n\n\t\t\t\t\t\t THANK YOU FOR USING AUR BANK ATM SERVICE\n");
                printf("\n\n\t\t\t\t\t\t PRESS 1 TO GOTO MENU\n");
                printf("\n\n\t\t\t\t\t\tEnter Your Choice:");
                scanf("%d",&n4);
                switch(n4)
                {
                case 1:
                    goto menu;
                case 2:
                    printf("\n\n\t\t\t\t\t\t THANK YOU FOR USING AUR BANK ATM SERVICE");
                    break;
                default:
                    printf("\n\n\t\t\t\t\t\t INVALID CHOICE");
                    break;

                    break;
                }
                default:
                {
                    system("cls");
                    printf("\n\n\t\t\t\t\t\tINVALID CHOICE\n");
                    printf("\n\n\t\t\t\t\t\t DO YOU WISH TO HAVE ANOTHER THRANSCATION?(y/n):\n");
                    printf("\n\n\t\t\t\t\t\t PRESS 1 TO GOTO MENU\n");
                    printf("\n\n\t\t\t\t\t\tEnter Your Choice:");
                    scanf("%d",&n4);
                    switch(n4)
                    {
                    case 1:
                        goto menu;
                    case 2:
                        printf("\n\n\t\t\t\t\t\t THANK YOU FOR USING AUR BANK ATM SERVICE");
                        break;

                    default:
                        printf("\n\n\t\t\t\t\t\t INVALID CHOICE");
                        break;
                    }

                    switch(gf)
                    {
                    case 1:
                    {
                        goto menu;
                        break;
                    }

                    case 2:
                    {
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t THANKS FOR USING AUR Bank ATM SERVICE");
                        break;
                    }
                    default:
                    {
                        system("cls");
                        printf("\n\n\t\t\t\t\t\tINVALID  NUMBER.\3");
                    }

                    }
                }


            }
        }
        }
    }

    else
    {
        system("color 4F");
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t\t INCORRECT PIN\n");
        printf("\n\t\t\t\t\t\t TRY AGAIN \2\2\2");
    }



    getch();

}
void stopwatch()
{
    system("cls");
    system("color b");
    int hour,minute, second;
    printf("\n\n\n\n\n\t\t\t=========================================================================================================\n");
    printf("   \t\t\t\t\t\t\t\t\6\6\6\6\6Welcome To STOPWATCH\6\6\6\6\6\n");
    printf("\t\t\t=========================================================================================================\n\n\n\n");
    printf("\n\n\n\n\n\n\n\t\t\t\t\tEnter hour minute second:");

    scanf("%d%d%d",&hour,&minute, &second);
    system("cls");
    int h=0,m=0,s=0;
    while (1)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\3\3\3\3\3 STOP WATCH \3\3\3\3\3\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t%.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n\n\t\t\t\t\t\t\t\t\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n\n\n");




            if(h == hour && m == minute && s == second)
            {
                break;
            }

        s++;

        sleep(1);
        system ("cls");

        if(s == 60)
        {
            m++;
            s = 0;
        }
        if(m == 60)
        {
            h++;
            m=0;
        }
    }
}

void calculator()
{
    system("color b");
    int choice;
menu:
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Welcome to Ishmam's Scientific Calculator.\3\n\n\n.");
    printf("\t\t\t\t\t\t\t\t Please select the operation You want to do:\n\n\n");
    printf("\t\t\t\t\t\t\t\t********Press zero to exit the  Program.**************\n\n");
    printf("\t\t\t\t\t\t\t\t Press 1 for Addition.\n");
    printf("\t\t\t\t\t\t\t\t Press 2 for Subtraction.\n");
    printf("\t\t\t\t\t\t\t\t Press 3 for Multiplication.\n");
    printf("\t\t\t\t\t\t\t\t Press 4 for Division.\n");
    printf("\t\t\t\t\t\t\t\t Press 5 for Modulus.\n");
    printf("\t\t\t\t\t\t\t\t Press 6 for Power.\n");
    printf("\t\t\t\t\t\t\t\t Press 7 for Square.\n");
    printf("\t\t\t\t\t\t\t\t Press 8 for Cube.\n");
    printf("\t\t\t\t\t\t\t\t Press 9 for SquareRoot.\n");
    printf("\t\t\t\t\t\t\t\t Press 10 for Trigonometric ratio.\n");
    printf("\t\t\t\t\t\t\t\t Press 11 for Logarithm.\n");
    printf("\t\t\t\t\t\t\t\t Press 12 for Factorial.\n");
    while(1)
    {
        printf("\t\t\t\t\t\t\t\t Enter the Operation you want to do:");
        scanf("%d", & choice);
        switch(choice)
        {
        case 0:
            printf("\n\t\t\t\t\t\t\t\t\t\t\t Good BYE. \n\t\t\t\t\t\t\t\t\t\t\t SEE YOU SOON.");
            getch();
            exit(0);
        case 1:
            system("cls");
            addition();
            getchar();
            goto menu;
            break;
        case 2:
            system("cls");
            subtraction();
            getchar();
            goto menu;
            break;
        case 3:
            system("cls");
            multiplication();
            getchar();
            goto menu;
            break;
        case 4:
            system("cls");
            division();
            getchar();
            goto menu;
            break;
        case 5:
            system("cls");
            modulus();
            getchar();
            goto menu;
            break;
        case 6:
            system("cls");
            power();
            getchar();
            goto menu;
            break;
        case 7:
            system("cls");
            square();
            getchar();
            goto menu;
            break;
        case 8:
            system("cls");
            cube();
            getchar();
            goto menu;
            break;
        case 9:
            system("cls");
            squareroot();
            getchar();
            goto menu;
            break;
        case 10:
            system("cls");
            trigonometry();
            getchar();
            goto menu;
            break;
        case 11:
            system("cls");
            logarithm();
            getchar();
            goto menu;
            break;
        case 12:
            system("cls");
            factorial();
            getchar();
            goto menu;
            break;
        default :
            printf("No more fun! Enter the operation You want to do.\n");
            break;
        }
    }


    return 0;
}
void addition ()
{
    int a,b;
    system("color c");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter the first Digit:");
    scanf("%d", & a);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t Enter the second Digit:");
    scanf("%d", & b);
    int sum = a + b;
    printf("\n\t\t\t\t\t\t\t\t\t The sum Of %d + %d = %d\n",a,b,sum);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();
}
void subtraction()
{
    int c,d;
    system("color d");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter the first Digit:");
    scanf("%d", &c);
    printf("\n\t\t\t\t\t\t\t\t\t Enter the second Digit:");
    scanf("%d", &d);
    int difference = c - d;
    printf("\n\t\t\t\t\t\t\t\t\t The difference between %d and %d is %d",c,d,difference);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();
}
void multiplication()
{
    system("color e");
    int e,f;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter the first Digit:");
    scanf("%d", & e);
    printf("\n\t\t\t\t\t\t\t\t\t Enter the second Digit:");
    scanf("%d", & f);
    int product = e*f;
    printf("\n\t\t\t\t\t\t\t\t\t The product of %d X %d = %d\n",e,f,product);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();
}
void division()
{
    system("color f");
    float g,h;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter the first Digit:");
    scanf("%f", & g);
    printf("\n\t\t\t\t\t\t\t\t\t Enter the second Digit:");
    scanf("%f", & h);
    float result = g/h;
    printf("\n\t\t\t\t\t\t\t\t\t The division of %.2f by %.2f = %.2f\n",g,h,result);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();


}
void modulus()
{
    system("color 9");
    int a,b;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter the first Digit:");
    scanf("%d", & a);
    printf("\n\t\t\t\t\t\t\t\t\t Enter the second Digit:");
    scanf("%d", & b);
    int modu = a%b;
    printf("\n\t\t\t\t\t\t\t\t\t The modulus of %d and %d = %d\n",a,b,modu);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();



}
void power()
{
    system("color 5");
    double b,p,e;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter the base number:");
    scanf("%lf", & b);
    printf("\n\t\t\t\t\t\t\t\t\t Enter the power of the base number:");
    scanf("%lf", & p);
    e = pow(b,p);
    printf("\n\t\t\t\t\t\t\t\t The power of %.2lf to the base %.2lf is %.2lf\n",p,b,e);
    printf("\n\t\t\t\t\t\t\t\t** Press enter button to return to main menu.*****");
    getchar();


}
void square()
{
    system("color 3");
    double b,e;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter the base number:");
    scanf("%lf", & b);
    e = pow(b,2);
    printf("\n\t\t\t\t\t\t\t\t\t The square of %.2lf is %.2lf\n",b,e);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();

}
void cube ()
{
    system("color 2");
    double b,e;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter the base number:");
    scanf("%lf", & b);
    e = pow(b,3);
    printf("\n\t\t\t\t\t\t\t\t\t The cube of %.2lf is %.2lf\n",b,e);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();

}
void squareroot()
{
    system("color 9");
    double b,sqt;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter the base number:");
    scanf("%lf", & b);
    sqt = sqrt(b);
    printf("\n\t\t\t\t\t\t\t\t\t The squareroot of %.2lf is %.2lf\n",b,sqt);
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();

}
void trigonometry()
{
    float degree,radian;
    const float Pi = 3.1415;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter angle in degree:");
    scanf("%f", & degree);
    radian = degree * (Pi/180.0);
    printf("\n\t\t\t\t\t\t\t\t\t Sin(%.2f)=%.2f\n",degree,sin(radian));
    printf("\n\t\t\t\t\t\t\t\t\t Cos(%.2f)=%.2f\n",degree,cos(radian));
    printf("\n\t\t\t\t\t\t\t\t\t Tan(%.2f)=%.2f\n",degree,tan(radian));
    printf("\n\t\t\t\t\t\t\t\t\t Cosec(%.2f)=%.2f\n",degree,1/sin(radian));
    printf("\n\t\t\t\t\t\t\t\t\t Sec(%.2f)=%.2f\n",degree,1/cos(radian));
    printf("\n\t\t\t\t\t\t\t\t\t Cot(%.2f)=%.2f\n",degree,1/tan(radian));
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();

}
void logarithm()
{
    system("color 7");
    double a;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Enter a  digit:");
    scanf("%lf", & a);
    printf("\n\t\t\t\t\t\t\t\t\tLog(%.2lf) is %.2lf\n",a,log10(a));
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();
}
void factorial()
{
    system("color 8");
    int n,factorial;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Enter the digit of which you want to find the factoral of:");
    scanf("%d", & n);
    factorial = 1;
    for(int i=1; i <= n; i++)
    {
        factorial = factorial*i;
        printf("\n\t\t\t\t\t\t\t\t\tThe factorial  of %d is %d.\n",n,factorial);
    }
    printf("\n\t\t\t\t\t\t\t\t\t **Press enter button to return to main menu.*****");
    getchar();

}



