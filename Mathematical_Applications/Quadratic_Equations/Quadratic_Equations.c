#include <stdio.h>
#include <math.h>

int main(){
    char usch; //Result Variable
    int a , b , c;
    float x1 , x2 , delta;

    printf("ax² + bx + x = 0\n"); //imprime: ax^2 + bx + c = 0
    printf("Type the value of coefficient a\n");
    scanf("%d" , &a);                 //Saves "a" value
    printf("Type the value of coefficient b\n");
    scanf("%d" , &b);				  //Saves "b" value
    printf("Type the value of constant c\n");
    scanf("%d" , &c);				  //Saves "c" value

    delta = b*b-4*a*c; //Delta definition

    if(a == 0)//Checks if a equals 0, if so, then the equation may be linear (b != 0) or not even a equation (b = 0)
    {
        if(b == 0) //Checks if b equals 0
        {
            printf("This is not a linear equation neither quadratic equation\n");
        }
        else //in case "b" is different from 0
        {    //Starts the algorithm to solve linear equation
            x1=(-c)/b;
            printf("Result as scientific notation format? (y/n)\n");
            scanf("%s" , &usch); //saves the answer for the question
            if(usch == 'y') //checks if the answer was "yes"
            {
                printf("The root(zero) of this linear equation is  %e\n" , x1);
            }
            else
            {
                printf("The root(zero) of this linear equation is %f\n" , x1);
            }
        }    //Here ends the linear equation solving algorithm
    }
    else //in case "a" is different from 0
    {
        if(b == 0) //Checks if "b" equals 0
        {
            if(a > 0) //Checks if "a" greater than 0
            {
                if(c < 0)//Checks if "c" less than 0
                {
                    x1 = -c / a;  //Solving method case "c" is less than 0
                    x1 = sqrt(x1);//x1 results
                    x2 = -1 * x1; //x2 results
                    printf("Result as scientific notation format? (y/n)\n");
                    scanf("%s" , &usch);
                    if(usch == 'y')
                    {
                        printf("The roots(zeros) of the equation are %e and %e\n" , x1 , x2);
                    }
                    else
                    {
                        printf("The roots(zeros) of the equation are %f and %f\n" , x1 , x2);
                    }
                }
                else //case equation is invalid
                {
                    printf("The function has no real roots\n");
                }
            }
            else
            {
                if(c > 0) //Solving method case "c" is greater than 0
                {
                    x1 = c / -a;
                    x1 = sqrt(x1);
                    x2 = -1 * x1;
                    printf("Result as scientific notation format? (y/n)\n");
                    scanf("%s" , &usch);
                    if(usch == 'y')
                    {
                        printf("The roots(zeros) of the function are %e and %e\n" , x1 , x2);
                    }
                    else
                    {
                        printf("The roots(zeros) of the function are %f and %f\n" , x1 , x2);
                    }
                }
                else
                {
                    printf("The function has no real roots? (y/n)\n");
                }
            }
        }
        else
        {
            if(delta > 0) //if "delta" is greater than 0, there will be 2 real roots
            {
                printf("Result as scientific notation format? (y/n)\n");
                scanf("%s" , &usch);
                delta = sqrt(delta);
                x1 = (-b + delta)/(2*a);
                x2 = (-b - delta)/(2*a);
                if (usch == 'y')
                {
                    printf("The roots(zeros) of the function are %e and %e\n" , x1 , x2);
                }
                else
                {
                    printf("The roots(zeros) of the function are %f and %f\n" , x1 , x2);
                }
            }
            else //if "delta" smaller or equals to 0
            {
                if(delta == 0) //if equals to zero, one real root
                {
                    x1 = (-b)/(2*a); //This solution does not need the value of "delta", because this command will not be executed case "delta" equals 0
                    printf("Result as scientific notation format? (y/n)\n");
                    scanf("%s" , &usch);
                    if(usch == 'y')
                    {
                        printf("The root of the function is %e\n" , x1);
                    }
                    else
                    {
                        printf("The root of the function is %f\n" , x1);
                    }
                }
                else //if "delta" is less than 0
                {    //There will be no roots
                    printf("The  function has no real roots\n");
                }
            }
        }
    }
    return 0;
}