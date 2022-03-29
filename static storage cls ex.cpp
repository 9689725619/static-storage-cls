#include<stdio.h>
void fun();
int main(){
	fun(); fun(); fun();
	return 0;
	
}
void fun(){
	static int x=2,y=5;
	int z=3;
	printf("x=%d & y=%d & z=%d",x,y,z);
	x++;
	y++;
}
