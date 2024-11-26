// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jackal_msgs:msg/Power.idl
// generated code does not contain a copyright notice
#include "jackal_msgs/msg/detail/power__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jackal_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jackal_msgs/msg/detail/power__struct.h"
#include "jackal_msgs/msg/detail/power__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // measured_currents, measured_voltages
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // measured_currents, measured_voltages
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jackal_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jackal_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jackal_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Power__ros_msg_type = jackal_msgs__msg__Power;

static bool _Power__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Power__ros_msg_type * ros_message = static_cast<const _Power__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: shore_power_connected
  {
    cdr << ros_message->shore_power_connected;
  }

  // Field name: battery_connected
  {
    cdr << ros_message->battery_connected;
  }

  // Field name: power_12v_user_nominal
  {
    cdr << ros_message->power_12v_user_nominal;
  }

  // Field name: charging_complete
  {
    cdr << ros_message->charging_complete;
  }

  // Field name: measured_voltages
  {
    size_t size = ros_message->measured_voltages.size;
    auto array_ptr = ros_message->measured_voltages.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: measured_currents
  {
    size_t size = ros_message->measured_currents.size;
    auto array_ptr = ros_message->measured_currents.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Power__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Power__ros_msg_type * ros_message = static_cast<_Power__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: shore_power_connected
  {
    cdr >> ros_message->shore_power_connected;
  }

  // Field name: battery_connected
  {
    cdr >> ros_message->battery_connected;
  }

  // Field name: power_12v_user_nominal
  {
    cdr >> ros_message->power_12v_user_nominal;
  }

  // Field name: charging_complete
  {
    cdr >> ros_message->charging_complete;
  }

  // Field name: measured_voltages
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->measured_voltages.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->measured_voltages);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->measured_voltages, size)) {
      return "failed to create array for field 'measured_voltages'";
    }
    auto array_ptr = ros_message->measured_voltages.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: measured_currents
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->measured_currents.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->measured_currents);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->measured_currents, size)) {
      return "failed to create array for field 'measured_currents'";
    }
    auto array_ptr = ros_message->measured_currents.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jackal_msgs
size_t get_serialized_size_jackal_msgs__msg__Power(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Power__ros_msg_type * ros_message = static_cast<const _Power__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name shore_power_connected
  {
    size_t item_size = sizeof(ros_message->shore_power_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_connected
  {
    size_t item_size = sizeof(ros_message->battery_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_12v_user_nominal
  {
    size_t item_size = sizeof(ros_message->power_12v_user_nominal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charging_complete
  {
    size_t item_size = sizeof(ros_message->charging_complete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name measured_voltages
  {
    size_t array_size = ros_message->measured_voltages.size;
    auto array_ptr = ros_message->measured_voltages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name measured_currents
  {
    size_t array_size = ros_message->measured_currents.size;
    auto array_ptr = ros_message->measured_currents.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Power__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jackal_msgs__msg__Power(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jackal_msgs
size_t max_serialized_size_jackal_msgs__msg__Power(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: shore_power_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_12v_user_nominal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: charging_complete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: measured_voltages
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: measured_currents
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

static size_t _Power__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jackal_msgs__msg__Power(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Power = {
  "jackal_msgs::msg",
  "Power",
  _Power__cdr_serialize,
  _Power__cdr_deserialize,
  _Power__get_serialized_size,
  _Power__max_serialized_size
};

static rosidl_message_type_support_t _Power__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Power,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jackal_msgs, msg, Power)() {
  return &_Power__type_support;
}

#if defined(__cplusplus)
}
#endif
