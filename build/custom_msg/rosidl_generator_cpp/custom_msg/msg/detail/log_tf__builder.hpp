// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LOG_TF__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LOG_TF__BUILDER_HPP_

#include "custom_msg/msg/detail/log_tf__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_LogTf_log_msg
{
public:
  explicit Init_LogTf_log_msg(::custom_msg::msg::LogTf & msg)
  : msg_(msg)
  {}
  ::custom_msg::msg::LogTf log_msg(::custom_msg::msg::LogTf::_log_msg_type arg)
  {
    msg_.log_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::LogTf msg_;
};

class Init_LogTf_time_frame
{
public:
  Init_LogTf_time_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogTf_log_msg time_frame(::custom_msg::msg::LogTf::_time_frame_type arg)
  {
    msg_.time_frame = std::move(arg);
    return Init_LogTf_log_msg(msg_);
  }

private:
  ::custom_msg::msg::LogTf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::LogTf>()
{
  return custom_msg::msg::builder::Init_LogTf_time_frame();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__LOG_TF__BUILDER_HPP_
