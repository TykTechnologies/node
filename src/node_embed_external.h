#ifndef SRC_NODE_EMBED_EXTERNAL_H_
#define SRC_NODE_EMBED_EXTERNAL_H_

namespace node {
  enum message_type {
    request = 0,
    event
  };

  char* Dispatch(char*, int, message_type);
  int Start(int argc, char *argv[]);

  const char* fake_program_name = "./program";
};

#endif
