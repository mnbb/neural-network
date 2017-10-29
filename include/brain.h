
typedef std::vector<std::vector<float>> Memory;

class Brain {
  private:
  int SIZE_X, SIZE_Y;
  Memory memory_data;

  public:
  Brain(int sizex, int sizey);
  int setMemoryData();
  int getMemoryData();
  int train();
  int predict();
};

