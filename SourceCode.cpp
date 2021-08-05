#include <iostream>
#include <stdlib.h>
// #include <bits/stdc++.h>

using namespace std;

void RentforDays(int n)
{
  int Days = 30;

  // taking input from user

  if(n<5) // for less tha 5 days
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 2,500/-";
  }

  else if(n==5)
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 5,000/-";
  }

  else if(n>5 && n <10) // it will be from 5-10 days
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 5000/-";
  }

  else if(n==10)
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 10,000/-";
  }

  else if(n>10 && n <15) // it will be from 10 - 15 days
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 7,500/-";
  }

  else if(n==20)
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 20,000/-";
  }

  else if(n>15 && n<20) // it will be from 15 - 20 days
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 10,000/-";
  }

  else if(n>20 && n<25) // it will be from 20-25 days
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 15,000/-";
  }

  else if(n>25 && n<=30)
  {
    cout<<"\t\t\t\t\t\t"<<"Your Rent will be 30,000/-";
  }
}

int main()
{
    cout<<"\t\t\t\t\t"<<"***************      *********       ******** "<<endl;
    cout<<"\t\t\t\t\t"<<"*                   *         *     *        * "<<endl;
    cout<<"\t\t\t\t\t"<<"*                   *         *     *         * " << endl;
    cout<<"\t\t\t\t\t"<<"*                   ***********     ********** " << endl;
    cout<<"\t\t\t\t\t"<<"*                   *         *     *       *  " << endl;
    cout<<"\t\t\t\t\t"<<"***************     *         *     *        * " << endl;
    cout<<"\t\t\t\t\t"<< endl;
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<"*********       **********    ************  **********   ******       *          "<<endl;
    cout<<"\t\t\t\t\t"<<"*        *      *               *       *       *       *      *      *          "<<endl;
    cout<<"\t\t\t\t\t"<<"*         *     *               *       *       *       *      *      *          "<<endl;
    cout<<"\t\t\t\t\t"<<"**********      **********      *       *       *       ********      *          "<<endl;
    cout<<"\t\t\t\t\t"<<"*       *       *               *       *       *       *      *      *          "<<endl;
    cout<<"\t\t\t\t\t"<<"*       *       **********      *       *       *       *      *      ********   "<<endl;
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<"**********  *       *   **********   ***************     **********      *            *"<<endl;
    cout<<"\t\t\t\t\t"<<"*           *       *   *                  *             *               * *        * *"<<endl;
    cout<<"\t\t\t\t\t"<<"*           *       *   *                  *             *               *   *    *   *"<<endl;
    cout<<"\t\t\t\t\t"<<"*********       *       **********         *             *********       *      *     *"<<endl;
    cout<<"\t\t\t\t\t"<<"        *       *                *         *             *               *            *"<<endl;
    cout<<"\t\t\t\t\t"<<"        *       *                *         *             *               *            *"<<endl;
    cout<<"\t\t\t\t\t"<<"*********       *       **********         *             *********       *            *"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<"                                                                                         - by vikas"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;

    // simple authentication system
    string defaultPass = "Vikas";
    string userPass;
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\t\t\t\t\t"<<"<>                                                            <>"<<endl;
    cout<<"\t\t\t\t\t"<<"<>                      Login System                          <>"<<endl;
    cout<<"\t\t\t\t\t"<<"<>                                                            <>"<<endl;
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t"<<"Enter Password: ";
    cin>>userPass;
    if(defaultPass==userPass)
    {
      cout<<"\t\t\t\t\tSuccessfully Logged In"<<endl;
    }
    else
    {
      cout<<"\t\t\t\t\tError- Invalid Password!!!"<<endl;
    }
    system("clear");
    // clearing the screen
    // system("clear");

    // for choosing the cars
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"  "<<"     Available Cars     "<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- a. BMW             --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- b. Mercedes Benz   --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- c. Audi            --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- d. Ferrari         --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- e. Lamborgini      --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--  --------------------------  --"<<endl;
    cout<<"\t\t\t\t\t\t"<<"         Car Rental System    "<<endl;
    cout<<"\t\t\t\t\t\t"<<"--  --------------------------  --"<<endl;

    // assigining the cars name
    char Cars;
    string a = "BMW\n";
    string b = "Mercedes Benz\n";
    string c = "Audi\n";
    string d = "Ferrari\n";
    string e = "Lamborgini\n";

    // taking input from user
    cout<<"\t\t\t\t\tChoose the Car: ";
    cin>>Cars;
    cout<<endl;
    cout<<endl;
    switch (Cars) {
      case 'a':
      cout<<"\t\t\t\t\tYou have choosen " << a;
      break;
      case 'b':
      cout<<"\t\t\t\t\tYou have choosen " << b;
      break;
      case 'c':
      cout<<"\t\t\t\t\tYou have choosen " << c;
      break;
      case 'd':
      cout<<"\t\t\t\t\tYou have choosen " << d;
      break;
      case 'e':
      cout<<"\t\t\t\t\tYou have choosen " << e;
      break;

      default:
      cout<<"Invalid Option";
      break;
    }
    // system("clear");

    cout<<"\t\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\t\t\t\t\t\t"<<"<>                                        <>"<<endl;
    cout<<"\t\t\t\t\t\t"<<"<>    Description Only Rent for 30 Days   <>"<<endl;
    cout<<"\t\t\t\t\t\t"<<"<>                                        <>"<<endl;
    cout<<"\t\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<endl;
    cout<<endl;
    int RentalDays;
    cout<<"\t\t\t\t\t\t"<<"Enter No of Days you wish to rent for: ";
    cin>>RentalDays;
    cout<<endl;
    system("clear");
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\t\t\t\t\t"<<"<>                           Car Rental system - Customer Receipt                                 <>"<<endl;
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\t\t\t\t\t"<<"                                                                                                    "<<endl;
    cout<<"\t\t\t\t\t"<<"                                                                                                    "<<endl;
    cout<<"\t\t\t\t\t\t"<<"You Selected Car Model No: " << Cars << endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t"<<"You Rented Car for: " << RentalDays << " Days."<< endl;
    cout<<endl;
    RentforDays(RentalDays);
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- a. BMW             --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- b. Mercedes Benz   --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- c. Audi            --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- d. Ferrari         --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"-- e. Lamborgini      --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"--                    --"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<"--"<<"  "<<"--"<<"------------------------"<<"  "<<"--"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\t\t\t\t\t"<<"<>                                       Thank You                                                <>"<<endl;
    cout<<"\t\t\t\t\t"<<"<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;


    return 0;
}
