#include  <iostream>
using namespace std;
#define MAXSIZE 100
class SeqList {
public:
	int length;
	int data[MAXSIZE];    //ElemType data[MAXSIZE];  

public:
	//初始化顺序表  
	void initList(SeqList& list)
	{
		list.length = 0;
	}

	//尾插法
	void appendElem(SeqList& list ,int element)    //(SeqList& list , ElemType element)
	{
		//判断范围合法性
		if (list.length >= MAXSIZE) { return; }
		//尾部插入
		list.data[list.length] = element;   
		//长度+1
		list.length++;  
	}

	//遍历顺序表
	void printList(SeqList& list) 
	{
		//遍历
		for (int i = 0; i < list.length; i++) 
		{	
			//打印数据
			cout << list.data[i] << endl;
		}

	}

	//插入元素
	void insertElem(SeqList& list, int pos, int num) // (SeqList& list , int pos , ElemType element )
	{
		//判断范围合法性
		if (pos <= list.length) 
		{	
			for (int i = list.length - 1; i >= pos - 1; i--) 
			{
				list.data[i + 1] = list.data[i];
			}
			//赋值
			list.data[pos - 1] = num;

		}
		//长度+1
		list.length++;                  //插入最好时间复杂度0(1),最坏复杂度0(n)
	}

	//删除元素
	int deleteElem(SeqList& list, int pos , int num)   //  ElemType deleteNum(SeqList& list, int pos, ElemType num)
	{	
		//判断顺序表是否为空
		if (list.length == 0)
		{
			cout << "顺序表为空" << endl;
			return -1;
		}
		//判断范围合法性
		if (pos >= 0 && pos <= length) 
		{	
			int num = list.data[pos - 1];       //ElemType num = list.data[pos-1];
			for (int i = pos; i < list.length; i++) 
			{
				list.data[i - 1] = list.data[i];
			}
			//长度减小1
			list.length--;  
			//返回值
			return num;
		}
	}

	//查找元素在顺序表中的位置
	int findElem(SeqList& list, int num)  // ElemType findElem(SeqList& list, ElemType num ) 
	{
		//遍历
		for (int i = 0; i < list.length; i++) 
		{
			if (list.data[i] == num) 
			{	
				//返回位置索引
				return i + 1;
			}
		}
	}




};



