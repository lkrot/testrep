double my_pow(double, int);

int main() 
{
	return 0;
}

double my_pow(double x, int p)
{
	double result=1.0;
	if (p<0) {
		for (int i=0; i>p; i--)
			result/=x;
	} else {
		for (int i=0; i<=p; i++)
			result*=x;
	}
	return result;
}
