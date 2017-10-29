#include <vector>

// dendrite contains value of a connection between two neurons
struct dendrite {
  int axon; // predecesor id
  float vaue; // value :-)
}
// neuron is a unit that contains information abaut all its connctions
struct neuron {
  int id; // neuron id
  float value; // value after a layer refresh
  std::vector<dendrite> dendrites; // all connections with other neurons
}

// Brain manages all its neurons
class Brain {
  private:
  // memory contains all the neurons of the brain
  std::vector<std::vector<neuron>> memory;
  int LAYER_Q;
  int INPUT_Q;
  int OUTPUT_Q;
  int regenerate_structure();

  public:
  Brain();
  int train();
  int think();
  int load_memory();
  int get_memory();
};

