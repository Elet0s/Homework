#pragma once
class ConsoleMath
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	ConsoleMath();//������
	~ConsoleMath();//�Ҹ���

	// delete Function
	ConsoleMath(const ConsoleMath& _Other) = delete;//���� ������
	ConsoleMath(ConsoleMath&& _Other) noexcept = delete;//���۷��� ������
	ConsoleMath& operator=(const ConsoleMath& _Other) = delete;//���Կ�����(����)
	ConsoleMath& operator=(ConsoleMath&& _Other) noexcept = delete;//Rvalue ���۷��� ������
protected:// ��Ӱ����� ��� ���� ����

private://�ش� Ŭ���������� ���� ����

};