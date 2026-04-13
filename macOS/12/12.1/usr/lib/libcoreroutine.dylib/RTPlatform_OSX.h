@interface RTPlatform_OSX : RTPlatform

- (id)deviceClass;
- (BOOL)internalInstall;
- (BOOL)supportsCoreRoutineCapability;
- (id)userAssignedDeviceName;
- (id)systemModel;
- (BOOL)macOSPlatform;
- (BOOL)supportsMultiUser;

@end
