typedef struct data
{
	int number;
	string name;
	string sex;
}data;
typedef struct listpoint
{
	data *information;
	listpoint *next;
	listpoint *last;
}listpoint;

listpoint *create_normal_list(int n)
/*链表每一个节点都是指向  listpoint结构的指针，所以返回值是listpoint *,n是指创建的链表的节点数目*/
{
	listpoint *head,*normal,*end;
	head = (listpoint*) malloc(sizeof(listpoint));
	head->information=(data*)malloc(sizeof(data));
	/*给新节点分配内存*/
	
}