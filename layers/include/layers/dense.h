#ifndef DENSE_H_
#define DENSE_H_

#include <eigen3/Eigen/Dense>
#include <functional>
#include <layers/base.h>
#include <string>

namespace cerebrum {
  class Dense : public Base {
    public:
      Dense(
          const int inputs,
          const int outputs,
          const bool use_bias,
          const std::string& activation,
          const std::string& kernel_initializer,
          const std::string& bias_initializer,
          const std::string& kernel_regularizer,
          const std::string& bias_regularizer,
          const std::string& activity_regularizer) :
        kernel_initializer_(kernel_initializer),
        bias_initializer_(bias_initializer),
        kernel_regularizer_(kernel_regularizer),
        bias_regularizer_(bias_regularizer),
        activity_regularizer_(activity_regularizer),
        Base(inputs, outputs, use_bias) {};

      virtual ~Dense();
      virtual void build();
      virtual Eigen::VectorXf forward(Eigen::VectorXf& input);

    private:
      std::string kernel_initializer_;
      std::string bias_initializer_;
      std::string kernel_regularizer_;
      std::string bias_regularizer_;
      std::string activity_regularizer_;
  };

} // namespace cerebrum

#endif // DENSE_H_