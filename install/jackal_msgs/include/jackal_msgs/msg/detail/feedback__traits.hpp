// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jackal_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define JACKAL_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include "jackal_msgs/msg/detail/feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drivers'
#include "jackal_msgs/msg/detail/drive_feedback__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::msg::Feedback>()
{
  return "jackal_msgs::msg::Feedback";
}

template<>
inline const char * name<jackal_msgs::msg::Feedback>()
{
  return "jackal_msgs/msg/Feedback";
}

template<>
struct has_fixed_size<jackal_msgs::msg::Feedback>
  : std::integral_constant<bool, has_fixed_size<jackal_msgs::msg::DriveFeedback>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<jackal_msgs::msg::Feedback>
  : std::integral_constant<bool, has_bounded_size<jackal_msgs::msg::DriveFeedback>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<jackal_msgs::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JACKAL_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
