#include "dummy/dummy.hpp"

dummy::dummy(ros::NodeHandle& nh, const ros::NodeHandle& nh_p)
  : nh_(nh)
  , nh_p_(nh_p) {
      std::string my_string;
      nh_p_.getParam("dummy_param", my_string);
}

dummy::~dummy() {
}
