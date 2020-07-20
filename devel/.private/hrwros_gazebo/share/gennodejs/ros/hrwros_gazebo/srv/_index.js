
"use strict";

let PopulationControl = require('./PopulationControl.js')
let AGVControl = require('./AGVControl.js')
let SubmitTray = require('./SubmitTray.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')

module.exports = {
  PopulationControl: PopulationControl,
  AGVControl: AGVControl,
  SubmitTray: SubmitTray,
  ConveyorBeltControl: ConveyorBeltControl,
  VacuumGripperControl: VacuumGripperControl,
  GetMaterialLocations: GetMaterialLocations,
};
