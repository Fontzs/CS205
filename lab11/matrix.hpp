#include <iostream>

class Matrix
{
public:
    int rows;
    int cols;
    float *elements;
    int *ref_count;

    // basic constructor
    Matrix(int m, int n, float fill)
    {
        this->rows = m;
        this->cols = n;
        this->elements = new float[m * n];
        this->ref_count = new int(1);
        for (int i = 0; i < m * n; i++)
        {
            this->elements[i] = fill;
        }
    }

    // copy constructor: soft copy
    Matrix(const Matrix &m)
    {
        this->rows = m.rows;
        this->cols = m.cols;
        this->elements = m.elements;
        this->ref_count = m.ref_count;
        *(this->ref_count) += 1;
    }

    ~Matrix()
    {
        *(this->ref_count) -= 1;
        if (*(this->ref_count) == 0 && this->elements != nullptr)
        {
            delete[] this->elements;
            delete this->ref_count;
        }

        std::cout << "the destructor is executed." << std::endl;
    }

    Matrix &operator=(const Matrix &m)
    {
        this->rows = m.rows;
        this->cols = m.cols;
        *(this->ref_count) -= 1;
        if (*(this->ref_count) == 0 && this->elements != nullptr)
        {
            delete this->ref_count;
            delete[] this->elements;
        }

        this->elements = m.elements;
        this->ref_count = m.ref_count;
        *(this->ref_count) += 1;

        return *this;
    }

    Matrix operator+(Matrix &m)
    {
        if (this->cols != m.cols || this->rows != m.rows)
        {
            std::cout << "Fuck u" << std::endl;
            exit(EXIT_FAILURE);
        }
        Matrix res(this->rows, this->cols, 0);

        for (int i = 0; i < res.cols * res.rows; i++)
        {
            res.elements[i] = this->elements[i] + m.elements[i];
        }
        return res;
    }

    void show()
    {
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->cols; j++)
            {
            std:
                std::cout << this->elements[i * this->cols + j] << " ";
            }
            std::cout << std::endl;
        }
    }
};