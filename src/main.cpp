#include <iostream>
#include <vector>

using std::cout; using std::endl;

template <typename T> 
class square_grid {
    public:
        square_grid(int n, T init) : sz(n) {
            if (n < 1)
                throw std::runtime_error("Size must be >= 1");
            std::vector<T> row;
            
            row.resize(n, init);
            data.resize(n, row);
        }

        T get(int row, int col) const {
            return data[row][col];
        }

        void set(int row, int col, T val) {
            data[row][col] = val;
        }

        int size() const {
            return sz;
        }

    private:
        int sz;
        std::vector< std::vector<T> > data;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const square_grid<T> & g) {
    for (int i = 0; i < g.size(); i++) {
        for (int j = 0; j < g.size(); j++) {
            os << g.get(i, j) << " ";
        }
        os << std::endl;
    }
    return os;
}

int main() {
    square_grid<int> g(3, 0);
    cout << g << endl;
}
