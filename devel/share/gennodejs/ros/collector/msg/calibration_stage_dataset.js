// Auto-generated. Do not edit!

// (in-package collector.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class calibration_stage_dataset {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.magnetic_x = null;
      this.magnetic_y = null;
      this.magnetic_z = null;
      this.twist = null;
      this.wrench = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('magnetic_x')) {
        this.magnetic_x = initObj.magnetic_x
      }
      else {
        this.magnetic_x = 0.0;
      }
      if (initObj.hasOwnProperty('magnetic_y')) {
        this.magnetic_y = initObj.magnetic_y
      }
      else {
        this.magnetic_y = 0.0;
      }
      if (initObj.hasOwnProperty('magnetic_z')) {
        this.magnetic_z = initObj.magnetic_z
      }
      else {
        this.magnetic_z = 0.0;
      }
      if (initObj.hasOwnProperty('twist')) {
        this.twist = initObj.twist
      }
      else {
        this.twist = new geometry_msgs.msg.Twist();
      }
      if (initObj.hasOwnProperty('wrench')) {
        this.wrench = initObj.wrench
      }
      else {
        this.wrench = new geometry_msgs.msg.Wrench();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type calibration_stage_dataset
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [magnetic_x]
    bufferOffset = _serializer.float32(obj.magnetic_x, buffer, bufferOffset);
    // Serialize message field [magnetic_y]
    bufferOffset = _serializer.float32(obj.magnetic_y, buffer, bufferOffset);
    // Serialize message field [magnetic_z]
    bufferOffset = _serializer.float32(obj.magnetic_z, buffer, bufferOffset);
    // Serialize message field [twist]
    bufferOffset = geometry_msgs.msg.Twist.serialize(obj.twist, buffer, bufferOffset);
    // Serialize message field [wrench]
    bufferOffset = geometry_msgs.msg.Wrench.serialize(obj.wrench, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type calibration_stage_dataset
    let len;
    let data = new calibration_stage_dataset(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [magnetic_x]
    data.magnetic_x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [magnetic_y]
    data.magnetic_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [magnetic_z]
    data.magnetic_z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [twist]
    data.twist = geometry_msgs.msg.Twist.deserialize(buffer, bufferOffset);
    // Deserialize message field [wrench]
    data.wrench = geometry_msgs.msg.Wrench.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 108;
  }

  static datatype() {
    // Returns string type for a message object
    return 'collector/calibration_stage_dataset';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd271204020ff451bb31a3210cdd4d942';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    float32 magnetic_x
    float32 magnetic_y
    float32 magnetic_z
    geometry_msgs/Twist twist
    geometry_msgs/Wrench wrench
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    ================================================================================
    MSG: geometry_msgs/Wrench
    # This represents force in free space, separated into
    # its linear and angular parts.
    Vector3  force
    Vector3  torque
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new calibration_stage_dataset(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.magnetic_x !== undefined) {
      resolved.magnetic_x = msg.magnetic_x;
    }
    else {
      resolved.magnetic_x = 0.0
    }

    if (msg.magnetic_y !== undefined) {
      resolved.magnetic_y = msg.magnetic_y;
    }
    else {
      resolved.magnetic_y = 0.0
    }

    if (msg.magnetic_z !== undefined) {
      resolved.magnetic_z = msg.magnetic_z;
    }
    else {
      resolved.magnetic_z = 0.0
    }

    if (msg.twist !== undefined) {
      resolved.twist = geometry_msgs.msg.Twist.Resolve(msg.twist)
    }
    else {
      resolved.twist = new geometry_msgs.msg.Twist()
    }

    if (msg.wrench !== undefined) {
      resolved.wrench = geometry_msgs.msg.Wrench.Resolve(msg.wrench)
    }
    else {
      resolved.wrench = new geometry_msgs.msg.Wrench()
    }

    return resolved;
    }
};

module.exports = calibration_stage_dataset;
