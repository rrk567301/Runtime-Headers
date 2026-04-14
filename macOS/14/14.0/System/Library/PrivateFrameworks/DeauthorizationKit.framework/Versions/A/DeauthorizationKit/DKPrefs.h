@interface DKPrefs : NSObject

+ (id)sharedInstance;

- (BOOL)isAppleInternal;
- (BOOL)boolForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)featureEnabled;
- (id)obliterationOptionsOverridePath;
- (BOOL)enabledForMDM;
- (BOOL)fakeAccountRemoval;
- (BOOL)fakeBootPolicyTransactionRetryFailure;
- (BOOL)fakeCompromisedSystem;
- (BOOL)fakeEFIPasswordSet;
- (BOOL)fakeFullSecurity;
- (BOOL)fakeInvalidDiskLayout;
- (BOOL)fakeNeedsPhotosSync;
- (BOOL)fakeNeedsiCloudSync;
- (BOOL)fakeSealedSystem;
- (BOOL)fakeSupportedHardware;
- (BOOL)fakeTimeMachineEnabled;
- (BOOL)fakeUpdateBootPolicyFailure;
- (BOOL)fakeValidDiskLayout;
- (BOOL)fakeiMessageFacetimeSignout;
- (id)iCloudSyncTimeOverride;
- (BOOL)mdmInitiated;
- (BOOL)performDryRunObliteration;
- (BOOL)skipApplePayRemoval;
- (BOOL)skipBootPolicyCalls;
- (BOOL)skipFindMyDeactivation;
- (BOOL)skipNVRAM;
- (BOOL)skipReboot;
- (BOOL)skipSystemModalBlur;
- (id)valueForKey:(id)a0 usingManaged:(BOOL)a1;

@end
