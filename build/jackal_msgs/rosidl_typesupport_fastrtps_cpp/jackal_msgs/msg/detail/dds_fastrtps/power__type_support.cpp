// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jackal_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "jackal_msgs/msg/detail/power__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jackal_msgs/msg/detail/power__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: shore_power_connected
  cdr << ros_message.shore_power_connected;
  // Member: battery_connected
  cdr << ros_message.battery_connected;
  // Member: power_12v_user_nominal
  cdr << ros_message.power_12v_user_nominal;
  // Member: charging_complete
  cdr << ros_message.charging_complete;
  // Member: measured_voltages
  {
    cdr << ros_message.measured_voltages;
  }
  // Member: measured_currents
  {
    cdr << ros_message.measured_currents;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jackal_msgs::msg::Power & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: shore_power_connected
  cdr >> ros_message.shore_power_connected;

  // Member: battery_connected
  cdr >> ros_message.battery_connected;

  // Member: power_12v_user_nominal
  cdr >> ros_message.power_12v_user_nominal;

  // Member: charging_complete
  cdr >> ros_message.charging_complete;

  // Member: measured_voltages
  {
    cdr >> ros_message.measured_voltages;
  }

  // Member: measured_currents
  {
    cdr >> ros_message.measured_currents;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
get_serialized_size(
  const jackal_msgs::msg::Power & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: shore_power_connected
  {
    size_t item_size = sizeof(ros_message.shore_power_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_connected
  {
    size_t item_size = sizeof(ros_message.battery_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_12v_user_nominal
  {
    size_t item_size = sizeof(ros_message.power_12v_user_nominal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charging_complete
  {
    size_t item_size = sizeof(ros_message.charging_complete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: measured_voltages
  {
    size_t array_size = ros_message.measured_voltages.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.measured_voltages[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: measured_currents
  {
    size_t array_size = ros_message.measured_currents.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.measured_currents[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jackal_msgs
max_serialized_size_Power(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: shore_power_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_12v_user_nominal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charging_complete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: measured_voltages
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: measured_currents
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Power__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jackal_msgs::msg::Power *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Power__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jackal_msgs::msg::Power *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Power__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jackal_msgs::msg::Power *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Power__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Power(full_bounded, 0);
}

static message_type_support_callbacks_t _Power__callbacks = {
  "jackal_msgs::msg",
  "Power",
  _Power__cdr_serialize,
  _Power__cdr_deserialize,
  _Power__get_serialized_size,
  _Power__max_serialized_size
};

static rosidl_message_type_support_t _Power__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Power__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jackal_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jackal_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jackal_msgs::msg::Power>()
{
  return &jackal_msgs::msg::typesupport_fastrtps_cpp::_Power__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jackal_msgs, msg, Power)() {
  return &jackal_msgs::msg::typesupport_fastrtps_cpp::_Power__handle;
}

#ifdef __cplusplus
}
#endif
