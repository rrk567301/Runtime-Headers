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
- (void)_applyForceDisableOptions;
- (void)_applyForceEnableOptions;
- (unsigned int)_currentSecurityMode;
- (char)_installedBootObjectsMatchRestoreBundle;
- (char)_isSFRAppleInternal;
- (char)_localPolicyExists;
- (char)_verifyInstalledBootObjects;
- (char)_verifyManifest:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (char)_verifyRestoreBundleWithError:(id *)a0;

@end
