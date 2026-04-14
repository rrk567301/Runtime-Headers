@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (void)simulateStatus:(long long)a0;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (id)authorizationRecords;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (BOOL)isAuthorizationRestricted;
- (id)isUnitTestingImpl;
- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (void)saveAuthorizationRecord:(id)a0;
- (void)stopSimulation;

@end
