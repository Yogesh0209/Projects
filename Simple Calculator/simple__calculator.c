# include <stdio.h>
# include <math.h>

double division(double, double);
double modulus(int, int);
void print__menu();

int main (){
    
    int choice;
    double first , second , result;

    while(1){
        print__menu();
        scanf("%d", &choice);
        if(choice == 7){
        break;
        }
        if(choice<1 || choice>7){
            fprintf(stderr, "Invalid Menu Choice");
            continue;
        }

        printf("\nPlease enter the first number : ");
        scanf("%lf", &first);
        printf("Please enter the second number : ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: // Addition
           result = first + second;
        break;
        case 2: // Subtraction
           result = first - second;
        break;
        case 3: // Multiplication
           result = first * second;
        break;
        case 4: // Division
           result = division(first, second);
        break;
        case 5: // Modulus
           result = modulus(first, second);
        break;
        case 6: // Power
           result = pow(first , second);
        break;
        default:
        break;
        }
        if(!isnan(result)){
        printf("\nResult of the opeation is : %.2lf", result);
        }
    
    };
    return 0;
}
double division (double a, double b){
    if(b==0){
        fprintf(stderr,"Invalid Argument For Division");
        return NAN;
    }else{
        return a / b;
    }
}
double modulus (int a, int b){
    if(b==0){
        fprintf(stderr,"Invalid Argument For Modulus");
        return NAN;
    }else{
        return a % b;
    }
}

void print__menu(){
    printf("\n\n------------------------------------\n");
    printf("Welcome to the simple calculator\n");
    printf("Choose one of the following options : \n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow enter your choice : "); 
}