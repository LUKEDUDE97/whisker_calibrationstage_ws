// Generated by gencpp from file collector/calibration_stage_dataset.msg
// DO NOT EDIT!


#ifndef COLLECTOR_MESSAGE_CALIBRATION_STAGE_DATASET_H
#define COLLECTOR_MESSAGE_CALIBRATION_STAGE_DATASET_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>

namespace collector
{
template <class ContainerAllocator>
struct calibration_stage_dataset_
{
  typedef calibration_stage_dataset_<ContainerAllocator> Type;

  calibration_stage_dataset_()
    : header()
    , magnetic_x(0.0)
    , magnetic_y(0.0)
    , magnetic_z(0.0)
    , twist()
    , wrench()  {
    }
  calibration_stage_dataset_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , magnetic_x(0.0)
    , magnetic_y(0.0)
    , magnetic_z(0.0)
    , twist(_alloc)
    , wrench(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _magnetic_x_type;
  _magnetic_x_type magnetic_x;

   typedef float _magnetic_y_type;
  _magnetic_y_type magnetic_y;

   typedef float _magnetic_z_type;
  _magnetic_z_type magnetic_z;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;





  typedef boost::shared_ptr< ::collector::calibration_stage_dataset_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::collector::calibration_stage_dataset_<ContainerAllocator> const> ConstPtr;

}; // struct calibration_stage_dataset_

typedef ::collector::calibration_stage_dataset_<std::allocator<void> > calibration_stage_dataset;

typedef boost::shared_ptr< ::collector::calibration_stage_dataset > calibration_stage_datasetPtr;
typedef boost::shared_ptr< ::collector::calibration_stage_dataset const> calibration_stage_datasetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::collector::calibration_stage_dataset_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::collector::calibration_stage_dataset_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::collector::calibration_stage_dataset_<ContainerAllocator1> & lhs, const ::collector::calibration_stage_dataset_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.magnetic_x == rhs.magnetic_x &&
    lhs.magnetic_y == rhs.magnetic_y &&
    lhs.magnetic_z == rhs.magnetic_z &&
    lhs.twist == rhs.twist &&
    lhs.wrench == rhs.wrench;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::collector::calibration_stage_dataset_<ContainerAllocator1> & lhs, const ::collector::calibration_stage_dataset_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace collector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::collector::calibration_stage_dataset_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::collector::calibration_stage_dataset_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::collector::calibration_stage_dataset_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::collector::calibration_stage_dataset_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collector::calibration_stage_dataset_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::collector::calibration_stage_dataset_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::collector::calibration_stage_dataset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d271204020ff451bb31a3210cdd4d942";
  }

  static const char* value(const ::collector::calibration_stage_dataset_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd271204020ff451bULL;
  static const uint64_t static_value2 = 0xb31a3210cdd4d942ULL;
};

template<class ContainerAllocator>
struct DataType< ::collector::calibration_stage_dataset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "collector/calibration_stage_dataset";
  }

  static const char* value(const ::collector::calibration_stage_dataset_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::collector::calibration_stage_dataset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 magnetic_x\n"
"float32 magnetic_y\n"
"float32 magnetic_z\n"
"geometry_msgs/Twist twist\n"
"geometry_msgs/Wrench wrench\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
;
  }

  static const char* value(const ::collector::calibration_stage_dataset_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::collector::calibration_stage_dataset_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.magnetic_x);
      stream.next(m.magnetic_y);
      stream.next(m.magnetic_z);
      stream.next(m.twist);
      stream.next(m.wrench);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct calibration_stage_dataset_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::collector::calibration_stage_dataset_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::collector::calibration_stage_dataset_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "magnetic_x: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_x);
    s << indent << "magnetic_y: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_y);
    s << indent << "magnetic_z: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_z);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COLLECTOR_MESSAGE_CALIBRATION_STAGE_DATASET_H
