@interface RTPlatform_OSX : RTPlatform

- (id)deviceClass;
- (BOOL)supportsMultiUser;
- (BOOL)internalInstall;
- (BOOL)macOSPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (id)systemModel;
- (id)userAssignedDeviceName;

@end
