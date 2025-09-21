@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)bundleIdentifierForIdentity:(id)a0;
+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (char)isUnitTesting;
- (void)simulateStatus:(long long)a0;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (id)authorizationRecords;
- (id)bundleIdentifierForAuditToken:(id)a0 assumedIdentity:(id)a1;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (char)isAuthorizationRestricted;
- (id)isUnitTestingImpl;
- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveAuthorizationRecord:(id)a0;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(char)a1;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(char)a2;
- (void)stopSimulation;

@end
