<<<<<<< current
#include "ros/ros.h"
#include "ros_wms/AddTwoInts.h"
=======
#include <iostream>
#include <ros/ros.h>
#include <ros_wms/AddTwoInts.h>
>>>>>>> before discard

  ros_wms::AddTwoInts srv;

//Hardcoded database of wares in the form of a struct
  struct product {
    char itemName[50];
    int itemNumber;
    int location;
  } item, apple, banana;

bool add(ros_wms::AddTwoInts::Request  &req,
         ros_wms::AddTwoInts::Response &res)
{
  if (req.itemNumber = 1) {
    res.itemNumber = apple.itemNumber;
    std::cerr << "You should see this" << '\n';
    std::cerr << "Request item number: " << req.itemNumber << '\n';
    std::cerr << "Response item number: " << res.itemNumber << '\n';

  }
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_two_ints_server");
  apple.itemNumber = 3;
  apple.location = 2;
  apple.itemName = apple;
  item.itemNumber = apple.itemNumber;
  item.location = apple.location;
  item.itemName = apple.itemName;
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_two_ints", add);
  ROS_INFO("Warehouse stuff.");
  ros::spin();

  return 0;
}





// #include <iostream>
// #include <ros/ros.h>
//
//
//
// using namespace std;
//
// void printItem( struct Items Item );
//
// struct Items {
//     int   itemNumber;
//     char  itemName[50];
//     float x_coordinate;
//     float y_coordinate;
//     int shelf;
//     int row;
//     int column;
// };
//
// int main(int argc, char *argv[])
// {
//     ros::init(argc, argv, "busroute");
//     struct Items Item[6];        // Declare Item1 of type Item
//     //struct Items Item        // Declare Item2 of type Item
//
//       // Item 1 specification
//       Item[0].itemNumber = 649;
//       strcpy( Item[0].itemName, "Chand Miyan");
//       Item[0].x_coordinate = 159.643924;
//       Item[0].y_coordinate = 159.643924;
//       Item[0].shelf = 1;
//       Item[0].row = 1;
//       Item[0].column = 44;
//
//       Item[1].itemNumber = 650;
//       strcpy( Item[1].itemName, "Sune Petersen");
//       Item[1].x_coordinate = 158.643924;
//       Item[1].y_coordinate = 158.643924;
//       Item[1].shelf = 2;
//       Item[1].row = 3;
//       Item[1].column = 24;
//
//     // Print Item1 info
//     printItem( Item[0] );
//     printItem( Item[1] );
//
//     ros::spin(); //Spinns the ros packages
//     return 0;
// }
// void printItem( struct Items Item ) {
//   std::cerr << "itemNumber: " << Item.itemNumber << '\n';
//   std::cerr << "itemName: " << Item.itemName << '\n';
//   std::cerr << "x-coordinate: " << Item.x_coordinate << '\n';
//   std::cerr << "y-coordinate" << Item.y_coordinate << '\n';
//   std::cerr << "shelf: " << Item.shelf << '\n';
//   std::cerr << "row: " << Item.row << '\n';
//   std::cerr << "column: " << Item.column << '\n';
// }
