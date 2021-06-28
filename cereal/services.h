/* THIS IS AN AUTOGENERATED FILE, PLEASE EDIT services.py */
#ifndef __SERVICES_H
#define __SERVICES_H
struct service { char name[0x100]; int port; bool should_log; int frequency; int decimation; };
static struct service services[] = {
  { "roadCameraState", 8001, true, 20, 1 },
  { "sensorEvents", 8002, true, 100, 100 },
  { "gpsNMEA", 8003, true, 9, -1 },
  { "deviceState", 8004, true, 2, 1 },
  { "can", 8005, true, 100, -1 },
  { "controlsState", 8006, true, 100, 100 },
  { "features", 8007, true, 0, -1 },
  { "pandaState", 8008, true, 2, 1 },
  { "radarState", 8009, true, 20, 5 },
  { "roadEncodeIdx", 8010, true, 20, 1 },
  { "liveTracks", 8011, true, 20, -1 },
  { "sendcan", 8012, true, 100, -1 },
  { "logMessage", 8013, true, 0, -1 },
  { "liveCalibration", 8014, true, 4, 4 },
  { "androidLog", 8015, true, 0, 1 },
  { "carState", 8016, true, 100, 10 },
  { "carControl", 8017, true, 100, 10 },
  { "longitudinalPlan", 8018, true, 20, 2 },
  { "liveLocation", 8019, true, 0, 1 },
  { "procLog", 8020, true, 0, -1 },
  { "gpsLocationExternal", 8021, true, 10, 1 },
  { "ubloxGnss", 8023, true, 10, -1 },
  { "clocks", 8024, true, 1, 1 },
  { "liveMpc", 8025, false, 20, -1 },
  { "liveLongitudinalMpc", 8026, false, 20, -1 },
  { "ubloxRaw", 8027, true, 20, -1 },
  { "liveLocationKalman", 8028, true, 20, 2 },
  { "uiLayoutState", 8029, true, 0, -1 },
  { "liveParameters", 8030, true, 20, 2 },
  { "cameraOdometry", 8031, true, 20, 5 },
  { "lateralPlan", 8032, true, 20, 2 },
  { "thumbnail", 8033, true, 0, 1 },
  { "carEvents", 8034, true, 1, 1 },
  { "carParams", 8035, true, 0, 1 },
  { "driverCameraState", 8036, true, 20, 1 },
  { "driverEncodeIdx", 8037, true, 20, 1 },
  { "driverState", 8038, true, 20, 1 },
  { "driverMonitoringState", 8039, true, 20, 1 },
  { "offroadLayout", 8040, false, 0, -1 },
  { "wideRoadEncodeIdx", 8041, true, 20, 1 },
  { "wideRoadCameraState", 8042, true, 20, 1 },
  { "modelV2", 8043, true, 20, 20 },
  { "managerState", 8044, true, 2, 1 },
  { "testModel", 8045, false, 0, -1 },
  { "testLiveLocation", 8046, false, 0, -1 },
  { "testJoystick", 8047, false, 0, -1 },
};
#endif

