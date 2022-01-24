#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void scientific_calculator()
{
	int ch,i,a,b;
	float x,y,result;
    printf("\n______________________________________________________________________________________________________________________");
	printf("						SCIENTIFIC CALCULATOR							\n");
 do{
		printf(" 0.exit\n 1. addition\n 2. subtraction\n 3. multiplication\n 4. division\n 5. squareroot\n 6. sin(x)\n");
		printf(" 7. cos(x)\n 8. tan(x)\n 9. cot(x)\n 10. sec(x)\n 11. cosec(x)\n 12. log10(x)\n");
		printf(" 13. pow(x,y)\n 14. pow(x,-1)\n 15. pow(x,(1/y))\n 16. pow(x,(1/3))\n 17. x!\n 18. modular division\n");
		printf(" enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
					break;
			case 1: printf("enter any two numbers\n");
					scanf("%f%f",&x,&y);
					result=x+y;
					printf("result=%f\n",result);
					break;
			case 2: printf("enter any two numbers\n");
					scanf("%f%f",&x,&y);
					result=x-y;
					printf("result=%f\n",result);
					break;
			case 3: printf("enter any two numbers\n");
					scanf("%f%f",&x,&y);
					result=x*y;
					printf("result=%f\n",result);
					break;
			case 4: printf("enter any two numbers\n");
					scanf("%f%f",&x,&y);
					result=x/y;
					printf("result=%f\n",result);
					break;
			case 5: printf("enter any number\n");
					scanf("%f",&x);
					result=sqrt(x);
					printf("result=%f\n",result);
					break;
			case 6: printf("enter any degree\n");
					scanf("%f",&x);
					result=sin(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 7: printf("enter any degree\n");
					scanf("%f",&x);
					result=cos(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 8: printf("enter any degree\n");
					scanf("%f",&x);
					result=tan(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 9: printf("enter any degree\n");
					scanf("%f",&x);
					result=1/tan(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 10:printf("enter any degree\n");
					scanf("%f",&x);
					result=1/cos(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 11:printf("enter any degree\n");
					scanf("%f",&x);
					result=1/sin(x*3.14159/180);
					printf("result=%f\n",result);
					break;
			case 12:printf("enter any number\n");
					scanf("%f",&x);
					result=log10(x);
					printf("result=%2f\n",result);
					break;
			case 13:printf("enter any two numbers\n");
					scanf("%f%f",&x,&y);
					result=pow(x,y);
					printf("result=%f\n",result);
					break;
			case 14:printf("enter any number\n");
					scanf("%f",&x);
					result=pow(x,-1);
					printf("result=%f\n",result);
					break;
			case 15:printf("enter number x\n");
					scanf("%f",&x);
					printf("enter number y\n");
					scanf("%f",&y);
					result=pow(x,(1/y));
					printf("result=%f\n",result);
					break;
			case 16:printf("enter number x\n");
					scanf("%f",&x);
					y=3;
					result=pow(x,(1/y));
					printf("result=%f\n",result);
					break;
			case 17:printf("enter number x\n");
					scanf("%f",&x);
					result=1;
					for(i=1;i<=x;i++)
					{
						result=result*i;
					}
					printf("result=%f\n",result);
					break;
			case 18:printf("enter any two numbers\n");
					scanf("%d%d",&a,&b);
					result=a%b;
					printf("result=%d\n",result);
					break;
			default:printf("invalid choice");
					break;
		}
		printf("\n______________________________________________________________________________________________________________________\n");
	}while(ch);
}

int unit_convertor()
{
	int ch=1;
	printf("\n______________________________________________________________________________________________________________________\n");
	printf("						UNIT CONVERTER							\n");
	printf("\nYou selected unit converter\n");
	while(ch==1)
    {
        printf("select the type of dimension in which u want to perform converion.\n");
        printf(" 0.Exit\n 1.Length\n 2.Area\n 3.Volume\n 4.Weight\n 5.Temperatue\n");
        printf("Enter Your Choice\n");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    length();
                    break;
                case 2:
                    area();
                    break;
                case 3:
                    volume();
                    break;
                case 4:
                    weight();
                    break;
                case 5:
                    temperature();
                    break;
                case 0:
                    break;
                default:
                    printf("enter a valid choice\n");
            }
    }
		printf("\n______________________________________________________________________________________________________________________\n");
}

int volume()
{
	int ch=10;
	double x,y;
	printf("choose the unit in which u want to enter\n");
	printf("1.litres\n2.millilitres\n3.cubic centimetres\n4.cubic metres\n5.cubic feet\n");
	printf("Enter your Choice\n");
	scanf(" %d",&ch);
	printf("enter the value\n");
	scanf("%lf",&x);
	switch(ch)
	{
		case 1:
			printf("Enter the unit in which u want to convert\n");
			printf("1.millilitres\n2.cubic centimetres\n3.cubic metres\n4.cubic feet\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*1000;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*1000;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*0.001;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*0.0353;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 2:
			printf("Enter the unit in which u want to convert\n");
			printf("1.litres\n2.cubic centimetres\n3.cubic metres\n4.cubic feet\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.001;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*1;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*1*pow(10,-6);
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*3.531*pow(10,-5);
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 3:
			printf("Enter the unit in which u want to convert\n");
			printf("1.litres\n2.millilitres\n3.cubic metres\n4.cubic feet\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.001;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*1;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*1*pow(10,-6);
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=3.531*pow(10,-5);
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 4:
			printf("Enter the unit in which u want to convert\n");
			printf("1.litres\n2.millilitres\n3.cubic centimetres\n4.cubic feet\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*1000;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*1000000;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*1000000;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*35.315;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 5:
			printf("Enter the unit in which u want to convert\n");
			printf("1.litres\n2.millilitres\n3.cubic centimetres\n4.cubic metres\n.");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*28.3168;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*28316.8446;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*28316.84;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*0.0283;
					printf("The Answer is %lf",y);
					break;
			}
			break;
	}
	printf("\n______________________________________________________________________________________________________________________\n");
}
  
  


int weight()
{
	int ch=2;
	double x,y;
	printf("choose the unit in which u want to enter\n");
	printf("1.Tons\n2.Pounds\n3.Ounces\n4.Kilograms\n5.Grams\n");
	printf("Enter your Choice\n");
	scanf(" %d",&ch);
	printf("enter the value\n");
	scanf("%lf",&x);
	switch(ch)
	{
		case 1:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Pounds\n2.Ounces\n3.Kilograms\n4.Grams\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*2204.62;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*35273.96;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*1000;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*1000000;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 2:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Tons\n2.Ounces\n3.Kilograms\n4.Grams\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.00045;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*16;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*0.453;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*453.59;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 3:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Tons\n2.Pounds\n3.Kilograms\n4.Grams\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.000028;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*0.0625;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*0.02834;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*28.349;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 4:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Tons\n2.Pounds\n3.Ounces\n4.Grams\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.001;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*2.204;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*35.27;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*1000;
					printf("The Answer is %lf",y);
					break;
			}
			break;
		case 5:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Tons\n2.Pounds\n3.Ounces\n4.Kilograms\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.000001;
					printf("The Answer is %lf",y);
					break;
				case 2:
					y=x*0.0022;
					printf("The Answer is %lf",y);
					break;
				case 3:
					y=x*0.0352;
					printf("The Answer is %lf",y);
					break;
				case 4:
					y=x*0.001;
					printf("The Answer is %lf",y);
					break;
			}
			break;
	}
	printf("\n______________________________________________________________________________________________________________________\n");
}

int temperature()
{
    int ch=10;
	float x,y;
	printf("choose the temperatue in which you want to enter\n ");
	printf("1.celsius\n 2.fahrenheit\n 3.kelvin\n");
	printf("enter your choice:  ");
	scanf("%d",&ch);
	printf("enter the value:  ");
	scanf("%f",&x);
	switch(ch)
	{
        case 1:
            printf("enter the temperature in which you want to convert\n");
            printf("1.fahrenheit\n 2.kelvin\n");
            printf("select your choice:  ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    y=x*1.8+32;
                    printf("the answer is %f",y);
                    break;
                case 2:
                    y=x+273.15;
                    printf("the answer is %f",y);
                    break;
            }
            break;
        case 2:
            printf("enter the temperature in which you want to convert\n");
            printf("1.celsius\n 2.kelvin\n");
            printf("select your choice:   ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    y=(x-32)*5/9;
                    printf("the answer is %f",y);
                    break;
                case 2:
                    y=(x-32)*5/9+273.15;
                    printf("the answer is %f",y);
                    break;
            }
            break;
            case 3:
            printf("enter the temperature in which you want to convert\n");
            printf("1.celsius\n 2.fahrenheit\n");
            printf("select your choice:  ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    y=x-273.15;
                    printf("the answer is %f",y);
                    break;
                case 2:
                    y=(x-273.15)*9/5+32;
                    printf("the answer is %f",y);
                    break;
            }
            break;
	}
	printf("\n______________________________________________________________________________________________________________________\n");
}

int length()
{
	int ch=10;
	double m;
	float x,y;
	printf("choose the unit in which u want to enter\n");
	printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Yards\n8.Miles\n9.Nautical miles\n");
	printf("Enter your Choice\n");
	scanf(" %d",&ch);
	printf("enter the value\n");
	scanf("%f",&x);
	switch(ch)
	{
		case 1:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Centimeters\n2.Meters\n3.Kilometers\n4.Inches\n5.Feet\n6.Yards\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.1;
					printf("The Answer is %f",y);
					break;
				case 2:
					y=x*0.001;
					printf("The Answer is %f",y);
					break;
				case 3:
					y=x*0.000001;
					printf("The Answer is %f",y);
					break;
				case 4:
					y=x*0.03937;
					printf("The Answer is %f",y);
					break;
				case 5:
					y=x*0.0032;
					printf("The Answer is %f",y);
					break;
				case 6:
					y=x*0.0011;
					printf("The Answer is %f",y);
					break;
				case 7:
					y=x*0.0000006;
					printf("The Answer is %f",y);
					break;
				case 8:
					y=x*0.0000005;
					printf("The Answer is %f",y);
					break;
			}
			break;
		case 2:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Millimeters\n2.Meters\n3.Kilometers\n4.Inches\n5.Feet\n6.Yards\n7.Miles\n8.Nautical miles");
			printf("select your choice");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*10;
					printf("The Answer is %f",y);
					break;
				case 2:
					y=x*0.01;
					printf("The Answer is %f",y);
					break;
				case 3:
					y=x*0.00001;
					printf("The Answer is %f",y);
					break;
				case 4:
					y=x*0.3937;
					printf("The Answer is %f",y);
					break;
				case 5:
					y=x*0.032;
					printf("The Answer is %f",y);
					break;
				case 6:
					y=x*0.011;
					printf("The Answer is %f",y);
					break;
				case 7:
					y=x*0.000006;
					printf("The Answer is %f",y);
					break;
				case 8:
					y=x*0.000005;
					printf("The Answer is %f",y);
					break;
			}
			break;
		case 3:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Millimeters\n2.Centimeters\n3.Kilometers\n4.Inches\n5.Feet\n6.Yards\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*1000;
					printf("The Answer is %f",y);
					break;
				case 2:
					y=x*100;
					printf("The Answer is %f",y);
					break;
				case 3:
					y=x*0.001;
					printf("The Answer is %f",y);
					break;
				case 4:
					y=x*39.37;
					printf("The Answer is %f",y);
					break;
				case 5:
					y=x*3.28;
					printf("The Answer is %f",y);
					break;
				case 6:
					y=x*1.093;
					printf("The Answer is %f",y);
					break;
				case 7:
					y=x*0.00062;
					printf("The Answer is %f",y);
					break;
				case 8:
					y=x*0.00053;
					printf("The Answer is %f",y);
					break;
			}
			break;
		case 4:
			printf("Enter the unit in which u want to convert\n");
			printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Inches\n5.Feet\n6.Yards\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*10000000;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*100000;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*1000;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*39370;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*3280;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*1.093;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*0.00062;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*0.00053;
					printf("The Answer is %lf",m);
					break;
			}
			break;
			case 5:
			printf("Enter the unit in which u want to convert\n");
		    printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Feet\n6.Yards\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*25.4;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*2.54;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*0.0254;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*0.000025;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*0.834;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*0.0278;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*0.000015;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*0.000013;
					printf("The Answer is %lf",m);
					break;
			}
			break;
			case 6:
			printf("Enter the unit in which u want to convert\n");
		    printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Yards\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*304.8;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*30.48;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*0.3048;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*0.000304;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*12;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*0.334;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*0.00018;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*0.00016;
					printf("The Answer is %lf",m);
					break;
			}
			break;
			case 7:
			printf("Enter the unit in which u want to convert\n");
		    printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Miles\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*914.4;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*91.44;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*0.914;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*0.0009;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*36;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*3;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*0.00056;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*0.00049;
					printf("The Answer is %lf",m);
					break;
			}
			break;
			case 8:
			printf("Enter the unit in which u want to convert\n");
		    printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Yards\n8.Nautical miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*1610000;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*161000;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*1610;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*1.61;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*63360;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*5280;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*1760;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*0.86;
					printf("The Answer is %lf",m);
					break;
			}
			break;
			case 9:
			printf("Enter the unit in which u want to convert\n");
		    printf("1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Yards\n8.Miles\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					m=x*1850000;
					printf("The Answer is %lf",m);
					break;
				case 2:
					m=x*185000;
					printf("The Answer is %lf",m);
					break;
				case 3:
					m=x*1850;
					printf("The Answer is %lf",m);
					break;
				case 4:
					m=x*1.85;
					printf("The Answer is %lf",m);
					break;
				case 5:
					m=x*72913.3;
					printf("The Answer is %lf",m);
					break;
				case 6:
					m=x*6076.11;
					printf("The Answer is %lf",m);
					break;
				case 7:
					m=x*2025.37;
					printf("The Answer is %lf",m);
					break;
				case 8:
					m=x*1.15;
					printf("The Answer is %lf",m);
					break;
			}
			break;
	}
	printf("\n______________________________________________________________________________________________________________________\n");
}

int area()
{
	int ch=10;
	float x,y;
	printf("choose the unit in which u want to enter \n");
	printf("1.acres\n2.hectares\n3.square centimeters\n4.square feet\n5.square inches\n6.square metres\n");
	printf("enter your choice:  ");
	scanf("%d",&ch);
	printf("enter the value:  ");
	scanf("%f",&x);
	switch(ch)
	{
		case 1:
			printf("enter the unit in which u want to convert\n");
			printf("1.hectares\n2.square centimeters\n3.square feet\n4.square inches\n5.square metres\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.404686;
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*40468564.2;
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*43560;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*6272640;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*4046.86;
					printf("the answer is %f",y);
					break;
			}
			break;
		case 2:
			printf("enter the unit in which u want to convert\n");
			printf("1.acres\n2.square centimeters\n3.square feet\n4.square inches\n5.square metres\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*2.47105;
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*100000000;
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*107639;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*1.5500031;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*10000;
					printf("the answer is %f",y);
					break;
			}
			break;
		case 3:
			printf("enter the unit in which u want to convert\n");
			printf("1.acres\n2.hectares\n3.square feet\n4.square inches\n5.square metres\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*(2.471*pow(10,-8));
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*(1*pow(10,-8));
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*0.00107639;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*0.155;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*0.0001;
					printf("the answer is %f",y);
					break;
			}
			break;
		case 4:
			printf("enter the unit in which u want to convert\n");
			printf("1.acres\n2.hectares\n3.square centimeters\n4.square inches\n5.square metres\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*(2.296*pow(10,-5));
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*(9.29*pow(10,-6));
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*929.03;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*144;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*0.092903;
					printf("the answer is %f",y);
					break;
			}
			break;
		case 5:
			printf("enter the unit in which u want to convert\n");
			printf("1.acres\n2.hectares\n3.square centimetres\n4.square feet\n5.square metres\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*(1.594*pow(10,-7));
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*(6.452*pow(10,-8));
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*6.452;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*0.00694444;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*0.00064516;
					printf("the answer is %f",y);
					break;
			}
			break;
		case 6:
			printf("enter the unit in which u want to convert\n");
			printf("1.acres\n2.hectares\n3.square centimetres\n4.square feet\n5.square inches\n");
			printf("select your choice\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					y=x*0.000247105;
					printf("the answer is %f",y);
					break;
				case 2:
					y=x*0.0001;
					printf("the answer is %f",y);
					break;
				case 3:
					y=x*10000;
					printf("the answer is %f",y);
					break;
				case 4:
					y=x*10.7639;
					printf("the answer is %f",y);
					break;
				case 5:
					y=x*1550;
					printf("the answer is %f",y);
					break;
			}
			break;
	}
	printf("\n______________________________________________________________________________________________________________________\n");
}
void date_to_day_convertor()
{
	int d,m,y,r,c,b,l,day,a,t;
	printf("\n______________________________________________________________________________________________________________________\n");
	printf("					DATE TO DAY CONVERTOR					\n");
	printf("You choose date to day converter\n");
	printf("enter date DD\n");
	scanf("%d",&d);
	printf("enter month MM\n");
	scanf("%d",&m);
	printf("enter year YYYY\n");
	scanf("%d",&y);
	if(m==1)
		a=1;
	else if(m==2)
		a=4;
	else if(m==3)
		a=4;
	else if(m==4)
		a=0;
	else if(m==5)
		a=2;
	else if(m==6)
		a=5;
	else if(m==7)
		a=0;
	else if(m==8)
		a=3;
	else if(m==9)
		a=6;
	else if(m==10)
		a=1;
	else if(m==11)
		a=4;
	else if(m==12)
		a=6;
	else
		;
	r=y%100;
	c=y-r;
	c=c/100;
	c=c%4;
	if(c==0)
		b=6;
	else if(c==1)
		b=4;
	else if(c==2)
		b=2;
	else if(c==3)
		b=0;
	else
		;
	l=r/4;
	day=d+a+b+r+l;
	day=day%7;
	if(day==0)
		printf("The day is SATURDAY");
	else if(day==1)
		printf("the day is SUNDAY");
	else if(day==2)
		printf("the day is MONDAY");
	else if(day==3)
		printf("the day is TUESDAY");
	else if(day==4)
		printf("the day is WEDNESDAY");
	else if(day==5)
		printf("the day is THURSDAY");
	else if(day==6)
		printf("the day is FRIDAY");
    printf("\n______________________________________________________________________________________________________________________\n");
}
int main()
{
	int choice=10;
	printf("************************************************************************************************************************");
	printf("					MULTIPURPOSE CALCULATOR							\n");
	do
	{
		printf("enter 0 to exit");
		printf("\n1.scientific_calculator \n2.unit_convertor \n3.date_to_day_convertor \n");
		printf("enter your choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				break;
			case 1:
				scientific_calculator();
				break;
			case 2:
				unit_convertor();
				break;
			case 3:
				date_to_day_convertor();
				break;
		}
	}while(choice!=0);
	printf("THNAK YOU\n");
	printf("THE END\n");
	printf("************************************************************************************************************************\n");
}
