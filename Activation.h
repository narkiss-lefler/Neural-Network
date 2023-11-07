
#include "Matrix.h"

#ifndef ACTIVATION_H
#define ACTIVATION_H

/**
 * @enum ActivationType
 * @brief Indicator of activation function.
 */
enum ActivationType
{
    RELU,
    SOFTMAX
};

class Activation{
 private:
  ActivationType act;
  Matrix rel(const Matrix &mat)const;
  Matrix soft(const Matrix &mat)const;



 public:
  Activation(const ActivationType &act);
  ActivationType get_activation_type() const;
  Matrix operator()(const Matrix &mat)const;

};

#endif //ACTIVATION_H
