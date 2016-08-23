#ifndef SRC_NODE_EMBED_H_
#define SRC_NODE_EMBED_H_

namespace node {
  enum message_type {
    request = 0,
    event
  };

  NODE_EXTERN void* Dispatch(void*, message_type);
};

#endif
