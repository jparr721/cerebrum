#ifndef LAYER_TYPES_H_
#define LAYER_TYPES_H_

namespace layer {
  enum class LayerTypes {
    input,
    conv,
    fc,
    dropout,
    relu,
    pool
  };
} // namespace layer
#endif