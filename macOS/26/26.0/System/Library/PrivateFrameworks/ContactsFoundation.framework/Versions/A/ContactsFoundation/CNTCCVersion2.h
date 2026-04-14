@class NSNumber, NSObject;
@protocol OS_tcc_server, OS_tcc_message_options, OS_tcc_service;

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (readonly, nonatomic) NSObject<OS_tcc_server> *server;
@property (readonly, nonatomic) NSObject<OS_tcc_service> *service;
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForSyncNoPrompt;
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForAsyncPrompt;
@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)os_log;
+ (id)bundleIdentifierForIdentity:(id)a0;

- (long long)checkAuthorizationStatusOfCurrentProcess;
- (id)credentialForAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)saveAuthorizationRecord:(id)a0;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)isUnitTestingImpl;
- (BOOL)isUnitTesting;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(BOOL)a1;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(BOOL)a2;
- (id)init;
- (id)authorizationRecords;
- (BOOL)isAuthorizationRestricted;
- (void)requestAuthorizationWithCredential:(id)a0 messageOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (void)simulateStatus:(long long)a0;
- (id)bundleIdentifierForAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)stopSimulation;
- (void).cxx_destruct;

@end
