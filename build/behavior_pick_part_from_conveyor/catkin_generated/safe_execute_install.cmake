execute_process(COMMAND "/home/aman/hrwros_ws/build/behavior_pick_part_from_conveyor/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/aman/hrwros_ws/build/behavior_pick_part_from_conveyor/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
