/**
First Come First Served Algorithm
Author: Simone Faa
*/
#include <iostream>
int main()
{
	int processCount;
	std::cout<<"Insert the number of processes: "<<std::endl;
	std::cin>>processCount;
	int burstTime[processCount];
	int waitingTime[processCount];
	int tournroundTime[processCount];
	for(int i=0;i<processCount;i++)
	{
		std::cout<<"Insert the Burst time of the P["<<(i+1)<<"]: "<<std::endl;
	    std::cin>>burstTime[i];
	}
	waitingTime[0]=0;
	for(int i=1;i<processCount;i++)
	{
		waitingTime[i]=burstTime[i-1]+waitingTime[i+1];
	}
	for(int i=1;i<processCount;i++)
	{
		tournroundTime[i]=burstTime[i]+waitingTime[i];
	}
	for(int i=1;i<processCount;i++)
	{
		std::cout<<"The waiting Time of "
	}
	system("pause");
}
