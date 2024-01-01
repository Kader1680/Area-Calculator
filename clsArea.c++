#include <cmath>
#include <iostream>
using namespace std;

class Area
{
        protected:
            double height;

        public:
            Area(){
                height = 0;
            }

            void setHeight(){
                double h;
                cout<< "enter the height ";
                height = h;
                cin>>height;
            }    
            double getHeight(){
                return height;
            }
};



class Rectingle: public Area {
private:
   double Base;
public:
    Rectingle(){
        Base = 0;
    }
    void setBase(){
        double b;
        cout<< "enter the Base : ";
        Base = b;
        cin>>Base;
    }
    double getBasic(){
        return Base;
    }
    double resultRect(){
        double sum = (Base * height) / 2;
        return sum;
    }
};

class Square:public Area{
private:
    double width;
public:
    Square(){
        width = 0;
    }
    void setWidth(){
                double h;
                cout<< "enter the width : ";
                width = h;
                cin>>width;
            }    
    double getHeight(){
        return width;
    }


    double result(){
        double sum = width * height;
        return sum;
    }
};

class Circle: public Area {
private:
   double Raduis;
public:
    Circle(){
        Raduis = 0;
    }
    void setRaduis(){
        double r;
        cout<< "enter the Raduis : ";
        Raduis = r;
        cin>>Raduis;
    }
    double getRaduis(){
        return Raduis;
    }
    double resultCircle(){
        double pw = pow(Raduis, 2);
        float p = 3.14;
        double sum =  p * pw;
        return sum;
    }
};
int main()
{
    
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"-----------  Welcome to Shap Area Calculator  --------------"<<endl;
    cout<<"-------------------  1: Area Rectingle ---------------------"<<endl;
    cout<<"-------------------- 2:   Area Square  ---------------------"<<endl;
    cout<<"-------------------- 3:   Area Circle  ---------------------"<<endl;

    int choise;
    cout<<"enter you choise number from 1 to 3 ";
    cin>>choise;
    Rectingle r;
    Square s;
    Circle c;
    
    
    switch (choise){
    
    case 1:
        cout<<"calculate area of rectangle"<<endl;
        r.setHeight();
        r.setBase();
        cout<<"the result of area Rectangle is : "<<r.resultRect();
        break;
    
    case 2:
        cout<<"calculate area of Square"<<endl;
        s.setHeight();
        s.setWidth();
        cout<<"the result of area Sequare is : "<<s.result();
        break;
    case 3:
        cout<<"calculate area of Circle"<<endl;
        c.setRaduis();
        cout<<"the result of area Circle is : "<<c.resultCircle();
        break;
    default:
        cout<<"invalid choise input please enter number from 1 to 3";
        break;
    }

    // s.setWidth();
    // s.setHeight();
    // cout<<"the result of area square is : "<<s.result();

    
    return 0;
}
