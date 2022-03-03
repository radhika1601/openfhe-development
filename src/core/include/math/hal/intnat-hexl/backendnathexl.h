// @file backendnathexl.h This file contains the definitions for the HEXL accelerated
// native math backend
// @author TPOC: contact@palisade-crypto.org
//
// @copyright Copyright (c) 2019, New Jersey Institute of Technology (NJIT)
// All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution. THIS SOFTWARE IS
// PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef SRC_CORE_INCLUDE_MATH_HAL_INTNATHEXL_BACKENDNAT_H_
#define SRC_CORE_INCLUDE_MATH_HAL_INTNATHEXL_BACKENDNAT_H_

#include "math/hal/intnat-hexl/ubintnathexl.h"
#include "math/hal/intnat-hexl/mubintvecnathexl.h"
#include "math/hal/intnat-hexl/transformnathexl.h"

#include "math/hal/basicint.h"

#if NATIVEINT != 64
#error "Building with HEXL optimizations requires NATIVE_SIZE == 64"
#endif

namespace lbcrypto {

using NativeInteger = intnathexl::NativeInteger;
using NativeVector = intnathexl::NativeVector;

}

// Promote to global namespace
using NativeInteger = lbcrypto::NativeInteger;
using NativeVector = lbcrypto::NativeVector;

#endif /* SRC_CORE_INCLUDE_MATH_HAL_INTNATHEXL_BACKENDNAT_H_ */