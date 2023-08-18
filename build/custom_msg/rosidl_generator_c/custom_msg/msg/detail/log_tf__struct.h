// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LOG_TF__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__LOG_TF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_frame'
// Member 'log_msg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LogTf in the package custom_msg.
typedef struct custom_msg__msg__LogTf
{
  rosidl_runtime_c__String time_frame;
  rosidl_runtime_c__String log_msg;
} custom_msg__msg__LogTf;

// Struct for a sequence of custom_msg__msg__LogTf.
typedef struct custom_msg__msg__LogTf__Sequence
{
  custom_msg__msg__LogTf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__LogTf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__LOG_TF__STRUCT_H_
