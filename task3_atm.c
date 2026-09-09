#include <stdio.h>
#include <conio.h>
int main()
{
	int bal_amt,withd_amt,rem_amt;
	
	printf("| FAST NUCES ATM MACHINE |\n\n");
	printf("Enter Balance amount: \n");
	scanf("%d",&bal_amt);
	
	printf("\nInstructions for cash withdrwawl:\n -> Amount should be a multiple of 500. \n -> Daily limit must not exceed 25000.\n\n");
	
	printf("Enter Withdrawal amount: \n");
	scanf("%d",&withd_amt);
	
	rem_amt = bal_amt-withd_amt;
	
	if(withd_amt%500==0 && withd_amt<=25000)
	{
		printf("\nWithdrawal successful.\nRemaining balance: %d",rem_amt);
	}
	else
	{
		printf("Withdrawal cannot be processed, check the instructions");
	}
	
	return 0;
}
