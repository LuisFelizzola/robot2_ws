// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/log_tf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_frame`
// Member `log_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msg__msg__LogTf__init(custom_msg__msg__LogTf * msg)
{
  if (!msg) {
    return false;
  }
  // time_frame
  if (!rosidl_runtime_c__String__init(&msg->time_frame)) {
    custom_msg__msg__LogTf__fini(msg);
    return false;
  }
  // log_msg
  if (!rosidl_runtime_c__String__init(&msg->log_msg)) {
    custom_msg__msg__LogTf__fini(msg);
    return false;
  }
  return true;
}

void
custom_msg__msg__LogTf__fini(custom_msg__msg__LogTf * msg)
{
  if (!msg) {
    return;
  }
  // time_frame
  rosidl_runtime_c__String__fini(&msg->time_frame);
  // log_msg
  rosidl_runtime_c__String__fini(&msg->log_msg);
}

bool
custom_msg__msg__LogTf__are_equal(const custom_msg__msg__LogTf * lhs, const custom_msg__msg__LogTf * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time_frame), &(rhs->time_frame)))
  {
    return false;
  }
  // log_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->log_msg), &(rhs->log_msg)))
  {
    return false;
  }
  return true;
}

bool
custom_msg__msg__LogTf__copy(
  const custom_msg__msg__LogTf * input,
  custom_msg__msg__LogTf * output)
{
  if (!input || !output) {
    return false;
  }
  // time_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->time_frame), &(output->time_frame)))
  {
    return false;
  }
  // log_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->log_msg), &(output->log_msg)))
  {
    return false;
  }
  return true;
}

custom_msg__msg__LogTf *
custom_msg__msg__LogTf__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__LogTf * msg = (custom_msg__msg__LogTf *)allocator.allocate(sizeof(custom_msg__msg__LogTf), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg__msg__LogTf));
  bool success = custom_msg__msg__LogTf__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msg__msg__LogTf__destroy(custom_msg__msg__LogTf * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msg__msg__LogTf__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msg__msg__LogTf__Sequence__init(custom_msg__msg__LogTf__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__LogTf * data = NULL;

  if (size) {
    data = (custom_msg__msg__LogTf *)allocator.zero_allocate(size, sizeof(custom_msg__msg__LogTf), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg__msg__LogTf__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg__msg__LogTf__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msg__msg__LogTf__Sequence__fini(custom_msg__msg__LogTf__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg__msg__LogTf__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msg__msg__LogTf__Sequence *
custom_msg__msg__LogTf__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__LogTf__Sequence * array = (custom_msg__msg__LogTf__Sequence *)allocator.allocate(sizeof(custom_msg__msg__LogTf__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msg__msg__LogTf__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msg__msg__LogTf__Sequence__destroy(custom_msg__msg__LogTf__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msg__msg__LogTf__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msg__msg__LogTf__Sequence__are_equal(const custom_msg__msg__LogTf__Sequence * lhs, const custom_msg__msg__LogTf__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg__msg__LogTf__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg__msg__LogTf__Sequence__copy(
  const custom_msg__msg__LogTf__Sequence * input,
  custom_msg__msg__LogTf__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg__msg__LogTf);
    custom_msg__msg__LogTf * data =
      (custom_msg__msg__LogTf *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg__msg__LogTf__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msg__msg__LogTf__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msg__msg__LogTf__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
