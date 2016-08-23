#ifndef SRC_NODE_EMBED_H_
#define SRC_NODE_EMBED_H_

#include "node_embed_common.h"

extern "C" {
  struct DispatchWorkOutput Dispatch(char* input, int input_length, int type) {
    return node::Dispatch(input, input_length, type);
  }
  int StartNode(int argc, char *argv[]) {
    return node::Start(argc, argv);
  }
}

#endif
