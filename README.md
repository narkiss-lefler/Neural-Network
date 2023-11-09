# Neural-Network
In this project we will write program to recognize handwritten digits. Our program will receive as input an image of a digit between 0 and 9 and return as output the digit that was detected. We will do this by building a neural network model. The network we will run will reach an accuracy of about 96 percent in digit recognition.

The implementation of the program will be based on the following principles:
- A network built of layers.
- The input of each layer is a vector, and the output is another vector.
- The output of each layer is the input of the next layer.
- The network input is a vector representing the object that the network will process. In our network, it represents an image of a digit.
- The output of the network is a vector representing the conclusion of the network. In our network, it represents the digit that the network recognized.
                                      
Each layer in the network receives an input vector x ∈ R^m and returns an output vector y ∈ R^n using                              
the following mathematical operation: y = f (W·x + b).  

When we define:
- W ∈ M(n×m)(R), A matrix whose members are called the **weights** of the layer.                                                                              
- b ∈ R^n **Bias** vector of the layer.                                              
- f : R^n → R^n The **activation function** of the layer.
                                                                                                                             
That is, given a vector input x ∈ R^m, the vector y = f(W·x+b)∈R^n, will be the output of the layer.                                     

The activation functions: 
-
Function f : R^n → R^n which returns the final result of a layer in the neural network.                               
ReLU function -                                
<img width="394" alt="Screen Shot 2023-11-09 at 14 03 37" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/1dd3d716-00f9-4a1e-9d38-c896cabcf620">         
When the function operates on a vector x ∈ R^n it performs this operation on each coordinate separately.                                   
Softmax function -                                    
<img width="522" alt="Screen Shot 2023-11-09 at 14 14 47" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/7974dd68-04a3-4bfc-9a4c-55c6ad049f13">

Xk - The k coordinate of x ∈ R^n                    
e^t - The exponential function exp(t).                                                       
The function accepts a vector x ∈ R^n and converts it to a distribution vector (a vector whose members are non-negative numbers whose sum is 1) in a way that corresponds to the final output of our network.

The network:
-
The network consists of 4 layers                              
<img width="674" alt="Screen Shot 2023-11-09 at 14 44 59" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/b0c2bad4-eb0e-4429-a58a-e804f4e41f31">  

In order to create the network, the following sequence of operations is performed    
<img width="289" alt="Screen Shot 2023-11-09 at 14 52 49" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/e96bb2d4-e457-4445-bdd4-bcd65b285cf7">        

x - The input vector to the network                               
r(i) - The output of the i-th layer, which is also the input to the i+1th layer                  
r4 - The output of the fourth layer, which is the output vector of the networ

The input vector:  
-
- Each image is encoded as a 28 × 28 matrix A of grayscale pixels,                         
  and each number in the matrix is ​​a value between 0 and 1, A ∈ M (28×28) ([0,1]).                          
- The input vector that will be sent to the network will be a vector (matrix with one column) with 28 · 28  = 748 rows. 

The output vector:
-
- The output vector from the last layer is a distribution vector
   (a vector whose members are non-negative numbers whose sum is 1) of length 10
- Each index in the vector represents a digit between 0 and 9
- The value of the index represents the chance that this is the digit in the image, according to the network
- The answer that the network will give is the index with the maximum value,
  i.e. the most probable digit, and the probability of that digit
                                      
For example:

<img width="651" alt="Screen Shot 2023-11-09 at 15 25 27" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/b5f8256e-fce1-4b22-ba37-8732bcf59697">

Given this output vector, the network's answer will be that the number in the image is 7 with 90% probability.

Running the program:
-
The program will receive in the command line paths to the weights and offsets files as binary files. We will run the program with the weights and offsets like this:            
**$ ./mlpnetwork w1 w2 w3 w4 b1 b2 b3 b4**
- w(i) - Path to the weights file of the i-th layer
- b(i) - Path to the bias file of the ith layer
When the program is running, it waits for input from the user. The input will be a path to an image file containing a digit.
The program:
1. Open the file and load the image into the matrix
2. Insert the matrix into the grid as input
3. When a result was received, the program will print the image, the digit that the network recognized and with what probability.
   For example:
                                 
   <img width="343" alt="Screen Shot 2023-11-09 at 15 50 36" src="https://github.com/narkiss-lefler/Neural-Network/assets/149950061/512beef6-ee21-4580-a75e-eb9865824f18">
5. The program will wait for a new input         
When we enter the software q - the software will come out with code 0.
   









