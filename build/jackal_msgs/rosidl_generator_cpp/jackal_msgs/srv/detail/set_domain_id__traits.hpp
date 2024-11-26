// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jackal_msgs:srv/SetDomainId.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_
#define JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_

#include "jackal_msgs/srv/detail/set_domain_id__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId_Request>()
{
  return "jackal_msgs::srv::SetDomainId_Request";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId_Request>()
{
  return "jackal_msgs/srv/SetDomainId_Request";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jackal_msgs::srv::SetDomainId_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId_Response>()
{
  return "jackal_msgs::srv::SetDomainId_Response";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId_Response>()
{
  return "jackal_msgs/srv/SetDomainId_Response";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jackal_msgs::srv::SetDomainId_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId>()
{
  return "jackal_msgs::srv::SetDomainId";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId>()
{
  return "jackal_msgs/srv/SetDomainId";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId>
  : std::integral_constant<
    bool,
    has_fixed_size<jackal_msgs::srv::SetDomainId_Request>::value &&
    has_fixed_size<jackal_msgs::srv::SetDomainId_Response>::value
  >
{
};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId>
  : std::integral_constant<
    bool,
    has_bounded_size<jackal_msgs::srv::SetDomainId_Request>::value &&
    has_bounded_size<jackal_msgs::srv::SetDomainId_Response>::value
  >
{
};

template<>
struct is_service<jackal_msgs::srv::SetDomainId>
  : std::true_type
{
};

template<>
struct is_service_request<jackal_msgs::srv::SetDomainId_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jackal_msgs::srv::SetDomainId_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_
