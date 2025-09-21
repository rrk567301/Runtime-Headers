@class NSMutableDictionary, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDPCSNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSMutableDictionary *missingIdentitiesContextMap;
@property (retain, nonatomic) NSMutableDictionary *cloudCoreIdentityContextsMap;
@property (retain, nonatomic) NSMutableSet *mutableServicesNeedingDBRReauthentication;
@property (retain, nonatomic) NSMutableDictionary *testOverrides;
@property (readonly, nonatomic) NSSet *servicesNeedingDBRReauthentication;

+ (id)sharedNotifier;

- (void)addServicesNeedingDBRReauthentication:(id)a0;
- (void)dealloc;
- (void)clearServicesNeedingDBRReauthentication;
- (void)addServicesWithMissingIdentities:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)registerIdentityChangeWatcher:(id)a0 service:(id)a1 account:(id)a2;
- (void)clearServicesAndPublicKeysForManagerUUID:(id)a0;
- (BOOL)hasOutstandingServicesNeedingDBRReauthentication;
- (void)addContext:(id)a0 forManagerUUID:(id)a1;
- (void)addTestOverrides:(id)a0;
- (id)init;
- (void)securityViewBecameReady:(id)a0;
- (BOOL)checkAndClearTestOverrides:(id)a0;
- (void)setupGuitarfishRepairNotificationHandling;
- (BOOL)serviceNeedsDBRReauthentication:(id)a0;
- (void)setupIdentityUpdateNotificationHandling;
- (void)addMissingIdentityPublicKeys:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)clearContextIfUnnecessaryForManagerUUID:(id)a0;
- (void)unregisterIdentityChangeWatcher:(id)a0;
- (void).cxx_destruct;

@end
