// Copyright (C) 2018-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "common/frontend_exceptions.hpp"

#ifdef tensorflow_ov_frontend_EXPORTS
#    define TF_API OPENVINO_CORE_EXPORTS
#else
#    define TF_API OPENVINO_CORE_IMPORTS
#endif  // tensorflow_ov_frontend_EXPORTS