
#include "Activation.h"

#ifndef DENSE_H
#define DENSE_H


class Dense{
 private:
  Matrix weights;
  Matrix bias;
  ActivationType act;

 public:
  Dense(const Matrix &weights, const Matrix &bias, const ActivationType &act);
  const Matrix &get_weights()const;
  const Matrix &get_bias()const;
  Activation get_activation() const;
  Matrix operator()(const Matrix &mat) const;

};

#endif //DENSE_H
