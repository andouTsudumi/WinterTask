#include <stdio.h>
#include <math.h>

const long long kasu = 2000000;
const long long kami = 10;

int main()
{
	unsigned long long ans = 2;
	int yakusuu;

	for (int i = 3; i <= kasu; i+=2)
	{
		yakusuu = 0;
		for (int j = 3; j <= sqrt(i); j+=2)
		{
			if (i % j == 0)
			{
				yakusuu = 1;
				break;
			}
		}

		if (yakusuu == 0)
		{
			ans += i;
		}
	}

	printf("%lld", ans);

	return 0;
}