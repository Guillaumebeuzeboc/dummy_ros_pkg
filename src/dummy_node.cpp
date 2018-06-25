#include "dummy/dummy.hpp"

int main(int argc, char** argv) {
    ros::init(argc, argv, "dummy_cpp");
    ros::NodeHandle nh;
    ros::NodeHandle nh_p("~");

    ros::spin();

    return 0;
}
