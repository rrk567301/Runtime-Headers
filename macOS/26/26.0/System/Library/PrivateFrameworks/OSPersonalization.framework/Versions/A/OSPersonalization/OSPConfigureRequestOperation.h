@interface OSPConfigureRequestOperation : OSPOperation

@property BOOL mountedPreboot;
@property int prebootLockDescriptor;

- (void)cleanUp;
- (void)main;
- (id)description;
- (BOOL)_initializeDevice;
- (BOOL)_initializeTargetVolume;
- (BOOL)_loadSecureBootBundle;
- (BOOL)_mountPreboot;
- (BOOL)_preflightChecks;
- (BOOL)_prepareTemporaryDirectories;

@end
