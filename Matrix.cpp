class Matrix
{
    private:
        int width, height;
        float * storage;

    public:

    Matrix(int inputWidth, int inputHeight)
    {
        width = inputWidth;
        height = inputHeight;
    }

    int getWidth()
    {
        return width;
    }

    int getHeight()
    {
        return height;
    }

    bool isSquare()
    {
        return (width == height);
    }

    double determinant()
    {
        double det = 0;
        return det;
    }
};