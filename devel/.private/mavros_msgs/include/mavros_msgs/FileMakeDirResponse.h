// Generated by gencpp from file mavros_msgs/FileMakeDirResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEMAKEDIRRESPONSE_H
#define MAVROS_MSGS_MESSAGE_FILEMAKEDIRRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct FileMakeDirResponse_
{
  typedef FileMakeDirResponse_<ContainerAllocator> Type;

  FileMakeDirResponse_()
    : success(false)
    , r_errno(0)  {
    }
  FileMakeDirResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , r_errno(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _r_errno_type;
  _r_errno_type r_errno;





  typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FileMakeDirResponse_

typedef ::mavros_msgs::FileMakeDirResponse_<std::allocator<void> > FileMakeDirResponse;

typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirResponse > FileMakeDirResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::FileMakeDirResponse const> FileMakeDirResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.r_errno == rhs.r_errno;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85394f2e941a8937ac567a617f06157f";
  }

  static const char* value(const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85394f2e941a8937ULL;
  static const uint64_t static_value2 = 0xac567a617f06157fULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileMakeDirResponse";
  }

  static const char* value(const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"int32 r_errno\n"
"\n"
;
  }

  static const char* value(const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.r_errno);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileMakeDirResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileMakeDirResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "r_errno: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r_errno);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEMAKEDIRRESPONSE_H
