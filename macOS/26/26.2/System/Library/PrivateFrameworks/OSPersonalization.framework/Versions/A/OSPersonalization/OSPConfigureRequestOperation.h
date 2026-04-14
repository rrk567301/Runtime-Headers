@interface OSPConfigureRequestOperation : OSPOperation

@property BOOL mountedPreboot;
@property int prebootLockDescriptor;

- (void)main;
- (id)description;
- (void)cleanUp;
- (BOOL)_initializeDevice;
- (BOOL)_initializeTargetVolume;
- (BOOL)_loadSecureBootBundle;
- (BOOL)_mountPreboot;
- (BOOL)_preflightChecks;
- (BOOL)_prepareTemporaryDirectories;

@end
