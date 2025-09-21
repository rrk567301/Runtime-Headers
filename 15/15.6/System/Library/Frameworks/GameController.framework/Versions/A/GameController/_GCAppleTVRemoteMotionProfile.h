@class GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {
    struct { double x; double y; double z; } _gravity;
    struct { double x; double y; double z; } _prevGravity;
    struct { double x; double y; double z; } _userAcceleration;
    struct GCQuaternion { double x; double y; double z; double w; } _attitude;
    struct GCQuaternion { double x; double y; double z; double w; } _prevAttitude;
    struct { double pitch; double yaw; double roll; } _eulerAngles;
    struct { double pitch; double yaw; double roll; } _prevEulerAngles;
    struct { double x; double y; double z; } _rotationRate;
    float _tip;
    float _tilt;
    char _linkedOnOrAfterCompassFeature;
    char _motionLite;
    char _compassEnabled;
    id /* block */ _valueChangedHandler;
    id /* block */ _internalValueChangedHandler;
    char _emulatedMotionEnabled;
    char _motionUpdatedEnabled;
    char _paused;
    GCController *_controller;
}

- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })gravity;
- (id)controller;
- (id)initWithController:(id)a0;
- (void)_startDeviceMotionUpdatesHelper;
- (char)hasRotationRate;
- (void)setInternalValueChangedHandler:(id /* block */)a0;
- (void)_setMotionLite:(char)a0;
- (char)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(char)a0;
- (void)_setAttitude:(struct GCQuaternion { double x0; double x1; double x2; double x3; })a0;
- (void)_setCompassEnabled:(char)a0;
- (void)_setGravity:(struct { double x0; double x1; double x2; })a0;
- (void)_setRotationRate:(struct { double x0; double x1; double x2; })a0;
- (void)_setUserAcceleration:(struct { double x0; double x1; double x2; })a0;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdatesHelper;
- (float)_tilt;
- (float)_tip;
- (struct GCQuaternion { double x0; double x1; double x2; double x3; })attitude;
- (char)hasAttitude;
- (char)hasAttitudeAndRotationRate;
- (char)hasGravityAndUserAcceleration;
- (id /* block */)internalValueChangedHandler;
- (char)isEmulatedMicroGamepad;
- (struct { double x0; double x1; double x2; })rotationRate;
- (void)setValueChangedHandler:(id /* block */)a0;
- (struct { double x0; double x1; double x2; })userAcceleration;
- (id /* block */)valueChangedHandler;

@end
