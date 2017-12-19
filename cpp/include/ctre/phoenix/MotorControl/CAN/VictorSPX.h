#pragma once

#include "ctre/phoenix/MotorControl/CAN/BaseMotorController.h"
#include "ctre/phoenix/MotorControl/IMotorController.h"

namespace ctre {
namespace phoenix {
namespace motorcontrol{
namespace can {

class VictorSPX: public virtual ctre::phoenix::motorcontrol::can::BaseMotorController,
                 public virtual ctre::phoenix::motorcontrol::IMotorController {

public:
  VictorSPX(int deviceNumber);
  virtual ~VictorSPX() {}
}; //class VictorSPX

} //namespace can
} //namespace motorcontrol
} //namespace phoenix
} //namespace ctre