template<typename T>
T Add(T left, T right)
{
	cout << typeid(T).name() << endl;
	return left + right;
}
int Add(int left, int right)
{
	return left + right;
}
int main()
{
	//��ʽʵ����
	//��Add����ģ�����ʵ����
	cout << Add(1, 2) << endl;//int,int-->T-->int-->ר�Ŵ���int��Add����
	//�ڱ���׶Σ���������Ҫ��ʵ�ε����ͽ������ݣ���ȷ��ģ�����
	//�����T��ʵ�����ͣ�������ɴ���������͵���Ч����
	cout << Add(1.0, 2.0) << endl;
	//Add(1,(int)2.0);//int,double-->int
	//��ʽʵ����-->ֱ�ӽ�T������ʵ����Ϊ�������ͣ�����Ҫ��ʵ�ε����ͽ�������
	//�ڴ���ִ��ʱ�����ܻ��ʵ������ʽ������ת��
	Add(1, 2);
	Add<int>(2, 2);
	Add<>(1, 2);
	Add<double>(1, 2.0);
	return 0;
}