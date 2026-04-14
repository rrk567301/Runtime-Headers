@class NSNumber;

@interface BYAnalyzeOperation : BYOperation

@property (retain) NSNumber *localPolicyExistsOverride;
@property (retain) NSNumber *currentSecurityModeOverride;
@property (retain) NSNumber *verifyInstalledBootObjectsOverride;
@property (retain) NSNumber *installedBootObjectsMatchRestoreBundleOverride;
@property (retain) NSNumber *verifyManifestOverride;
@property (retain) NSNumber *isSFRAppleInternalOverride;
@property (retain) NSNumber *verifyRestoreBundleOverride;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_verifyRestoreBundleWithError:(id *)a0;
- (BOOL)_localPolicyExists;
- (unsigned int)_currentSecurityMode;
- (void)_applyForceEnableOptions;
- (void)_applyForceDisableOptions;
- (BOOL)_verifyManifest:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_verifyInstalledBootObjects;
- (BOOL)_installedBootObjectsMatchRestoreBundle;
- (BOOL)_isSFRAppleInternal;

@end
