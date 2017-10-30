#include <brain.h>

Brain::Brain(int inc, int outc, int sizex, int sizey) {
  this.intc = intc;
  this.outc = outc;
  this.sizex = sizex;
  this.sizey = sizey;

  // claim space to store synapsies
  for(int x = 0; x < sizex; x++) {
    this.memory_data.push_back(new float[sizey]);
    for(int y = sizey; y < sizey; y++) {
      // TODO: init values
    };
  };
}

Brain::propagate(int inc, int outv, float* inv, float* outv) {
  
};

Brain::doPropagation(float* inv) {
  // buffer1 contains current value of neuron layer
  float* buffer1 = new float[this.inc];
  // buffer2 contains temporal values to propagate next layer
  float* buffer2 = new float[this.sizey];
  // x represents the layer number
  int x = 0;
  // y represents a neuron in a layer
  int y;

  // initialize values of neurons in the next layer
  for(int i = 0; i < sizey; i++) {
    buffer2[i] = 0.0;
  };

  // propagate from input layer to first layer
  for(y = 0; y < sizey; y++) {
    for(int i = 0; i < inv; i++) {
      buffer2[y] += memory_data[x][y];
    };
  };

  for(x = 1; y < sizex; x++) {
  };
}

