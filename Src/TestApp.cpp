/******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <chrono>
#include <stdint.h>
#include <conio.h>

/******************************************************************************
 * Magic number defines
 ******************************************************************************/
#define ESC     27

/******************************************************************************
 * Global variables 
 ******************************************************************************/

/*******************************************************************************
* Function: ClearConsole 
********************************************************************************/
void TestApp::ClearConsole()
{
    std::cout << "\033[2J";
}

/*******************************************************************************
* Function: HideCursor 
********************************************************************************/
void TestApp::HideCursor(void)
{
    std::cout << "\033[?25l";
}

/*******************************************************************************
* Function: ShowCursor 
********************************************************************************/
void TestApp::ShowCursor(void)
{
    std::cout << "\033[?25h";
}

/*******************************************************************************
* Function: AsciiIfKeyPressed - non-blocking function
********************************************************************************/
int TestApp::AsciiIfKeyPressed(void)
{
    int ReturnValue = 0;
    if (_kbhit()) 
    { 
        ReturnValue = _getch(); 
    }
    return ReturnValue;
}
/*******************************************************************************
* Function: Run 
********************************************************************************/
void TestApp::TestApp_main(void)
{
    bool  DoNotFinish = true;
    do
    {
 
        switch(AsciiIfKeyPressed())
        {
            case ESC: 
                    DoNotFinish = false;
                    break;
            default: break;
        }

    }
    while(DoNotFinish);
}

/*******************************************************************************
* Function: Run 
********************************************************************************/
void TestApp::Run(void)
{

    ShowColumnNames();

    CheckingAccount MyAccount1;

    PersonalAccount MyAccount2;    
    MyAccount2.Set_OverdraftLimit(1000);        
    MyAccount2.Set_OverdraftInterestRate(0.15);

    SavingsAccount MyAccount3; 

    ForeginCurrencyAccount MyAccount4;   

    // vector<Account*> accounts = {&MyAccount1, &MyAccount2, &MyAccount3};
    // accounts.insert (&MyAccount4);
    
    Account* MyTab[] = {&MyAccount1, &MyAccount2, &MyAccount3, &MyAccount4};
    MyAccount1.Withdraw(0);
    MyTab[0] -> Withdraw(0);
    return;
    for (int i = 0; i < sizeof(MyTab)/sizeof(MyTab[0]); i++)
    {
        MyTab[i] -> Set_Currency("PL");
        OperationNumber++;        
        ShowReport(MyTab[i]);
    }
    ShowSeparationLine();

    for (int i = 0; i < sizeof(MyTab)/sizeof(MyTab[0]); i++)
    {
        MyTab[i] -> Set_Currency("PLN");
        OperationNumber++;
        ShowReport(MyTab[i]);
    }
    ShowSeparationLine();

    MyAccount4.Set_Currency("CHF");
    OperationNumber++;
    ShowReport(&MyAccount4);
    ShowSeparationLine();


    for (int i = 0; i < sizeof(MyTab)/sizeof(MyTab[0]); i++)
    {
        MyTab[i] -> Set_Balance(1000);
        OperationNumber++;
        ShowReport(MyTab[i]);
    }
    ShowSeparationLine();

    for (int i = 0; i < sizeof(MyTab)/sizeof(MyTab[0]); i++)
    {
        MyTab[i] -> Withdraw(1001);    
        OperationNumber++;
        ShowReport(MyTab[i]);        
    }    
    ShowSeparationLine();

    for (int i = 0; i < sizeof(MyTab)/sizeof(MyTab[0]); i++)
    {
        MyTab[i] -> Deposit(300); 
        OperationNumber++;
        ShowReport(MyTab[i]);        
    }    
    ShowSeparationLine();
}
