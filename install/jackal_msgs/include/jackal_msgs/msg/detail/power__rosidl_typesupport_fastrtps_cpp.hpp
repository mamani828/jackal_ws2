// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from jackal_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__POWER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JACKAL_MSGS__MSG__DETAIL__POWER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "jackal_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "jackal_msgs/msg/detail/power__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace jackal_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
cdr_serialize(
  const jackal_msgs::msg::Power & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jackal_msgs::msg::Power & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
get_serialized_size(
  const jackal_msgs::msg::Power & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
max_serialized_size_Power(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jackal_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jackal_msgs, msg, Power)();

#ifdef __cplusplus
}
#endif

#endif  // JACKAL_MSGS__MSG__DETAIL__POWER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
