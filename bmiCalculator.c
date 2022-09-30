/* <Warisa Khan G01257446>
CS 262, Lab Section <208>
Lab 2
*/

#include <stdio.h>
#include <math.h>

/*creating constant variables with values
 */
#define constant1 0.007184
#define constant2 0.425
#define constant3 0.725
#define SIZE 30

int main(){
	/*create the variables and array
	 */
	char inBuff[SIZE];
	float weight, height;
	double BSA;

	/* getting inputs from user
	 */

	printf("Please enter your weight(kg): ");
	fgets(inBuff,SIZE, stdin);
	sscanf(inBuff, "%f", &weight);

	printf("Please enter your height(cm): ");
	fgets(inBuff,SIZE,stdin);
	sscanf(inBuff, "%f", &height);

	/*calculating BSA
	 */
	BSA = constant1 * (pow(weight,constant2)) * (pow(height,constant3));
	
	/* print statements
	 */
	printf("The height is: %0.1f cms\n",height);
	printf("The weight is: %0.1f kgs\n",weight);
	printf("The BSA is: %0.4f meter square\n", BSA);

	return 0;
}
