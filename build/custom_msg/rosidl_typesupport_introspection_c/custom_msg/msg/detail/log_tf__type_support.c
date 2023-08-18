// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msg/msg/detail/log_tf__rosidl_typesupport_introspection_c.h"
#include "custom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msg/msg/detail/log_tf__functions.h"
#include "custom_msg/msg/detail/log_tf__struct.h"


// Include directives for member types
// Member `time_frame`
// Member `log_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LogTf__rosidl_typesupport_introspection_c__LogTf_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msg__msg__LogTf__init(message_memory);
}

void LogTf__rosidl_typesupport_introspection_c__LogTf_fini_function(void * message_memory)
{
  custom_msg__msg__LogTf__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LogTf__rosidl_typesupport_introspection_c__LogTf_message_member_array[2] = {
  {
    "time_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__LogTf, time_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "log_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msg__msg__LogTf, log_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LogTf__rosidl_typesupport_introspection_c__LogTf_message_members = {
  "custom_msg__msg",  // message namespace
  "LogTf",  // message name
  2,  // number of fields
  sizeof(custom_msg__msg__LogTf),
  LogTf__rosidl_typesupport_introspection_c__LogTf_message_member_array,  // message members
  LogTf__rosidl_typesupport_introspection_c__LogTf_init_function,  // function to initialize message memory (memory has to be allocated)
  LogTf__rosidl_typesupport_introspection_c__LogTf_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LogTf__rosidl_typesupport_introspection_c__LogTf_message_type_support_handle = {
  0,
  &LogTf__rosidl_typesupport_introspection_c__LogTf_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msg, msg, LogTf)() {
  if (!LogTf__rosidl_typesupport_introspection_c__LogTf_message_type_support_handle.typesupport_identifier) {
    LogTf__rosidl_typesupport_introspection_c__LogTf_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LogTf__rosidl_typesupport_introspection_c__LogTf_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
