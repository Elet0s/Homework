#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

class SoltVector
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize()
    {
        return Size_;
    }

    DataType& operator[](int _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const SoltVector& _Other)
    {
        ReSize(_Other.Size_);

        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void operator=(size_t* _Other)
    {

        for (size_t i = 0; i < Size_; i++)
        {
            this->ArrData_[i] = _Other[i];
        }

        return;
    }

    inline void Solt()
    {
        for (size_t j = 0; j < (Size_ - 1); j++)
        {

            for (size_t i = 0; i < Size_ - 1; i++)
            {
                if (this->ArrData_[i] > this->ArrData_[i + 1])
                {
                    size_t Dump = ArrData_[i + 1];
                    ArrData_[i + 1] = ArrData_[i];
                    ArrData_[i] = Dump;
                }
            }
        }
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = Data;
        }
    }


    inline void Release()
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    void ReSize(unsigned int _Size)
    {
        Release();
        ArrData_ = new DataType[_Size];
        Size_ = _Size;
    }

public:
    SoltVector(unsigned int _Size)
        : ArrData_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    ~SoltVector()
    {
        Release();
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    SoltVector NewArray = SoltVector(10);
    

    NewArray.AllValueSetting(0);

    size_t Value[10] = { 100,4,6,3,2,9,8,9,7,0 };//임의 수 넣어주면 됨

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        std::cout << Value[i] << std::endl;
    }

    std::cout << "--------------------------------------" << std::endl;

    NewArray = Value;

    NewArray.Solt();

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        std::cout << NewArray[i] << std::endl;
    }
}
