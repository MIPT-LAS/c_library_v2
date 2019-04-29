#pragma once
// MESSAGE SET_TILTROTOR_ACTUATOR_COMMANDS PACKING

#define MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS 98

MAVPACKED(
typedef struct __mavlink_set_tiltrotor_actuator_commands_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float u[18]; /*< [rad] Commanded tiltrotor motor inputs.*/
}) mavlink_set_tiltrotor_actuator_commands_t;

#define MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN 76
#define MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN 76
#define MAVLINK_MSG_ID_98_LEN 76
#define MAVLINK_MSG_ID_98_MIN_LEN 76

#define MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC 226
#define MAVLINK_MSG_ID_98_CRC 226

#define MAVLINK_MSG_SET_TILTROTOR_ACTUATOR_COMMANDS_FIELD_U_LEN 18

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_TILTROTOR_ACTUATOR_COMMANDS { \
    98, \
    "SET_TILTROTOR_ACTUATOR_COMMANDS", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_tiltrotor_actuator_commands_t, time_boot_ms) }, \
         { "u", NULL, MAVLINK_TYPE_FLOAT, 18, 4, offsetof(mavlink_set_tiltrotor_actuator_commands_t, u) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_TILTROTOR_ACTUATOR_COMMANDS { \
    "SET_TILTROTOR_ACTUATOR_COMMANDS", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_tiltrotor_actuator_commands_t, time_boot_ms) }, \
         { "u", NULL, MAVLINK_TYPE_FLOAT, 18, 4, offsetof(mavlink_set_tiltrotor_actuator_commands_t, u) }, \
         } \
}
#endif

/**
 * @brief Pack a set_tiltrotor_actuator_commands message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param u [rad] Commanded tiltrotor motor inputs.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_tiltrotor_actuator_commands_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *u)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, u, 18);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN);
#else
    mavlink_set_tiltrotor_actuator_commands_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.u, u, sizeof(float)*18);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
}

/**
 * @brief Pack a set_tiltrotor_actuator_commands message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param u [rad] Commanded tiltrotor motor inputs.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_tiltrotor_actuator_commands_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *u)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, u, 18);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN);
#else
    mavlink_set_tiltrotor_actuator_commands_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.u, u, sizeof(float)*18);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
}

/**
 * @brief Encode a set_tiltrotor_actuator_commands struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_tiltrotor_actuator_commands C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_tiltrotor_actuator_commands_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_tiltrotor_actuator_commands_t* set_tiltrotor_actuator_commands)
{
    return mavlink_msg_set_tiltrotor_actuator_commands_pack(system_id, component_id, msg, set_tiltrotor_actuator_commands->time_boot_ms, set_tiltrotor_actuator_commands->u);
}

/**
 * @brief Encode a set_tiltrotor_actuator_commands struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_tiltrotor_actuator_commands C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_tiltrotor_actuator_commands_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_tiltrotor_actuator_commands_t* set_tiltrotor_actuator_commands)
{
    return mavlink_msg_set_tiltrotor_actuator_commands_pack_chan(system_id, component_id, chan, msg, set_tiltrotor_actuator_commands->time_boot_ms, set_tiltrotor_actuator_commands->u);
}

/**
 * @brief Send a set_tiltrotor_actuator_commands message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param u [rad] Commanded tiltrotor motor inputs.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_tiltrotor_actuator_commands_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *u)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, u, 18);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS, buf, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
#else
    mavlink_set_tiltrotor_actuator_commands_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.u, u, sizeof(float)*18);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS, (const char *)&packet, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
#endif
}

/**
 * @brief Send a set_tiltrotor_actuator_commands message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_tiltrotor_actuator_commands_send_struct(mavlink_channel_t chan, const mavlink_set_tiltrotor_actuator_commands_t* set_tiltrotor_actuator_commands)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_tiltrotor_actuator_commands_send(chan, set_tiltrotor_actuator_commands->time_boot_ms, set_tiltrotor_actuator_commands->u);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS, (const char *)set_tiltrotor_actuator_commands, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_tiltrotor_actuator_commands_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *u)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, u, 18);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS, buf, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
#else
    mavlink_set_tiltrotor_actuator_commands_t *packet = (mavlink_set_tiltrotor_actuator_commands_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->u, u, sizeof(float)*18);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS, (const char *)packet, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_TILTROTOR_ACTUATOR_COMMANDS UNPACKING


/**
 * @brief Get field time_boot_ms from set_tiltrotor_actuator_commands message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_tiltrotor_actuator_commands_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field u from set_tiltrotor_actuator_commands message
 *
 * @return [rad] Commanded tiltrotor motor inputs.
 */
static inline uint16_t mavlink_msg_set_tiltrotor_actuator_commands_get_u(const mavlink_message_t* msg, float *u)
{
    return _MAV_RETURN_float_array(msg, u, 18,  4);
}

/**
 * @brief Decode a set_tiltrotor_actuator_commands message into a struct
 *
 * @param msg The message to decode
 * @param set_tiltrotor_actuator_commands C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_tiltrotor_actuator_commands_decode(const mavlink_message_t* msg, mavlink_set_tiltrotor_actuator_commands_t* set_tiltrotor_actuator_commands)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_tiltrotor_actuator_commands->time_boot_ms = mavlink_msg_set_tiltrotor_actuator_commands_get_time_boot_ms(msg);
    mavlink_msg_set_tiltrotor_actuator_commands_get_u(msg, set_tiltrotor_actuator_commands->u);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN? msg->len : MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN;
        memset(set_tiltrotor_actuator_commands, 0, MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_LEN);
    memcpy(set_tiltrotor_actuator_commands, _MAV_PAYLOAD(msg), len);
#endif
}
