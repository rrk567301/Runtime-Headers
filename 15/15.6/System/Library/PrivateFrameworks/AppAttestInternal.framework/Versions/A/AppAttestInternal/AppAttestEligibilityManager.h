@class NSArray;

@interface AppAttestEligibilityManager : NSObject

@property (retain, nonatomic) NSArray *allowlistedDaemons;
@property (retain, nonatomic) NSArray *allowlistedExtensions;

- (void).cxx_destruct;
- (char)containsValidEntitlements;
- (id)fetchBundleRecordFor:(struct { unsigned int x0[8]; })a0;
- (id)fetchEntitlementForAuditToken:(struct { unsigned int x0[8]; })a0 withKey:(id)a1;
- (char)isEligibleApplicationExtensionFor:(struct { unsigned int x0[8]; })a0;
- (char)isEligibleApplicationFor:(struct { unsigned int x0[8]; })a0;
- (char)isEligibleClientFor:(struct { unsigned int x0[8]; })a0;
- (char)isEligibleDaemonFor:(struct { unsigned int x0[8]; })a0;
- (char)isEligibleForPrivService:(struct { unsigned int x0[8]; })a0;
- (char)isSupportedHardware;
- (char)isSupportedSPIClient;
- (char)meetsSecurityControlsForAuditToken:(struct { unsigned int x0[8]; })a0;

@end
