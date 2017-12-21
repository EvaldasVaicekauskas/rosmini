#include "ros/ros.h"
#include "ros_wms/AddTwoInts.h"
#include <iostream>

  ros_wms::AddTwoInts srv;


  struct products {
    char itemName[50];
    int itemNumber;
    int location;
  };
  struct products *product;



  void printProduct( struct products product ) {
    // struct productss {
    //   char itemName[50];
    //   int itemNumber;
    //   int location;
    // };
    //struct productss *productss;
    //productss[0].itemNumber = products_print.itemNumber;
  std::cerr << "itemNumber: " << product.itemNumber << '\n';
  std::cerr << "itemName: " << product.itemName << '\n';
  std::cerr << "location: " << product.location << '\n';

  }

bool add(ros_wms::AddTwoInts::Request  &req,
         ros_wms::AddTwoInts::Response &res
          )
{
  if (req.itemNumber = 1) {
    // res.itemNumber = apple.itemNumber;
    // std::cerr << "You should see this" << '\n';
    // std::cerr << "Request item number: " << req.itemNumber << '\n';
    // std::cerr << "Response item number: " << res.itemNumber << '\n';
    //printProduct(product[1]);

  }
  return true;
}
void databaseHardcoded()
{
  //Hardcoded database
  product[1].itemNumber = 1;
  product[1].location = 2;
  strcpy( product[1].itemName, "apple");

  product[2].itemNumber = 2;
  product[2].location = 43;
  strcpy( product[2].itemName, "banana");

  product[3].itemNumber = 3;
  product[3].location = 23;
  strcpy( product[3].itemName, "pineapple");

  product[4].itemNumber = 4;
  product[4].location = 63;
  strcpy( product[4].itemName, "kiwi");

  product[4].itemNumber = 5;
  product[4].location = 27;
  strcpy( product[4].itemName, "oranges");
}

void setResToProduct(ros_wms::AddTwoInts::Request  &req){
  int n = req.itemNumber;
  product[0].itemNumber = product[n].itemNumber;
  product[0].location = product[n].location;
  strcpy( product[n].itemName, product[0].itemName);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "add_two_ints_server");

  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_two_ints", add);
  ROS_INFO("Warehouse stuff.");
  ros::spin();

  return 0;
}

#include <iostream>
#include <ros/ros.h>


using namespace std;

void printItem( struct Items Item );

struct Items {
    int   itemNumber;
    char  itemName[50];
    float x_coordinate;
    float y_coordinate;
    int shelf;
    int row;
    int column;
};

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
//     // Print Item1 info
//     printItem( Item[0] );
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
