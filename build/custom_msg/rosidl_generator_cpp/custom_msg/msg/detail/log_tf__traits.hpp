// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_

#include "custom_msg/msg/detail/log_tf__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msg::msg::LogTf>()
{
  return "custom_msg::msg::LogTf";
}

template<>
inline const char * name<custom_msg::msg::LogTf>()
{
  return "custom_msg/msg/LogTf";
}

template<>
struct has_fixed_size<custom_msg::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg::msg::LogTf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_
