// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jackal_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define JACKAL_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include "jackal_msgs/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'mcu_uptime'
// Member 'connection_uptime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::msg::Status>()
{
  return "jackal_msgs::msg::Status";
}

template<>
inline const char * name<jackal_msgs::msg::Status>()
{
  return "jackal_msgs/msg/Status";
}

template<>
struct has_fixed_size<jackal_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jackal_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jackal_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JACKAL_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
