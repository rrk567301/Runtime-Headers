@interface DKPrefs : NSObject

+ (id)sharedInstance;

- (char)boolForKey:(id)a0;
- (char)isAppleInternal;
- (id)valueForKey:(id)a0;
- (char)featureEnabled;
- (char)mdmInitiated;
- (id)obliterationOptionsOverridePath;
- (char)enabledForMDM;
- (char)fakeAccountRemoval;
- (char)fakeBootPolicyTransactionRetryFailure;
- (char)fakeCompromisedSystem;
- (char)fakeEFIPasswordSet;
- (char)fakeFullSecurity;
- (char)fakeInvalidDiskLayout;
- (char)fakeLockdownModeEnabled;
- (char)fakeNeedsPhotosSync;
- (char)fakeNeedsiCloudSync;
- (char)fakeSealedSystem;
- (id)fakeSupportedHardware;
- (char)fakeTimeMachineEnabled;
- (char)fakeUpdateBootPolicyFailure;
- (char)fakeValidDiskLayout;
- (char)fakeiMessageFacetimeSignout;
- (id)iCloudSyncTimeOverride;
- (char)performDryRunObliteration;
- (char)skipApplePayRemoval;
- (char)skipBootPolicyCalls;
- (char)skipFindMyDeactivation;
- (char)skipNVRAM;
- (char)skipReboot;
- (char)skipSystemModalBlur;
- (id)valueForKey:(id)a0 usingManaged:(char)a1;

@end
