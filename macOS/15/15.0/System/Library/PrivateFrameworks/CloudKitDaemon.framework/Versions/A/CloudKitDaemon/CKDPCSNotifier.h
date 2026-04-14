@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDPCSNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSMutableDictionary *missingIdentitiesContextMap;
@property (retain, nonatomic) NSMutableDictionary *testOverrides;

+ (id)sharedNotifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0 forManagerUUID:(id)a1;
- (void)addMissingIdentityPublicKeys:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)addServicesWithMissingIdentities:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)addTestOverrides:(id)a0;
- (BOOL)checkAndClearTestOverrides:(id)a0;
- (void)clearContextIfUnnecessaryForManagerUUID:(id)a0;
- (void)clearServicesAndPublicKeysForManagerUUID:(id)a0;
- (void)securityViewBecameReady:(id)a0;
- (void)setupIdentityUpdateNotificationHandling;

@end
