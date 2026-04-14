@interface DKPrefs : NSObject

+ (id)sharedInstance;

- (id)valueForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (BOOL)isAppleInternal;
- (BOOL)featureEnabled;
- (BOOL)mdmInitiated;
- (BOOL)enabledForMDM;
- (BOOL)fakeNeedsiCloudSync;
- (id)iCloudSyncTimeOverride;
- (BOOL)fakeNeedsPhotosSync;
- (BOOL)fakeValidDiskLayout;
- (BOOL)fakeInvalidDiskLayout;
- (BOOL)fakeTimeMachineEnabled;
- (BOOL)fakeiMessageFacetimeSignout;
- (BOOL)fakeAccountRemoval;
- (BOOL)fakeSealedSystem;
- (BOOL)fakeCompromisedSystem;
- (BOOL)fakeFullSecurity;
- (BOOL)fakeEFIPasswordSet;
- (BOOL)fakeSupportedHardware;
- (BOOL)skipFindMyDeactivation;
- (BOOL)skipApplePayRemoval;
- (BOOL)skipReboot;
- (BOOL)skipNVRAM;
- (BOOL)skipSystemModalBlur;
- (BOOL)skipBootPolicyCalls;
- (BOOL)performDryRunObliteration;
- (id)obliterationOptionsOverridePath;
- (BOOL)fakeUpdateBootPolicyFailure;
- (BOOL)fakeBootPolicyTransactionRetryFailure;
- (id)valueForKey:(id)a0 usingManaged:(BOOL)a1;

@end
