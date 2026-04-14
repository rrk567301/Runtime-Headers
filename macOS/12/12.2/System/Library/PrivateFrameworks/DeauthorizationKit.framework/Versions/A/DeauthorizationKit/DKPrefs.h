@interface DKPrefs : NSObject

+ (id)sharedInstance;

- (id)valueForKey:(id)a0;
- (BOOL)isAppleInternal;
- (BOOL)boolForKey:(id)a0;
- (BOOL)featureEnabled;
- (BOOL)fakeiMessageFacetimeSignout;
- (id)valueForKey:(id)a0 usingManaged:(BOOL)a1;
- (BOOL)mdmInitiated;
- (BOOL)enabledForMDM;
- (BOOL)fakeNeedsiCloudSync;
- (id)iCloudSyncTimeOverride;
- (BOOL)fakeNeedsPhotosSync;
- (BOOL)fakeValidDiskLayout;
- (BOOL)fakeInvalidDiskLayout;
- (BOOL)fakeTimeMachineEnabled;
- (BOOL)fakeAccountRemoval;
- (BOOL)fakeSealedSystem;
- (BOOL)fakeCompromisedSystem;
- (BOOL)fakeFullSecurity;
- (BOOL)fakeEFIPasswordSet;
- (BOOL)fakeSupportedHardware;
- (BOOL)skipFindMyDeactivation;
- (BOOL)skipReboot;
- (BOOL)skipNVRAM;
- (BOOL)skipSystemModalBlur;
- (BOOL)skipBootPolicyCalls;
- (BOOL)performDryRunObliteration;
- (id)obliterationOptionsOverridePath;
- (BOOL)fakeUpdateBootPolicyFailure;

@end
