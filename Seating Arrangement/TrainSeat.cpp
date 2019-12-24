#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    long num_test_case;
    short seat_num,opp_seat_num;
    cin>>num_test_case;
    while(num_test_case--)
    {
        cin>>seat_num;
        switch(seat_num%12)
        {
            case 0:
                opp_seat_num=seat_num-11;
                cout<<opp_seat_num<<" WS"<<endl;
                break;

            case 1:
                opp_seat_num=seat_num+11;
                cout<<opp_seat_num<<" WS"<<endl;
                break;
            
            case 2:
                opp_seat_num=seat_num+9;
                cout<<opp_seat_num<<" MS"<<endl;
                break;
            
            case 3:
                opp_seat_num=seat_num+7;
                cout<<opp_seat_num<<" AS"<<endl;
                break;
            case 4:
                opp_seat_num=seat_num+5;
                cout<<opp_seat_num<<" AS"<<endl;
                break;

            case 5:
                opp_seat_num=seat_num+3;
                cout<<opp_seat_num<<" MS"<<endl;
                break;

            case 6:
                opp_seat_num=seat_num+1;
                cout<<opp_seat_num<<" WS"<<endl;
                break;
            case 7:
                opp_seat_num=seat_num-1;
                cout<<opp_seat_num<<" WS"<<endl;
                break;
            case 8:
                opp_seat_num=seat_num-3;
                cout<<opp_seat_num<<" MS"<<endl;
                break;
            case 9:
                opp_seat_num=seat_num-5;
                cout<<opp_seat_num<<" AS"<<endl;
                break;
            case 10:
                opp_seat_num=seat_num-7;
                cout<<opp_seat_num<<" AS"<<endl;
                break;
            case 11:
                opp_seat_num=seat_num-9;
                cout<<opp_seat_num<<" MS"<<endl;
                break;
        }
    }
    return 0;
}