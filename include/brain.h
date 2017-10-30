
typedef std::vector<float*> Memory;

class Brain {
  private:
  // sizes represents the quantity of neurons in rows and columns
  int sizex, sizey;
  // vector dimensions of input and output
  int inc, outc;
  // memory_data stores all values of synapsies
  Memory memory_data;
  // propagate will move neuron values from one row to next
  int propagate();

  public:
  // constructor sets initial attributes and reserves needed memory to store memory data
  Brain();
  // setMemoryData loads previously created memory data
  int setMemoryData();
  // getMemoryData serializes saved data of memory
  int getMemoryData();
  // train will tune up values of memory
  int train();
  // doPropagation will propagate layer by layer all values
  float* doPropagation();
};

