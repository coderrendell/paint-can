#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i=1,d;
    int clr;                       /*variable for switch*/
    int rr=0,br=0,wr=0;                  /*for counting no. of refils*/
    float r=0,b=0,w=0;                            /*amt of colour req'd*/
    float tr=120.0,tb=120.0,tw=120.0;
    float tp,atp;
    float diff_r,diff_b,diff_w;
    float arr=0.0,abr=0.0,awr=0.0;          /*amt of colour refilled*/
    float r_used=0.0,b_used=0.0,w_used=0.0;     /*amt of colour used*/

    cout<<"*ALL COLOUR CANS HAVE MAX: 120 Liters OF COLOUR IN IT*"<<endl<<endl;


    while(i<=10)
    {

        cout<<"Select your colour: "<<endl<<"1.Red"<<endl<<"2.Blue"<<endl<<"3.White"<<endl;
        cin>>clr;
        switch (clr)
        {
        case 1:
            cout<<"Enter Amount(in liters) of Red colour: "<<endl;
            cin>>r;
            r_used=r_used+r;   /*to find amt of colour used*/
            tr=tr-r;
            if(tr<=(40*120)/100.0)
            {
                cout<<"Available Red colour= "<<tr<<endl;
                diff_r=120-tr;
                diff_b=120-tb;
                diff_w=120-tw;                                               /*r=20  tr=100   diff=20*/

                 tp=tr+tb+tw;      /*to refill if avg <=40%*/
                 atp=tp/3.0;
                if(atp<=(40*120)/100.0)
                {
                     arr=arr+diff_r;  /*to find amt of paint refilled*/
                     abr=abr+diff_b;  /*to find amt of paint refilled*/
                     awr=awr+diff_w; /*to find amt of paint refilled*/


                     tr=120;
                     tb=120;
                     tw=120;
                     rr=rr+1;
                     br=br+1;
                     wr=wr+1;
                }

                else
                {
                    arr=arr+diff_r;  /*to find amt of paint refilled*/
                    tr=120;
                    cout<<"Red colour has been RESTORED 100%"<<endl;
                    arr=arr+diff_r;  /*to find amt of paint refilled*/
                    rr=rr+1;
                }
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            else
            {
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            break;
        case 2:
            cout<<"Enter Amount(in liters) for Blue colour: "<<endl;
            cin>>b;
            b_used=b_used+b;   /*to find amt of colour used*/
            tb=tb-b;
            if(tb<=(40*120)/100.0)
            {
                cout<<"Available Blue colour= "<<tb<<endl;
                diff_r=120-tr;
                diff_b=120-tb;
                diff_w=120-tw;                                               /*r=20  tr=100   diff=20*/


                tp=tr+tb+tw;        /*to refill if avg <=40%*/
                atp=tp/3.0;
                if(atp<=(40*120)/100.0)
                {
                    arr=arr+diff_r;
                    abr=abr+diff_b;  /*to find amt of paint refilled*/
                    awr=awr+diff_w; /*to find amt of paint refilled*/

                   tr=120;
                   tb=120;
                   tw=120;
                   rr=rr+1;
                   br=br+1;
                   wr=wr+1;

                }
                else
                {
                    abr=abr+diff_b;  /*to find amt of paint refilled*/

                tb=120;
                cout<<"Blue colour has been RESTORED 100%"<<endl;
                br=br+1;
                }
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            else
            {
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            break;
        case 3:
            cout<<"Enter Amount(in liters) for White colour: "<<endl;
            cin>>w;
            w_used=w_used+w;   /*to find amt of colour used*/
            tw=tw-w;
            if(tw<=(40*120)/100.0)
            {
                cout<<"Available White colour= "<<tw<<endl;
                diff_r=120-tr;
                diff_b=120-tb;
                diff_w=120-tw;                                               /*r=20  tr=100   diff=20*/



                 tp=tr+tb+tw;        /*to refill if avg <=40%*/
                 atp=tp/3.0;
                 if(atp<=(40*120)/100.0)
                 {
                     arr=arr+diff_r;
                     abr=abr+diff_b;  /*to find amt of paint refilled*/
                     awr=awr+diff_w; /*to find amt of paint refilled*/


                   tr=120;
                   tb=120;
                   tw=120;
                   rr=rr+1;
                   br=br+1;
                   wr=wr+1;
                 }
                 else
                {
                    awr=awr+diff_w; /*to find amt of paint refilled*/
                    tw=120;
                    cout<<"White colour has been RESTORED 100%"<<endl;
                    wr=wr+1;
                }
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            else
            {
                cout<<"Available Red colour= "<<tr<<endl<<"Available Blue colour= "<<tb<<endl<<"Available White colour= "<<tw<<endl;
            }
            break;
        default:
            cout<<"INVALID Entry !!!"<<endl<<"Select from the given options...."<<endl;
            break;

        }




            cout<<"Want to paint more ?"<<endl<<"press 1"<<endl<<"Painting done !"<<endl<<"press 2"<<endl;
            cin>>d;

            if(d==1)
                i++;
            else
                break;

    }

    cout<<"==# Amount of paint remaining #=="<<endl<<endl;
    cout<<"Red colour= "<<tr<<" liters"<<endl<<"Blue colour= "<<tb<<" liters"<<endl<<"White colour= "<<tw<<" liters"<<endl<<endl;

    cout<<"==# NO. of times paint cans refilled #=="<<endl<<endl;
    cout<<"Red colour= "<<rr<<" tyms"<<endl<<"Blue colour= "<<br<<" tyms"<<endl<<"White colour= "<<wr<<" tyms"<<endl<<endl;

    cout<<"==# Amount of paint refilled #=="<<endl<<endl;
    cout<<"Red colour= "<<arr<<" liters"<<endl<<"Blue colour= "<<abr<<" liters"<<endl<<"White colour= "<<awr<<" liters"<<endl<<endl;

    cout<<"==# Amount of paint used #=="<<endl<<endl;
    cout<<"Red colour= "<<r_used<<" liters"<<endl<<"Blue colour= "<<b_used<<" liters"<<endl<<"White colour= "<<w_used<<" liters"<<endl<<endl;
    return 0;

}

