double my_pow(double, unsigned int);

int main() 
{
	return 0;
}

double my_pow(double x, unsigned int p)
{
	double result=x;
	for (unsigned int i=0; i<p; i++)
		result*=x;
	return result;
}
