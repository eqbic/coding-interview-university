#include <memory>

namespace cu
{
    class Vector
    {
    private:
        std::unique_ptr<int[]> m_array;
        int m_size;
        int m_capacity;

    public:
        Vector();
        Vector(int capacity);
        int size();
        int capacity();
        bool is_empty();
        void push(int element);
    };
}