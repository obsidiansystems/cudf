/*
 * Copyright (c) 2020, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cudf/dictionary/dictionary_column_view.hpp>
#include <cudf/scalar/scalar.hpp>

namespace cudf {
namespace dictionary {
namespace detail {

/**
 * @copydoc cudf::dictionary::get_index(dictionary_column_view const&,scalar
 * const&,rmm::mr::device_memory_resource*)
 *
 * @param stream Optional CUDA stream on which to execute kernels
 */
std::unique_ptr<numeric_scalar<int32_t>> get_index(
  dictionary_column_view const& dictionary,
  scalar const& key,
  rmm::mr::device_memory_resource* mr = rmm::mr::get_default_resource(),
  cudaStream_t stream                 = 0);

}  // namespace detail
}  // namespace dictionary
}  // namespace cudf
