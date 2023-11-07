//MlpNetwork.h

#ifndef MLPNETWORK_H
#define MLPNETWORK_H

#include "Dense.h"

#define MLP_SIZE 4

#define TEN 10
/**
 * @struct digit
 * @brief Identified (by Mlp network) digit with
 *        the associated probability.
 * @var value - Identified digit value
 * @var probability - identification probability
 */
typedef struct digit
{
    unsigned int value;
    float probability;
} digit;

const matrix_dims img_dims = {28, 28};
const matrix_dims weights_dims[] = {{128, 784},
                                    {64, 128},
                                    {20, 64},
                                    {10, 20}};
const matrix_dims bias_dims[]    = {{128, 1},
                                    {64, 1},
                                    {20, 1},
                                    {10, 1}};

class MlpNetwork{
 private:
  const Matrix weights[MLP_SIZE];
  const Matrix biases[MLP_SIZE];
  Dense lay1;
  Dense lay2;
  Dense lay3;
  Dense lay4;

 public:
  MlpNetwork( const Matrix weights[],const Matrix biases[]);
  digit operator()(const Matrix &mat)const;

};

#endif // MLPNETWORK_H
