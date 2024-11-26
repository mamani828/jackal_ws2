// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jackal_msgs:msg/Drive.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_
#define JACKAL_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_VELOCITY'.
enum
{
  jackal_msgs__msg__Drive__MODE_VELOCITY = 0
};

/// Constant 'MODE_PWM'.
enum
{
  jackal_msgs__msg__Drive__MODE_PWM = 1
};

/// Constant 'MODE_EFFORT'.
enum
{
  jackal_msgs__msg__Drive__MODE_EFFORT = 2
};

/// Constant 'MODE_NONE'.
enum
{
  jackal_msgs__msg__Drive__MODE_NONE = -1
};

/// Constant 'LEFT'.
enum
{
  jackal_msgs__msg__Drive__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  jackal_msgs__msg__Drive__RIGHT = 1
};

// Struct defined in msg/Drive in the package jackal_msgs.
typedef struct jackal_msgs__msg__Drive
{
  int8_t mode;
  float drivers[2];
} jackal_msgs__msg__Drive;

// Struct for a sequence of jackal_msgs__msg__Drive.
typedef struct jackal_msgs__msg__Drive__Sequence
{
  jackal_msgs__msg__Drive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jackal_msgs__msg__Drive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JACKAL_MSGS__MSG__DETAIL__DRIVE__STRUCT_H_
