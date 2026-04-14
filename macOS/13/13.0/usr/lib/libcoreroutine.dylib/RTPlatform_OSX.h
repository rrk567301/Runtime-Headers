@interface RTPlatform_OSX : RTPlatform

- (id)deviceClass;
- (BOOL)internalInstall;
- (id)userAssignedDeviceName;
- (id)systemModel;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)supportsMultiUser;
- (BOOL)macOSPlatform;

@end
