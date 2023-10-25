// Generated by gencpp from file tle493dw2b6_nano_processor/MagneticFieldVector.msg
// DO NOT EDIT!


#ifndef TLE493DW2B6_NANO_PROCESSOR_MESSAGE_MAGNETICFIELDVECTOR_H
#define TLE493DW2B6_NANO_PROCESSOR_MESSAGE_MAGNETICFIELDVECTOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tle493dw2b6_nano_processor
{
template <class ContainerAllocator>
struct MagneticFieldVector_
{
  typedef MagneticFieldVector_<ContainerAllocator> Type;

  MagneticFieldVector_()
    : magnetic_x(0.0)
    , magnetic_y(0.0)
    , magnetic_z(0.0)  {
    }
  MagneticFieldVector_(const ContainerAllocator& _alloc)
    : magnetic_x(0.0)
    , magnetic_y(0.0)
    , magnetic_z(0.0)  {
  (void)_alloc;
    }



   typedef float _magnetic_x_type;
  _magnetic_x_type magnetic_x;

   typedef float _magnetic_y_type;
  _magnetic_y_type magnetic_y;

   typedef float _magnetic_z_type;
  _magnetic_z_type magnetic_z;





  typedef boost::shared_ptr< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> const> ConstPtr;

}; // struct MagneticFieldVector_

typedef ::tle493dw2b6_nano_processor::MagneticFieldVector_<std::allocator<void> > MagneticFieldVector;

typedef boost::shared_ptr< ::tle493dw2b6_nano_processor::MagneticFieldVector > MagneticFieldVectorPtr;
typedef boost::shared_ptr< ::tle493dw2b6_nano_processor::MagneticFieldVector const> MagneticFieldVectorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator1> & lhs, const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator2> & rhs)
{
  return lhs.magnetic_x == rhs.magnetic_x &&
    lhs.magnetic_y == rhs.magnetic_y &&
    lhs.magnetic_z == rhs.magnetic_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator1> & lhs, const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tle493dw2b6_nano_processor

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e76124847d3adf8d4ad3f79fa60629ef";
  }

  static const char* value(const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe76124847d3adf8dULL;
  static const uint64_t static_value2 = 0x4ad3f79fa60629efULL;
};

template<class ContainerAllocator>
struct DataType< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tle493dw2b6_nano_processor/MagneticFieldVector";
  }

  static const char* value(const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 magnetic_x\n"
"float32 magnetic_y\n"
"float32 magnetic_z\n"
;
  }

  static const char* value(const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.magnetic_x);
      stream.next(m.magnetic_y);
      stream.next(m.magnetic_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MagneticFieldVector_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tle493dw2b6_nano_processor::MagneticFieldVector_<ContainerAllocator>& v)
  {
    s << indent << "magnetic_x: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_x);
    s << indent << "magnetic_y: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_y);
    s << indent << "magnetic_z: ";
    Printer<float>::stream(s, indent + "  ", v.magnetic_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TLE493DW2B6_NANO_PROCESSOR_MESSAGE_MAGNETICFIELDVECTOR_H
