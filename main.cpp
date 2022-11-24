double my_pow(double, unsigned int);
double binary_powe(double, unsigned int);
double fast_frac_pow1(double, double);
double fast_frac_pow2(double, double);

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

double binary_pow(double x, unsigned int p)
{
	double result=1.0;
	while (p!=0) {
		if ((p & 1) != 0)
			result*=x;
		x*=x;
		p>>=1;
	}
	return result;
}

double fast_frac_pow1(double x, double p)
{
	union {
		double d;
		long long i;
	} u = { x };
	u.i = (long long)(4606853616395542500L + p * (u.i - 4606853616395542500L));
	return u.d;
}

double fast_frac_pow2(double x, double p)
{
	union {
		double d;
		int i[2];
	} u = { x };
	u.i[1] = (int)(p * (u.i[1] - 1072632447) + 1072632447);
	u.i[0] = 0;
	return u.d;
}

