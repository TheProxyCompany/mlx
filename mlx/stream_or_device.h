#pragma once

#include <variant>

#include "mlx/device.h"
#include "mlx/stream.h"

namespace mlx::core {

// Type for specifying either a Stream or Device (or neither for default)
using StreamOrDevice = std::variant<std::monostate, Stream, Device>;

} // namespace mlx::core
