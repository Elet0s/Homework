#pragma once
class Player
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	Player();//������
	~Player();//�Ҹ���

	// delete Function
	Player(const Player& _Other) = delete;//���� ������
	Player(Player&& _Other) noexcept = delete;//���۷��� ������
	Player& operator=(const Player& _Other) = delete;//���Կ�����(����)
	Player& operator=(Player&& _Other) noexcept = delete;//Rvalue ���۷��� ������
protected:// ��Ӱ����� ��� ���� ����

private://�ش� Ŭ���������� ���� ����

};