#include<bits/stdc++.h>
int main()
{
	int t=1, a[100010], b[100010], n, i, j;
	//scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		int k = 0, mid, l, r;
		b[0] = a[0];
		for(i=1;i<n;i++)
		{
			if(a[i] >= b[k])
				b[++k] = a[i];
			else {
				l = 0;
				r = k;
				while(l<=r)
				{
					mid = (r+l)/2;
					if(a[i] >= b[mid])
						l = mid+1;
					else    r = mid-1;
				}
				b[l] = a[i];
			}
		}
		printf("%d\n", k+1);
	}
	return 0;
}

