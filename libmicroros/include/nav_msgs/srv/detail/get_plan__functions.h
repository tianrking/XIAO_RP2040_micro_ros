// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav_msgs/srv/get_plan.h"


#ifndef NAV_MSGS__SRV__DETAIL__GET_PLAN__FUNCTIONS_H_
#define NAV_MSGS__SRV__DETAIL__GET_PLAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "nav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav_msgs/srv/detail/get_plan__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_type_hash_t *
nav_msgs__srv__GetPlan__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeDescription *
nav_msgs__srv__GetPlan__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource *
nav_msgs__srv__GetPlan__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav_msgs__srv__GetPlan__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetPlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_msgs__srv__GetPlan_Request
 * )) before or use
 * nav_msgs__srv__GetPlan_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__init(nav_msgs__srv__GetPlan_Request * msg);

/// Finalize srv/GetPlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Request__fini(nav_msgs__srv__GetPlan_Request * msg);

/// Create srv/GetPlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_msgs__srv__GetPlan_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Request *
nav_msgs__srv__GetPlan_Request__create(void);

/// Destroy srv/GetPlan message.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Request__destroy(nav_msgs__srv__GetPlan_Request * msg);

/// Check for srv/GetPlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__are_equal(const nav_msgs__srv__GetPlan_Request * lhs, const nav_msgs__srv__GetPlan_Request * rhs);

/// Copy a srv/GetPlan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__copy(
  const nav_msgs__srv__GetPlan_Request * input,
  nav_msgs__srv__GetPlan_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_type_hash_t *
nav_msgs__srv__GetPlan_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeDescription *
nav_msgs__srv__GetPlan_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource *
nav_msgs__srv__GetPlan_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav_msgs__srv__GetPlan_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetPlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_msgs__srv__GetPlan_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__Sequence__init(nav_msgs__srv__GetPlan_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Request__Sequence__fini(nav_msgs__srv__GetPlan_Request__Sequence * array);

/// Create array of srv/GetPlan messages.
/**
 * It allocates the memory for the array and calls
 * nav_msgs__srv__GetPlan_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Request__Sequence *
nav_msgs__srv__GetPlan_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Request__Sequence__destroy(nav_msgs__srv__GetPlan_Request__Sequence * array);

/// Check for srv/GetPlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__Sequence__are_equal(const nav_msgs__srv__GetPlan_Request__Sequence * lhs, const nav_msgs__srv__GetPlan_Request__Sequence * rhs);

/// Copy an array of srv/GetPlan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Request__Sequence__copy(
  const nav_msgs__srv__GetPlan_Request__Sequence * input,
  nav_msgs__srv__GetPlan_Request__Sequence * output);

/// Initialize srv/GetPlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_msgs__srv__GetPlan_Response
 * )) before or use
 * nav_msgs__srv__GetPlan_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__init(nav_msgs__srv__GetPlan_Response * msg);

/// Finalize srv/GetPlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Response__fini(nav_msgs__srv__GetPlan_Response * msg);

/// Create srv/GetPlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_msgs__srv__GetPlan_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Response *
nav_msgs__srv__GetPlan_Response__create(void);

/// Destroy srv/GetPlan message.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Response__destroy(nav_msgs__srv__GetPlan_Response * msg);

/// Check for srv/GetPlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__are_equal(const nav_msgs__srv__GetPlan_Response * lhs, const nav_msgs__srv__GetPlan_Response * rhs);

/// Copy a srv/GetPlan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__copy(
  const nav_msgs__srv__GetPlan_Response * input,
  nav_msgs__srv__GetPlan_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_type_hash_t *
nav_msgs__srv__GetPlan_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeDescription *
nav_msgs__srv__GetPlan_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource *
nav_msgs__srv__GetPlan_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav_msgs__srv__GetPlan_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetPlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_msgs__srv__GetPlan_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__Sequence__init(nav_msgs__srv__GetPlan_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Response__Sequence__fini(nav_msgs__srv__GetPlan_Response__Sequence * array);

/// Create array of srv/GetPlan messages.
/**
 * It allocates the memory for the array and calls
 * nav_msgs__srv__GetPlan_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Response__Sequence *
nav_msgs__srv__GetPlan_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Response__Sequence__destroy(nav_msgs__srv__GetPlan_Response__Sequence * array);

/// Check for srv/GetPlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__Sequence__are_equal(const nav_msgs__srv__GetPlan_Response__Sequence * lhs, const nav_msgs__srv__GetPlan_Response__Sequence * rhs);

/// Copy an array of srv/GetPlan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Response__Sequence__copy(
  const nav_msgs__srv__GetPlan_Response__Sequence * input,
  nav_msgs__srv__GetPlan_Response__Sequence * output);

/// Initialize srv/GetPlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_msgs__srv__GetPlan_Event
 * )) before or use
 * nav_msgs__srv__GetPlan_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__init(nav_msgs__srv__GetPlan_Event * msg);

/// Finalize srv/GetPlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Event__fini(nav_msgs__srv__GetPlan_Event * msg);

/// Create srv/GetPlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_msgs__srv__GetPlan_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Event *
nav_msgs__srv__GetPlan_Event__create(void);

/// Destroy srv/GetPlan message.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Event__destroy(nav_msgs__srv__GetPlan_Event * msg);

/// Check for srv/GetPlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__are_equal(const nav_msgs__srv__GetPlan_Event * lhs, const nav_msgs__srv__GetPlan_Event * rhs);

/// Copy a srv/GetPlan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__copy(
  const nav_msgs__srv__GetPlan_Event * input,
  nav_msgs__srv__GetPlan_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_type_hash_t *
nav_msgs__srv__GetPlan_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeDescription *
nav_msgs__srv__GetPlan_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource *
nav_msgs__srv__GetPlan_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav_msgs__srv__GetPlan_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetPlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_msgs__srv__GetPlan_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__Sequence__init(nav_msgs__srv__GetPlan_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Event__Sequence__fini(nav_msgs__srv__GetPlan_Event__Sequence * array);

/// Create array of srv/GetPlan messages.
/**
 * It allocates the memory for the array and calls
 * nav_msgs__srv__GetPlan_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
nav_msgs__srv__GetPlan_Event__Sequence *
nav_msgs__srv__GetPlan_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetPlan messages.
/**
 * It calls
 * nav_msgs__srv__GetPlan_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
void
nav_msgs__srv__GetPlan_Event__Sequence__destroy(nav_msgs__srv__GetPlan_Event__Sequence * array);

/// Check for srv/GetPlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__Sequence__are_equal(const nav_msgs__srv__GetPlan_Event__Sequence * lhs, const nav_msgs__srv__GetPlan_Event__Sequence * rhs);

/// Copy an array of srv/GetPlan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_msgs
bool
nav_msgs__srv__GetPlan_Event__Sequence__copy(
  const nav_msgs__srv__GetPlan_Event__Sequence * input,
  nav_msgs__srv__GetPlan_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__GET_PLAN__FUNCTIONS_H_
