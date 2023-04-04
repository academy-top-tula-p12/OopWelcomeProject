class DArray
{
	int* items;
	int size;
public:
	DArray() : DArray(0) {}
	DArray(int n) : size{ n }
	{
		items = new int[size];
	}
	int Size() { return size; }

	~DArray()
	{
		delete[] items;
	}
};
