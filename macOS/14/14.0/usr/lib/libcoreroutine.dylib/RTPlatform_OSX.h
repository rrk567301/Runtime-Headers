@interface RTPlatform_OSX : RTPlatform

- (BOOL)internalInstall;
- (id)deviceClass;
- (BOOL)macOSPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)supportsMultiUser;
- (id)systemModel;
- (id)userAssignedDeviceName;

@end
