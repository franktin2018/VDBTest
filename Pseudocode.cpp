
//单例模式
#include <iostream>
class Pool
{
public:

    static Pool* GetInstance();
private:
    static Pool* m_Instance;
};

template<class T>
struct vector3
{
    T x;
    T y;
    T z;

    std::ostream &operator<<(std::ostream& a,const vector3<T>& b)
    {
        std::cout<<"vec:"<<b.x<<" "<<b.y<<" "<<b.z<<" "<<std::endl;
    }
};


typedef vector3<int> vec3i;
typedef vector3<float> vec3f;
typedef vector3<double> vec3d;


class Tree
{

};

class Node
{

};



template<class T>
class Sparse
{
public:
    T GetValue(int i,int j, int k);
    void SetValue(int i,int j,int k);
    vector3<T> GetGradient(int i,int j ,int k);

    T SampleValue(vec3f pos)
    {

    }
    vector3<T> SampleGradient(vec3f pos);

};

typedef Sparse<int> SparseGridI;
typedef Sparse<float> SparseGridF;
typedef Sparse<double> SparseGridD;

int Main()
{
    vec3f pos;
    SparseGridF gridA;
    float value = gridA.SampleValue(pos);
    std::cout<<"value:"<<value<<std::endl;
    return 0;
}