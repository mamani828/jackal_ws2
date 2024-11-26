// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jackal_msgs:msg/Drive.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__DRIVE__TRAITS_HPP_
#define JACKAL_MSGS__MSG__DETAIL__DRIVE__TRAITS_HPP_

#include "jackal_msgs/msg/detail/drive__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::msg::Drive>()
{
  return "jackal_msgs::msg::Drive";
}

template<>
inline const char * name<jackal_msgs::msg::Drive>()
{
  return "jackal_msgs/msg/Drive";
}

template<>
struct has_fixed_size<jackal_msgs::msg::Drive>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jackal_msgs::msg::Drive>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jackal_msgs::msg::Drive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JACKAL_MSGS__MSG__DETAIL__DRIVE__TRAITS_HPP_
