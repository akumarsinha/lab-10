//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

#include<iostream>//including library 
using namespace std;//using namespace std
//creating class
class rect
{
  public:
  double len,bre;
  double area()
    {
       return len*bre;
    }
  double per()
    {
       return (2*(len+bre));//returning the statement
    }
};
//main function
int main()
{
 double len1,bre1,len2,bre2;
 //asking the user about length ,breadth etc
    cout<<"enter the length of the first rectangle"<<endl;//asking user for length of 1st rectangle
    cin>>len1;
    cout<<"enter the breadth of the first rectangle"<<endl;
    cin>>bre1;
    cout<<"enter the length of the second rectangle"<<endl;
    cin>>len2;
    cout<<"enter the breadth of the second rectangle"<<endl;
    cin>>bre2;
    rect rect1;
    rect rect2;
    rect1.len=len1;
    rect1.bre=bre1;
    rect2.len=len2;
    rect2.bre=bre2;
    double area1=rect1.area();
    double per1=rect1.per();
    double area2=rect2.area();
    double per2=rect2.per(); 

 //output values
    cout<<"area of first rectangle="<<area1<<endl;
    cout<<"area of second rectangle="<<area2<<endl;
    cout<<"perimeter of first triangle="<<per1<<endl;
    cout<<"perimeter of second rectangle="<<per2<<endl;
 //return an integer
 return 0;
}
//end of program
