#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <ros/ros.h>

class dummy {
  public:
    dummy(ros::NodeHandle& nh, const ros::NodeHandle& nh_p);
    ~dummy();

  private:

    ros::NodeHandle nh_;
    ros::NodeHandle nh_p_;

};

#endif  // DUMMY_HPP
