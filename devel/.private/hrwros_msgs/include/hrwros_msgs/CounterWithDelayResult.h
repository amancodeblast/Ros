// Generated by gencpp from file hrwros_msgs/CounterWithDelayResult.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYRESULT_H
#define HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_msgs
{
template <class ContainerAllocator>
struct CounterWithDelayResult_
{
  typedef CounterWithDelayResult_<ContainerAllocator> Type;

  CounterWithDelayResult_()
    : result_message()  {
    }
  CounterWithDelayResult_(const ContainerAllocator& _alloc)
    : result_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_message_type;
  _result_message_type result_message;





  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> const> ConstPtr;

}; // struct CounterWithDelayResult_

typedef ::hrwros_msgs::CounterWithDelayResult_<std::allocator<void> > CounterWithDelayResult;

typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayResult > CounterWithDelayResultPtr;
typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayResult const> CounterWithDelayResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/aman/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/aman/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be8a5eb8699d93f379b287dcfc6e376c";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe8a5eb8699d93f3ULL;
  static const uint64_t static_value2 = 0x79b287dcfc6e376cULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/CounterWithDelayResult";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string result_message		# Result message: simple string message for the result.\n"
;
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CounterWithDelayResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::CounterWithDelayResult_<ContainerAllocator>& v)
  {
    s << indent << "result_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYRESULT_H
