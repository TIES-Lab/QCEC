//
// This file is part of the MQT QCEC library released under the MIT license.
// See README.md or go to https://github.com/cda-tum/qcec for more information.
//

#pragma once

#include "ApplicationScheme.hpp"

namespace ec {
template <class DDType, class Config>
class OneToOneApplicationScheme final
    : public ApplicationScheme<DDType, Config> {
public:
  OneToOneApplicationScheme(TaskManager<DDType, Config>& taskManager1,
                            TaskManager<DDType, Config>& taskManager2) noexcept
      : ApplicationScheme<DDType, Config>(taskManager1, taskManager2) {}

  std::pair<size_t, size_t> operator()() noexcept override { return {1U, 1U}; }
};
} // namespace ec
