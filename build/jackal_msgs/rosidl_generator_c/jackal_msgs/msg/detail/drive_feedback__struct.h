// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jackal_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_
#define JACKAL_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DriveFeedback in the package jackal_msgs.
typedef struct jackal_msgs__msg__DriveFeedback
{
  float current;
  float duty_cycle;
  float bridge_temperature;
  float motor_temperature;
  float measured_velocity;
  float measured_travel;
  bool driver_fault;
} jackal_msgs__msg__DriveFeedback;

// Struct for a sequence of jackal_msgs__msg__DriveFeedback.
typedef struct jackal_msgs__msg__DriveFeedback__Sequence
{
  jackal_msgs__msg__DriveFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jackal_msgs__msg__DriveFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JACKAL_MSGS__MSG__DETAIL__DRIVE_FEEDBACK__STRUCT_H_
