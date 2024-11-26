// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jackal_msgs:msg/Drive.idl
// generated code does not contain a copyright notice
#include "jackal_msgs/msg/detail/drive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jackal_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jackal_msgs/msg/detail/drive__struct.h"
#include "jackal_msgs/msg/detail/drive__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Drive__ros_msg_type = jackal_msgs__msg__Drive;

static bool _Drive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Drive__ros_msg_type * ros_message = static_cast<const _Drive__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: drivers
  {
    size_t size = 2;
    auto array_ptr = ros_message->drivers;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Drive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Drive__ros_msg_type * ros_message = static_cast<_Drive__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: drivers
  {
    size_t size = 2;
    auto array_ptr = ros_message->drivers;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jackal_msgs
size_t get_serialized_size_jackal_msgs__msg__Drive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Drive__ros_msg_type * ros_message = static_cast<const _Drive__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drivers
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->drivers;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Drive__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jackal_msgs__msg__Drive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jackal_msgs
size_t max_serialized_size_jackal_msgs__msg__Drive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drivers
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Drive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jackal_msgs__msg__Drive(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Drive = {
  "jackal_msgs::msg",
  "Drive",
  _Drive__cdr_serialize,
  _Drive__cdr_deserialize,
  _Drive__get_serialized_size,
  _Drive__max_serialized_size
};

static rosidl_message_type_support_t _Drive__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Drive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jackal_msgs, msg, Drive)() {
  return &_Drive__type_support;
}

#if defined(__cplusplus)
}
#endif
