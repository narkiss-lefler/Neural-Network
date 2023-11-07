
#include <iostream>

#ifndef MATRIX_H
#define MATRIX_H

#define ONE_TENTH 0.1
/**
 * @struct MatrixDims
 * @brief Matrix dimensions container. Used in MlpNetwork.h and in main.cpp.
 */
typedef struct matrix_dims
{
    int rows, cols;
} matrix_dims;

class Matrix {
 private:
  int rows, cols;
  float *list;
  int get_arr_index(int row, int column) const;


 public:
  Matrix(int rows, int cols);
  Matrix(Matrix const &m);
  Matrix();
  ~Matrix();

  Matrix& operator=(const Matrix &mat);
  Matrix operator+(const Matrix &mat) const;
  Matrix operator*(const Matrix &mat) const;
  Matrix operator*(float c) const;
  Matrix &operator+=(const Matrix &mat);


  float &operator()(int i,int j);
  const float &operator()(int i,int j)const;

  float &operator[](int i);
  const float &operator[](int i)const;

  friend std::ostream &operator<<(std::ostream &os,const Matrix &mat);
  friend std::istream &operator>>(std::istream &is,const Matrix &mat);
  friend Matrix operator*( float c ,const Matrix &mat);
  void set_value(int row, int column, float value);
  int get_rows() const;
  int get_cols() const;
  Matrix& transpose();
  void plain_print() const;
  Matrix& vectorize();
  float norm()const;
  Matrix dot(const Matrix &m)const;

};


#endif
