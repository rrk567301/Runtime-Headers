@class NSNumber;

@interface BYAnalyzeOperation : BYOperation

@property (retain) NSNumber *localPolicyExistsOverride;
@property (retain) NSNumber *currentSecurityModeOverride;
@property (retain) NSNumber *verifyInstalledBootObjectsOverride;
@property (retain) NSNumber *installedBootObjectsMatchRestoreBundleOverride;
@property (retain) NSNumber *verifyManifestOverride;
@property (retain) NSNumber *isAppleInternalOverride;
@property (retain) NSNumber *verifyRestoreBundleOverride;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_isAppleInternal;
- (BOOL)_verifyRestoreBundleWithError:(id *)a0;
- (BOOL)_localPolicyExists;
- (unsigned int)_currentSecurityMode;
- (void)_applyForceEnableOptions;
- (BOOL)_verifyInstalledBootObjects;
- (BOOL)_installedBootObjectsMatchRestoreBundle;
- (BOOL)_verifyManifest:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)_applyForceDisableOptions;

@end
