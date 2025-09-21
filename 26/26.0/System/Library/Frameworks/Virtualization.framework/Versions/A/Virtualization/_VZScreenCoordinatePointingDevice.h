@interface _VZScreenCoordinatePointingDevice : _VZPointingDevice {
    struct OptionSet<VzCore::Hardware::PointingDeviceButton> { unsigned int _storage; } _pressedButtons;
}

+ (BOOL)requiresGrabbingMouseInput;

- (id).cxx_construct;
- (void)sendPointerEvents:(id)a0;

@end
