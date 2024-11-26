// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jackal_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define JACKAL_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'drivers'
#include "jackal_msgs/msg/detail/drive_feedback__struct.h"

// Struct defined in msg/Feedback in the package jackal_msgs.
typedef struct jackal_msgs__msg__Feedback
{
  std_msgs__msg__Header header;
  jackal_msgs__msg__DriveFeedback drivers[2];
  int8_t commanded_mode;
  int8_t actual_mode;
} jackal_msgs__msg__Feedback;

// Struct for a sequence of jackal_msgs__msg__Feedback.
typedef struct jackal_msgs__msg__Feedback__Sequence
{
  jackal_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jackal_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JACKAL_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
