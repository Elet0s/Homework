#pragma once
class TextScreen
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	TextScreen();//������
	~TextScreen();//�Ҹ���

	// delete Function
	TextScreen(const TextScreen& _Other) = delete;//���� ������
	TextScreen(TextScreen&& _Other) noexcept = delete;//���۷��� ������
	TextScreen& operator=(const TextScreen& _Other) = delete;//���Կ�����(����)
	TextScreen& operator=(TextScreen&& _Other) noexcept = delete;//Rvalue ���۷��� ������
protected:// ��Ӱ����� ��� ���� ����

private://�ش� Ŭ���������� ���� ����

};