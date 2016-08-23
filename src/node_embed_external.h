#ifndef SRC_NODE_EMBED_EXTERNAL_H_
#define SRC_NODE_EMBED_EXTERNAL_H_

#include "node_embed_common.h"

char* fake_program_name = "./tyk";
char* module_path = "./coprocess/nodejs/tyk/index.js";

struct DispatchWorkOutput Dispatch(char*, int, int);
int StartNode(int argc, char *argv[]);

#endif
