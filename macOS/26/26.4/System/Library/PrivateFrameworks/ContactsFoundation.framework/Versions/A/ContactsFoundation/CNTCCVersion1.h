@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)bundleIdentifierForIdentity:(id)a0;
+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)simulateStatus:(long long)a0;
- (id)isUnitTestingImpl;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (id)authorizationRecords;
- (id)bundleIdentifierForAuditToken:(id)a0 assumedIdentity:(id)a1;
- (BOOL)isUnitTesting;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(BOOL)a1;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (void).cxx_destruct;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(BOOL)a2;
- (void)stopSimulation;
- (void)saveAuthorizationRecord:(id)a0;
- (BOOL)isAuthorizationRestricted;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;

@end
