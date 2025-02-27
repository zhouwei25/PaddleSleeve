// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
extern "C" {
#include <stdint.h>
}
//#include <cmath>
#include "context.h"
#include "op_params.h"

namespace paddle {
namespace lite {
namespace arm_trustzone {
namespace math {

// fixme now only support transA = false
template <typename dtype>
void gemv_int8(const int8_t* A,
               const int8_t* x,
               dtype* y,
               bool transA,
               int M,
               int N,
               const float* scale,
               bool is_bias,
               const float* bias,
               const operators::ActivationParam act_param,
               ARMTrustZoneContext* ctx);

}  // namespace math
}  // namespace arm_trustzone
}  // namespace lite
}  // namespace paddle
