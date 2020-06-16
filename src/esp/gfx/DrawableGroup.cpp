// Copyright (c) Facebook, Inc. and its affiliates.
// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.

#include "DrawableGroup.h"

namespace esp {
namespace gfx {

bool DrawableGroup::hasDrawable(uint64_t id) {
  return (idToDrawable_.find(id) != idToDrawable_.end());
}

Drawable* DrawableGroup::getDrawable(uint64_t id) {
  if (hasDrawable(id)) {
    return idToDrawable_[id];
  }

  return nullptr;
}

}  // namespace gfx
}  // namespace esp
