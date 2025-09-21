@interface OSPConfigureRequestOperation : OSPOperation

@property char mountedPreboot;
@property int prebootLockDescriptor;

- (id)description;
- (void)main;
- (void)cleanUp;
- (char)_initializeDevice;
- (char)_initializeTargetVolume;
- (char)_loadSecureBootBundle;
- (char)_mountPreboot;
- (char)_preflightChecks;
- (char)_prepareTemporaryDirectories;

@end
