
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
                cout<< "enter the height";
                height = h;
                cin>>height;
            }    
            double getHeight(){
                return height;
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

class Rectingle: public Area {
private:
   double Base;
public:
    Rectingle(){
        Base = 0;
    }
    setBase(){
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


int main(int argc, char const *argv[])
{
    

    Rectingle s;
    // s.setWidth();
    // s.setHeight();
    // cout<<"the result of area square is : "<<s.result();


    s.setHeight();
    s.setBase();
cout<<"the result of area Rectangle is : "<<s.resultRect();
    return 0;
}
