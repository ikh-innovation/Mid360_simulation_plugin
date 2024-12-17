
  
/*
 * Created on Sun Dec 17 2024
 *
 * Author: stavrako
 */

#ifndef LIVOX_LASER_SIMULATION_LIVOX_POINT_XYZRTRT_H_
#define LIVOX_LASER_SIMULATION_LIVOX_POINT_XYZRTRT_H_

#define PCL_NO_PRECOMPILE

#include <pcl/point_types.h>
#include <pcl/pcl_macros.h>
#include <pcl/point_types.h>

namespace pcl{
struct LivoxPointXyzrtrt{
  float x;            /**< x             */
  float y;            /**< y             */
  float z;            /**< z             */
  
  float intensity;    /**< intensity   */
  uint8_t tag;        /**< Livox point tag   */
  uint8_t ring;       /**< Laser ring id     */
  double time;        /**< Time         */
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW;
  EIGEN_ALIGN16;
};

}

POINT_CLOUD_REGISTER_POINT_STRUCT (LivoxPointXyzrtrt,  
                                   (float, x, x)
                                   (float, y, y)
                                   (float, z, z)
                                   (float, intensity, intensity)
                                   (uint8_t, tag, tag)
                                   (uint8_t, ring, ring)
                                   (double, time, time)
)

#endif