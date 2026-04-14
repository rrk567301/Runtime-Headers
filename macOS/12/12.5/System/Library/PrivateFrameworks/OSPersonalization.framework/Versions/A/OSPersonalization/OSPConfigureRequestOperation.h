@interface OSPConfigureRequestOperation : OSPOperation

@property BOOL mountedPreboot;
@property int prebootLockDescriptor;

- (id)description;
- (void)main;
- (void)cleanUp;
- (BOOL)_preflightChecks;
- (BOOL)_initializeDevice;
- (BOOL)_initializeTargetVolume;
- (BOOL)_mountPreboot;
- (BOOL)_loadSecureBootBundle;
- (BOOL)_prepareTemporaryDirectories;

@end
