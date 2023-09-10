#include<iostream>
struct paging
{
	int frameNumber,valid;
};
int main()
{
	int noOfPages = 0, baseAddress = 0, noOfFrames = 0, sizeOfMM = 0, sizeOfLM = 0, FrameSize = 0, physicalAddress = 0,disp = 0, pageNo = 0, logicalAddress = 0;
	paging pageTable[10], frameTable[10];
	std::cout << "Program for Paging techniques - Fixed Size partition";
	std::cout << "\n\nEnter the base address of physical memory:";
	std::cin >> baseAddress;
	std::cout << "\nEnter the size of Main Memory:";
	std::cin >> sizeOfMM;
	std::cout << "\nEnter the size of Main Memory Frame:";
	std::cin >> FrameSize;
	noOfFrames = sizeOfMM / FrameSize;
	std::cout << "\nTotal no. of frames in Main Memory is " << noOfFrames;
	std::cout <<"\n Enter the size of Logical Memory:";
	std::cin >> sizeOfLM;
	noOfPages = sizeOfLM / FrameSize;
	std::cout << "\n Total no. of pages in Logical Memory is " << noOfPages;
	std::cout << "\n Enter the frame values in Page Table\n";
	for(int i = 0; i < noOfPages; i++)
	{
		while(1)
		{
			std::cout << "\n Page " << i << " is stored in frame number:";
			std::cin >> pageTable[i].frameNumber;
			pageTable[pageTable[i].frameNumber].valid = 1;
			frameTable[pageTable[i].frameNumber].valid = i;
			break;
		}
	}
	std::cout << "\n \t PAGE TABLE";
	std::cout << "\nIndex|\t\tFrame Number|\tValid_Bit|\n\n";
	for(int i = 0; i < noOfPages; i++)
	{
		std::cout << i << "\t\t" << pageTable[i].frameNumber << "\t\t"<<pageTable[pageTable[i].frameNumber].valid <<"\t\n";
	}
	
for(int i=0;i<noOfPages; i++)
	{
		std::cout << "Enter the logical addresss for mapping process:";
		std::cin >> logicalAddress;
		pageNo = logicalAddress / FrameSize;
		disp = logicalAddress % FrameSize;
		physicalAddress =  baseAddress + ((pageTable[pageNo].frameNumber - 1) * FrameSize) + disp;
		std::cout << "Physical Address value is " << physicalAddress << "\n";
	}
}

