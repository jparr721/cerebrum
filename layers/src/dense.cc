#include <memory>
#include <iostream>

#include <activations/activations.h>
#include <layers/dense.h>
#include <initializers/initializers.h>

namespace cerebrum {
  void Dense::build() {
    if (kernel_initializer_ != "") {
      auto k_initializer = std::make_shared<Initializers<WeightsXf>>(kernel_initializer_, weights);
    }

    if (bias_ != "") {
      auto b_initializers = std::make_shared<Initializers<BiasXf>>(bias_initializer_, biases);
    }
  }

  Eigen::VectorXf Dense::forward(Eigen::VectorXf& input) {
    Eigen::VectorXf output = (input * weights) + biases;

    auto activation = std::make_shared<Activations>(activation, output);

    return output;
  }
} // namespace cerebrum
