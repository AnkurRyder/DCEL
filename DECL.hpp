
class vertex {
public:
  /* data */
  int key;
  float x, y;
};

class half_edge {
public:
  int origin_v, end_v;
  class vertex *origin, *end;
  class half_edge *twin;
};

class face {
public:
  int key = -1;
};

class vertex_table {
public:
  class vertex *v;
  class half_edge *e;
};

class face_table {
public:
  class face *face = NULL;
  vector<half_edge *> inner_components;
  class half_edge *outer_component = NULL;
  float area = -1;
};

class half_edge_table {
public:
  class half_edge *half_edge, *next, *prev;
  class face *incident_face = NULL;
};

#define INF 10000

struct Point {
  float x;
  float y;
};
