// Copyright 2013 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_OPERATOR_PROPERTIES_H_
#define V8_COMPILER_OPERATOR_PROPERTIES_H_

#include "src/base/macros.h"

namespace v8 {
namespace internal {
namespace compiler {

// Forward declarations.
class Operator;


class OperatorProperties FINAL {
 public:
  static bool HasContextInput(const Operator* op);
  static int GetContextInputCount(const Operator* op) {
    return HasContextInput(op) ? 1 : 0;
  }
  static int GetFrameStateInputCount(const Operator* op);

  static int GetTotalInputCount(const Operator* op);

  static bool IsBasicBlockBegin(const Operator* op);

 private:
  DISALLOW_COPY_AND_ASSIGN(OperatorProperties);
};

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_OPERATOR_PROPERTIES_H_
