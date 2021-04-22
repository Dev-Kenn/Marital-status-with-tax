#include <stdio.h>

int main()
{
    char empname [40], mstat;
    int  empno, code; 
    float bpay, allow, otpay, sss, pagibig, tax, gpay, deduc, netpay; 
    
    
        printf ("EMPLOYEE NUMBER: ");
        scanf ("%i",&empno);
	    printf ("EMPLOYEE NAME: ");
        scanf ("%c",&empname);
	    printf ("MARITAL STATUS CODE: ");
        scanf ("%i",&code);
	    printf ("BASIC PAY: ");
        scanf ("%f",&bpay);
	    printf ("ALLOWANCE: ");
        scanf ("%f",&allow);
	    printf ("OVERTIME PAY: ");
        scanf ("%f",&otpay);

        switch (code)
        {
        case 1:
            printf ("MARITAL STATUS: SINGLE");
            break;
        case 2:
            printf ("MARITAL STATUS: MARRIED");
            break;
        case 3:
            printf ("MARITAL STATUS: WIDOW");
            break;    
        default: 
            printf ("INPUT ERROR");
            break;
        }
            sss = (bpay * .03);
            pagibig = (bpay * .02);
            tax = (bpay * .10);
            gpay = bpay + otpay + allow;
            deduc = sss + pagibig + tax;
            netpay = gpay - deduc;
            
            
	       printf ("\nSSS: %.2f", sss);
	       printf ("\nPAG-IBIG: %.2f", pagibig);
	       printf ("\nWITHHOLDING TAX: %.2f", tax);
	       printf ("\nGROSS PAY: %.2f", gpay);
	       printf ("\nTOTAL DEDUCTION: %.2f", deduc);
	       printf ("\nNET PAY: %.2f", netpay);
return 0;
}
