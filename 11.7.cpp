//��д��������һ��������n��1<n<=10),������n������������n�����������Ų���� 
#include<stdio.h>
int main()
{
	int n,i=0,x;
	int arr[10]={0};
	printf("������:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("������");
		scanf("%d",&x);
		arr[i]=x;
		i++;
	}
	int* p1=arr;
	int* p2=arr+(n-1);
	while(p1<p2)
	{
		int tmp=*p1;
		*p1=*p2;
		*p2=tmp;
		p1++;
		p2--;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
//�Ӽ���������10������ֱ�ӷ����� 
/*int main()
{
	int arr[10],i,j,k;
	printf("����10����:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<9;i++)
	{
		k=i;
	for(j=1+i;j<10;j++)
	if(arr[i]>arr[j])
	k=j;
	if(i!=k)
	{
		int tmp =arr[i];
		arr[i]=arr[k];
		arr[k]=tmp;
	}    
    }
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
    
 } */
 //��ð�ݷ�����������ݽ�����������
/*#define N 6 
 int main()
 {
 	int i,j,arr[N];
 	printf("������%d������\n",N);
 	for(i=0;i<N;i++)
 	scanf("%d",&arr[i]);
 	for(i=0;i<N-1;i++)
 	for(j=0;j<N-1-i;j++)
 	if(arr[j]>arr[j+1])
 	{
 		int tmp=arr[j];arr[j]=arr[j+1];arr[j+1]=tmp;
	 }
	printf("�����Ժ�:\n");
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);
	return 0;
  }*/
//��������5��������������������a�У�Ҫ����ʵ�ִӼ�������һ�����������n��������������a��,��Ȼ������
/*int main()
{
	int a[6]={2,3,4,6,7},x,i;
	printf("����������:");
	scanf("%d",&x);
	for(i=4;i>=0;i--)
	if(x>=a[i])
	{a[i+1]=x;
	break;
	}
	else
	a[i+1]=a[i];
	if(i<0)
	a[0]=x;
	printf("�����Ժ�:");
	for(i=0;i<6;i++)
	printf("%d ",a[i]);
	return 0;
	}  */ 
//���ַ�����
/*int main()
{
	int a,b,c,find,i;
	int arr[12]={3,5,7,12,35,45,46,67,70,82,88,90};
	scanf("%d",&find);
	a=0;b=11;
	do
	{
    c=(a+b)/2;
	if(find==arr[c])
	{
	printf("�±�Ϊ%d",c);
	break;}
	else if(find>arr[c])
	a=c+1;
	else
	b=c-1;
 } while(a<=b);

return 0;
}*/


























