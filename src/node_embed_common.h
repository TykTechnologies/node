#ifndef SRC_NODE_EMBED_COMMON_H_
#define SRC_NODE_EMBED_COMMON_H_

/* Common definitions for the NodeJS Coprocess driver */

enum message_type {
  request = 0,
  event
};

struct DispatchWorkOutput {
  char* output;
  int output_length;
};

#ifdef __cplusplus
namespace node {

  struct DispatchWork {
      uv_work_t request;
      char* input;
      int input_length;
      char* output;
      int output_length;
      bool error;
      bool done;
      message_type type;
  };

  DispatchWorkOutput Dispatch(char* input, int input_length, int type);

  void dispatch_work(uv_work_t*);
  void dispatch_after(uv_work_t*);

  const char* dispatch_entrypoint = "abc";
};
#endif

#endif
