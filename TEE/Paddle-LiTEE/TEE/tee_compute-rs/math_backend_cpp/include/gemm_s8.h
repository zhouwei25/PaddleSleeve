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

//#include <cmath>
#include "gemm_prepacked_int8.h"
#include "gemv_arm_int8.h"
#include "context.h"

namespace paddle {
namespace lite {
namespace arm_trustzone {
namespace math {

template <typename Dtype>
void gemm_s8(bool is_transA,
             bool is_transB,
             int M,
             int N,
             int K,
             const int8_t* A,
             const int8_t* B,
             Dtype* C,
             const float* bias,
             bool is_bias,
             const float* scale,
             const operators::ActivationParam act_param,
             ARMTrustZoneContext* ctx);

}  // namespace math
}  // namespace arm_trustzone
}  // namespace lite
}  // namespace paddle
