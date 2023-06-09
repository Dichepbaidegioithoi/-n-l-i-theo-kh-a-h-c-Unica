//Thuat toan tim mat khau dung voi Break;
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Nhap mat khau vao nao nguoi ae:\n");
	int passWord;
	for(int i=0;i<10;i++) //toi da cho nhap mat khau la 10 lan
	{
		scanf("%d", &passWord);
		if(passWord == 4112003)
		{
			printf("Iuu anhh\n");
			printf("GoodLuckyyy <3\n");
	        printf("Muon trap TQH vaii oooo :3");
			break;
		}
		printf("Mat khau sai roi !\n");
		printf("Nhap lai di nao.... Fighting !!");
		if(i==9){
		printf("Haizzz, chac chan anh khum pai anh ay roiii ! Anh ay tuy hoi dan nhung cung khong dan den noi sai pass z");
}
		printf("\n");
	}
	return 0;
}
