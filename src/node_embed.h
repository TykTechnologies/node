#ifndef SRC_NODE_EMBED_H_
#define SRC_NODE_EMBED_H_

namespace node {
  enum message_type {
    request = 0,
    event
  };

  struct DispatchWork {
      uv_work_t request;
      char* input;
      int input_length;
      char* output;
      int output_length;
      bool error;
      message_type type;
  };

  void dispatch_work(uv_work_t*);
  void dispatch_after(uv_work_t*);

  const char* dispatch_entrypoint = "abc";
};

#endif
